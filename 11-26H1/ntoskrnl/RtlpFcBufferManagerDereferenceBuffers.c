/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1404CC190 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x140617720 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1406177D0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1406179A0 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1408010D0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140ABEC64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140ABFB10 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlReleaseSwapReference @ 0x1402C5854 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x140B1047C (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx

  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
  RtlReleaseSwapReference(a1, (v3 >> 63) + v3, a3);
  return RtlpFcLeaveRegion();
}
