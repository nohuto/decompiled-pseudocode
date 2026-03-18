/*
 * XREFs of UsbhSignalPauseEvent @ 0x140001668
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

void __fastcall UsbhSignalPauseEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // si

  v4 = FdoExt(a1);
  v5 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_DWORD *)v7 = 1397778803;
        *(_QWORD *)(v7 + 24) = v5;
      }
    }
  }
  v8 = (KSPIN_LOCK *)(v4 + 4944);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v8, v9);
}
