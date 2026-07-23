/*
 * XREFs of CmFcShutdownSystem @ 0x14085AFA4
 * Callers:
 *     CmShutdownSystem0 @ 0x1406E64C8 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 * Callees:
 *     Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline @ 0x1406E68C8 (Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     CmFcDebugUninitialize @ 0x1406E7244 (CmFcDebugUninitialize.c)
 *     TlgAggregateFlush @ 0x1407214EC (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140866E18 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcpManagerPublishFeatureUsageData(&CmpFreezeListLock.Timer.TimerListEntry, 0LL);
    TlgAggregateFlush((__int64)&dword_140E09EB0);
    if ( (unsigned int)Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline() )
      CmFcDebugUninitialize();
  }
}
