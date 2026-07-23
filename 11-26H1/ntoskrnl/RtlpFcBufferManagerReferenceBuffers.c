/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078
 * Callers:
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
 *     RtlAcquireSwapReference @ 0x14031057C (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x140B121BC (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  _QWORD *v9; // r11
  __int64 result; // rax

  RtlpFcEnterRegion();
  v8 = RtlAcquireSwapReference(v6, v5, v7);
  *v9 = *(_QWORD *)(a1 + 8LL * v8 + 216);
  result = a1 + 24 + 96LL * v8;
  *a3 = result;
  return result;
}
