/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x1400139C4
 * Callers:
 *     UsbhiSignalResumeEvent @ 0x1400130A0 (UsbhiSignalResumeEvent.c)
 *     UsbhPortResumeComplete @ 0x1400130F0 (UsbhPortResumeComplete.c)
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  __int64 v7; // r8
  KIRQL v8; // r14
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx

  v4 = 0;
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  v7 = *(unsigned __int16 *)(a2 + 4);
  v8 = v6;
  v9 = *(int *)(a2 + 696);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1397909875;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v9;
        *(_QWORD *)(v11 + 24) = v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 2018666867;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = 3LL;
          *(_QWORD *)(v14 + 24) = v12;
        }
      }
    }
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v8);
  return v4;
}
