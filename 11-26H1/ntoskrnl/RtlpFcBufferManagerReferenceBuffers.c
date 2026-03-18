/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8
 * Callers:
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
 *     RtlAcquireSwapReference @ 0x1402C58E0 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x140B1077C (RtlpFcEnterRegion.c)
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
