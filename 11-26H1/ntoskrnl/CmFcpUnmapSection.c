/*
 * XREFs of CmFcpUnmapSection @ 0x140ABEF18
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140861818 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140ABEC64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 */

void __fastcall CmFcpUnmapSection(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    MiRemoveFromSystemSpace(v1);
}
