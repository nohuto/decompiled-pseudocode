/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x14000BE24
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 *     UsbhiSignalResumeEvent @ 0x14000B4D8 (UsbhiSignalResumeEvent.c)
 *     UsbhPortResumeComplete @ 0x14000B520 (UsbhPortResumeComplete.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  KSPIN_LOCK *v7; // rbp
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  signed __int32 v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8

  v6 = 0;
  v7 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 4944);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  v11 = *(int *)(a2 + 696);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 1397909875;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = v11;
        *(_QWORD *)(v16 + v15 + 24) = v9;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    v17 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
          v20 = *(_DWORD *)(v18 + 884);
          v21 = *(_QWORD *)(v18 + 888);
          v22 = 32LL * ((v19 - 1) & v20);
          *(_DWORD *)(v22 + v21) = 2018666867;
          *(_QWORD *)(v22 + v21 + 8) = 0LL;
          *(_QWORD *)(v22 + v21 + 16) = 3LL;
          *(_QWORD *)(v22 + v21 + 24) = v17;
        }
      }
    }
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v6 = 1;
  }
  KeReleaseSpinLock(v7, v10);
  return v6;
}
