/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404C5BC0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x14061A770 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x14061A820 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x14061A9F0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140806B70 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140AC0D04 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140AC1BB0 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1403104F0 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x140B11EBC (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx

  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  RtlReleaseSwapReference(a1, (v3 >> 63) + v3, a3);
  return RtlpFcLeaveRegion();
}
