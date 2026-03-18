/*
 * XREFs of UsbhAcquirePowerContext @ 0x14003180C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwGetActivityId @ 0x14003642C (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhAcquirePowerContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  _DWORD *v11; // r15
  __int64 result; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v11 = FdoExt(a1);
  result = ExAllocatePool2(64LL, 144LL, 1112885333LL);
  v13 = result;
  if ( result )
  {
    *(_DWORD *)result = 2018662224;
    *(_DWORD *)(result + 32) = a6;
    *(_QWORD *)(result + 48) = a3;
    *(_QWORD *)(result + 40) = a1;
    if ( a4 )
    {
      *(_DWORD *)(result + 24) = *(_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL);
      *(_QWORD *)(result + 56) = a4;
      UsbhEtwGetActivityId(a4, result + 120);
    }
    if ( a5 )
    {
      *(_DWORD *)(v13 + 28) = *(_DWORD *)(*(_QWORD *)(a5 + 184) + 24LL);
      *(_QWORD *)(v13 + 64) = a5;
    }
    *(_QWORD *)(v13 + 72) = a2;
    *(_QWORD *)(v13 + 80) = KeGetCurrentThread();
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
    *(_DWORD *)(a2 + 136) = 1;
    qword_14006F5A0 = (__int64)&dword_14006F5A8;
    if ( a7 )
    {
      *((_QWORD *)v11 + 114) = v13;
      *(_BYTE *)(v13 + 136) = 1;
    }
    v14 = (_QWORD *)qword_14006F660;
    v15 = (_QWORD *)(v13 + 8);
    if ( *(__int64 **)qword_14006F660 != &qword_14006F658 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 16) = qword_14006F660;
    *v15 = &qword_14006F658;
    *v14 = v15;
    qword_14006F660 = v13 + 8;
    *(_DWORD *)(a2 + 136) = 0;
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a2 + 132));
    return v13;
  }
  return result;
}
