/*
 * XREFs of UsbhSignalPauseEvent @ 0x140001008
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhSignalPauseEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // si

  v4 = FdoExt();
  v5 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 1397778803;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = 0LL;
        *(_QWORD *)(v10 + v9 + 24) = v5;
      }
    }
  }
  v11 = (KSPIN_LOCK *)(v4 + 4944);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v11, v12);
}
