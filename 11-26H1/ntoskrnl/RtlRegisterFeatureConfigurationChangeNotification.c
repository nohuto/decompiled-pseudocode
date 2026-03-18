/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1405071B0
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x14085517C (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14077A728 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetEffectiveIrql()
    && (((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) != 0 || BYTE1(stru_140F10828.WriteOperationCount)) )
  {
    return 3221225659LL;
  }
  else
  {
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
  }
}
