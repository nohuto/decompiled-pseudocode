/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x14004FC40
 * Callers:
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14004E620 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Dire.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14004E6A0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectC.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140128CA0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140135240 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140140E70 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@Di.c)
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140156970 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140158DF0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14015B010 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14015C470 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectCompo.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14015CC40 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCProjectedShadowCasterMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14015FAA0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCProjectedShadowCasterMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14015FAC0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230970 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230990 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectCompositio.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402309B0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FCE4 (-BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  struct DirectComposition::CBatch *v6; // rsi
  __int64 v7; // rbp
  char *v8; // rcx
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  v6 = (*a2)[1];
  v7 = *((_QWORD *)v6 + 5);
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, 0LL)
    || (int)DirectComposition::CConnection::BeginDuplicateResource(v7, a3, *((unsigned int *)v6 + 7)) < 0 )
  {
    return 0;
  }
  v10 = 0LL;
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10);
  v8 = (char *)v10;
  *(_DWORD *)v10 = 12;
  *(_QWORD *)(v8 + 4) = 0LL;
  *((_DWORD *)v8 + 1) = 37;
  *((_DWORD *)v8 + 2) = *(_DWORD *)(a1 + 32);
  return 1;
}
