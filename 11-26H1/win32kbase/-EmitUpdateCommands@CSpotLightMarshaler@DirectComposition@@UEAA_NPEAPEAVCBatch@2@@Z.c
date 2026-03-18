/*
 * XREFs of ?EmitUpdateCommands@CSpotLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetDirectionCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C588 (-EmitSetDirectionCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInnerConeAngleCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CDCC (-EmitSetInnerConeAngleCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInnerConeColorCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CE44 (-EmitSetInnerConeColorCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInnerConeIntensityCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CEC4 (-EmitSetInnerConeIntensityCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetLinearAttenuationCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022D114 (-EmitSetLinearAttenuationCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxAttenuationCutoffCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022DBD8 (-EmitSetMaxAttenuationCutoffCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetMinAttenuationCutoffCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022DE38 (-EmitSetMinAttenuationCutoffCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetOffsetCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E194 (-EmitSetOffsetCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOuterConeAngleCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E3F8 (-EmitSetOuterConeAngleCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOuterConeColorCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E470 (-EmitSetOuterConeColorCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOuterConeIntensityCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E4F0 (-EmitSetOuterConeIntensityCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetQuadraticAttenuationCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E7D4 (-EmitSetQuadraticAttenuationCommand@CSpotLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A04 (-EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CSpotLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPositionedLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 663;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 30);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CSpotLightMarshaler::EmitSetDirectionCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetInnerConeAngleCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetInnerConeColorCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetInnerConeIntensityCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetLinearAttenuationCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetMaxAttenuationCutoffCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetMinAttenuationCutoffCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetOffsetCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetOuterConeAngleCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetOuterConeColorCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetOuterConeIntensityCommand(this, a2)
      && DirectComposition::CSpotLightMarshaler::EmitSetQuadraticAttenuationCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
