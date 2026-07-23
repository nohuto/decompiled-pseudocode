/*
 * XREFs of KiInvokeBugCheckEntryCallbacks @ 0x1405EB0FC
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiInvokeBugCheckEntryCallbacks(unsigned int a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 QuantumTarget; // rbx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 *p_QuantumTarget; // [rsp+88h] [rbp+20h] BYREF

  v1 = &retaddr;
  QuantumTarget = KiSupervisorXStateFeaturesLock.QuantumTarget;
  if ( KiSupervisorXStateFeaturesLock.QuantumTarget && KiSupervisorXStateFeaturesLock.InitialStack )
  {
    p_QuantumTarget = &KiSupervisorXStateFeaturesLock.QuantumTarget;
    while ( (unsigned __int64 *)QuantumTarget != &KiSupervisorXStateFeaturesLock.QuantumTarget )
    {
      LOBYTE(v1) = KeValidateBugCheckCallbackRecord(QuantumTarget, a1, &p_QuantumTarget);
      if ( (_BYTE)v1 )
      {
        LOBYTE(v1) = guard_dispatch_icall_no_overrides(a1, QuantumTarget);
        *(_BYTE *)(QuantumTarget + 44) = 3;
      }
      else if ( !p_QuantumTarget )
      {
        return (char)v1;
      }
      QuantumTarget = *(_QWORD *)QuantumTarget;
    }
  }
  return (char)v1;
}
