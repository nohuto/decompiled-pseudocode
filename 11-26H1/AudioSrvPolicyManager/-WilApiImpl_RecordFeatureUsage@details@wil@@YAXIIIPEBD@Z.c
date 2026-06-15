/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180035A30
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180032AD0 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180033B68 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18003401C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180036774 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v4 = v3 >> 31;
  if ( (_DWORD)this || a3 || (_DWORD)a2 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        &wil::details::g_featureStateManager,
        (int)this,
        a2,
        a3);
    }
    else if ( a3 || (_DWORD)a2 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        a2,
        a3);
    }
    else
    {
      wil_RtlStagingConfig_RecordFeatureUsage(this, a2, v4);
    }
  }
  else
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
