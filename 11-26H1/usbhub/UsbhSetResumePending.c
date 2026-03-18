/*
 * XREFs of UsbhSetResumePending @ 0x1400044E8
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002870 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  KIRQL v14; // al
  KIRQL v15; // bl

  v6 = FdoExt(a1, a2, a3, a4);
  v7 = *(unsigned __int16 *)(a2 + 4);
  v8 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1986359664;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = v8;
        *(_QWORD *)(v13 + v12 + 24) = v7;
      }
    }
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_BYTE *)(a2 + 2838) = 0;
  v15 = v14;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v15);
}
