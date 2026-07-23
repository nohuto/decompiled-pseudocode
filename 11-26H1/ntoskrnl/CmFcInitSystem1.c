/*
 * XREFs of CmFcInitSystem1 @ 0x140CF3E50
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F80D0 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline @ 0x1406E68C8 (Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     CmFcDebugUpdateSystemInfo @ 0x1406E7260 (CmFcDebugUpdateSystemInfo.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x14085B4DC (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x14085B514 (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14085B590 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 */

char CmFcInitSystem1()
{
  int IsEnabledDeviceUsageNoInline; // eax

  if ( (unsigned int)wil_details_ShouldRegisterFeatureStagingChangeNotification() )
    wil_details_RegisterFeatureStagingChangeNotification();
  if ( !(unsigned int)wil_details_RegisterFeatureUsageProvider() && g_wil_details_featureUsageCached )
    RtlArmFeatureUsageProviderFlushNotification(g_wil_details_featureUsageProvider, 1);
  IsEnabledDeviceUsageNoInline = Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    CmFcDebugUpdateSystemInfo();
    BYTE4(stru_140E62450.Timer.Header.WaitListHead.Flink) = 0;
    LOBYTE(IsEnabledDeviceUsageNoInline) = KeRegisterBugCheckReasonCallback(
                                             (PKBUGCHECK_REASON_CALLBACK_RECORD)(&stru_140E62450.SwapListEntry + 1),
                                             (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CmFcpSecondaryMultiPartDumpDataCallback,
                                             KbCallbackSecondaryMultiPartDumpData,
                                             aCmfc);
  }
  return IsEnabledDeviceUsageNoInline;
}
