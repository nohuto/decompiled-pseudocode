/*
 * XREFs of WmipBuildTraceDeviceList @ 0x140488394
 * Callers:
 *     WmiSetNetworkNotify @ 0x140796234 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140A120C8 (WmiTraceRundownNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeReleaseMutant @ 0x1402F0930 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     WmipFreeTraceDeviceList @ 0x140A12168 (WmipFreeTraceDeviceList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  KIRQL v7; // al
  unsigned int v8; // ebp
  KIRQL v9; // r14
  __int64 Pool2; // rax
  void *v11; // rsi
  _UNKNOWN **v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // r9d
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v8 = WmipInUseRegEntryCount;
  v9 = v7;
  if ( !WmipInUseRegEntryCount )
  {
    v6 = -1073741632;
LABEL_16:
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v9);
    KeReleaseMutant((PRKMUTANT)&WmipSMMutex, 1, 0, 0);
    return v6;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v11 = (void *)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
    goto LABEL_16;
  }
  v12 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v13 = Pool2;
  v14 = 0;
  while ( v12 != &WmipInUseRegEntryHead )
  {
    v15 = (*((int *)v12 + 12) >> 4) & 0xF00000;
    if ( (v15 & a1) != 0 && ((_DWORD)v12[6] & 0x40000000) != 0 && v12[2] && v14 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 12);
      *(_QWORD *)v13 = v12;
      *(_DWORD *)(v13 + 8) = v15;
      v13 += 16LL;
      ++v14;
    }
    v12 = (_UNKNOWN **)*v12;
  }
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v9);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v17);
  if ( v14 )
  {
    *a2 = v11;
    *a3 = v14;
  }
  else
  {
    v6 = -1073741632;
    WmipFreeTraceDeviceList(v11);
  }
  return v6;
}
