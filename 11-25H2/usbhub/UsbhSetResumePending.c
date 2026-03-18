/*
 * XREFs of UsbhSetResumePending @ 0x1400273BC
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140025670 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  KIRQL v9; // al
  KIRQL v10; // bl

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  v5 = *(unsigned __int16 *)(a2 + 4);
  v6 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_DWORD *)v8 = 1986359664;
        *(_QWORD *)(v8 + 16) = v6;
        *(_QWORD *)(v8 + 24) = v5;
      }
    }
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
  v9 = KeAcquireSpinLockRaiseToDpc(v4 + 618);
  *(_BYTE *)(a2 + 2838) = 0;
  v10 = v9;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock(v4 + 618, v10);
}
