/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405E86F8 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     KiGlobalDeduplicateTriageDumpData @ 0x1405EAE90 (KiGlobalDeduplicateTriageDumpData.c)
 *     KiValidateComponentName @ 0x1405EB48C (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405EB538 (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  char result; // al
  unsigned __int64 QuantumTarget; // rbx
  unsigned __int64 *v2; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *p_QuantumTarget; // [rsp+A8h] [rbp+20h]

  result = 0;
  p_QuantumTarget = &KiSupervisorXStateFeaturesLock.QuantumTarget;
  QuantumTarget = KiSupervisorXStateFeaturesLock.QuantumTarget;
  if ( KiSupervisorXStateFeaturesLock.QuantumTarget && KiSupervisorXStateFeaturesLock.InitialStack )
  {
    v2 = &KiSupervisorXStateFeaturesLock.QuantumTarget;
    while ( 1 )
    {
      v3 = QuantumTarget;
      if ( (unsigned __int64 *)QuantumTarget == &KiSupervisorXStateFeaturesLock.QuantumTarget )
        break;
      result = KeValidateBugCheckCallbackRecord(QuantumTarget, 7, &v2);
      if ( result )
      {
        result = guard_dispatch_icall_no_overrides(7LL, QuantumTarget);
        *(_WORD *)(QuantumTarget + 44) = 260;
      }
      else if ( !v2 )
      {
        return result;
      }
      QuantumTarget = *(_QWORD *)QuantumTarget;
    }
  }
  return result;
}
