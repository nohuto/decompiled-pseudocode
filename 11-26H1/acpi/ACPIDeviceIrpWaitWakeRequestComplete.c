/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestComplete @ 0x140033D60
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400328B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIWakeCompleteRequestQueue @ 0x140033C74 (ACPIWakeCompleteRequestQueue.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x14002131C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1400272FC (ACPIDeviceInternalQueueRequest.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDeviceIrpWaitWakeRequestComplete(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // bp
  __int64 v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned __int8 v8; // r8
  void (__fastcall *v9)(__int64, _QWORD, _QWORD); // rbx
  KIRQL Irql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v4 = v3;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
  {
    Irql = 0;
    KeReleaseSpinLock(&AcpiPowerQueueLock, v3);
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)(v1 + 104), 0LL);
      *(_DWORD *)(a1 + 56) &= ~0x40u;
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    IoReleaseCancelSpinLock(Irql);
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  }
  if ( (*(_QWORD *)(v5 + 1008) & 0x500000000LL) != 0 )
  {
    if ( *(int *)(a1 + 256) >= 0 )
    {
      PoSetSystemWake((PIRP)v1);
      v9 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 192);
      if ( v9 )
      {
        KeReleaseSpinLock(&AcpiPowerQueueLock, v4);
        v9(v5, *(_QWORD *)(a1 + 200), *(unsigned int *)(a1 + 256));
        v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        *(_QWORD *)(a1 + 192) = 0LL;
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 504);
    v7 = ACPIGpeIndexToGpeRegister(v6);
    v8 = 1 << (v6 & 7);
    if ( AcpiPowerSavedGpeBitsValid
      && (v8 & *((_BYTE *)GpeSavedWakeMask + v7)) != 0
      && (v8 & *((_BYTE *)GpeSavedWakeStatus + v7)) != 0 )
    {
      AcpiPowerSavedGpeBitsValid = 0;
      PoSetSystemWake((PIRP)v1);
    }
  }
  ACPIDeviceInternalQueueRequest(v5, (_QWORD *)a1, *(_DWORD *)(a1 + 56));
  KeReleaseSpinLock(&AcpiPowerQueueLock, v4);
}
