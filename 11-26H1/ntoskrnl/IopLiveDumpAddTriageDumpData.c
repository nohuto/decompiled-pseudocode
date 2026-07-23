/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x1405CEF80
 * Callers:
 *     <none>
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1405EB48C (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405EB538 (KiValidateTriageDumpDataArray.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IopLiveDumpAddTriageDumpData()
{
  struct _KTHREAD *QuantumTarget; // rbx
  unsigned __int64 *p_QuantumTarget; // [rsp+B8h] [rbp+48h] BYREF

  QuantumTarget = (struct _KTHREAD *)KiSupervisorXStateFeaturesLock.QuantumTarget;
  if ( KiSupervisorXStateFeaturesLock.QuantumTarget && KiSupervisorXStateFeaturesLock.InitialStack )
  {
    p_QuantumTarget = &KiSupervisorXStateFeaturesLock.QuantumTarget;
    while ( QuantumTarget != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.QuantumTarget )
    {
      if ( (unsigned __int8)KeValidateBugCheckCallbackRecord(QuantumTarget, 7LL, &p_QuantumTarget) )
      {
        guard_dispatch_icall_no_overrides(7LL, QuantumTarget);
      }
      else if ( !p_QuantumTarget )
      {
        return 0LL;
      }
      QuantumTarget = *(struct _KTHREAD **)&QuantumTarget->Header.Lock;
    }
  }
  return 0LL;
}
