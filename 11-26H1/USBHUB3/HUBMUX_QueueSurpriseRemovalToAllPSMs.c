/*
 * XREFs of HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x140011DD4
 * Callers:
 *     HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x140008C50 (HUBHSM_CheckingPSMInterruptReferencesOnReset.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x140008C90 (HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x14007C7F0 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall HUBMUX_QueueSurpriseRemovalToAllPSMs(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 i; // rax
  __int64 v4; // rsi
  KIRQL v5; // al

  v1 = a1 + 2336;
  v2 = a1 + 2376;
  for ( i = *(_QWORD *)(a1 + 2376); ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    if ( v2 == i )
      break;
    (*(void (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3038LL);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  _InterlockedOr((volatile signed __int32 *)(v1 + 32), 8u);
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
}
