/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1400A62C8
 * Callers:
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400A50B0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400A5700 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Dire.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400A60E0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@Di.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14016CE20 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectCompositi.c)
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140193720 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140195760 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401981A0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCDistantLightMarshaler@DirectComposition@@$01@D.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199190 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14019C540 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectCompo.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14019D200 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14019D280 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$0.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BB50 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCPointLightMarshaler@DirectComposition@@$01@Dir.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BB70 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BB90 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCSpotLightMarshaler@DirectComposition@@$01@Dire.c)
 *     ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023BBB0 (-EmitCreationCommand@-$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@Di.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x1400A6500 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // edi
  int v9; // ebx
  char *v10; // rcx
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = *((_QWORD *)*a2 + 1);
  v7 = *(_QWORD *)(v6 + 40);
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, 0LL) )
    return 0;
  v8 = *(_DWORD *)(v6 + 28);
  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*(_QWORD *)(v7 + 152) + 32LL));
  v9 = DirectComposition::CSystemChannel::BeginDuplicateResource(*(_QWORD *)(v7 + 152), a3, v8);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(v7 + 152));
  if ( v9 < 0 )
    return 0;
  v12 = 0LL;
  DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v12);
  v10 = (char *)v12;
  *(_DWORD *)v12 = 12;
  *(_QWORD *)(v10 + 4) = 0LL;
  *((_DWORD *)v10 + 1) = 36;
  *((_DWORD *)v10 + 2) = *(_DWORD *)(a1 + 32);
  return 1;
}
