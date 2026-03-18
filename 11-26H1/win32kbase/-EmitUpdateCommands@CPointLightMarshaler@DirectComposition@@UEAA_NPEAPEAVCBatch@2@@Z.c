/*
 * XREFs of ?EmitUpdateCommands@CPointLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402318C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetIntensityCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CF3C (-EmitSetIntensityCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLinearAttenuationCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022D09C (-EmitSetLinearAttenuationCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMaxAttenuationCutoffCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022DB60 (-EmitSetMaxAttenuationCutoffCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetMinAttenuationCutoffCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022DDC0 (-EmitSetMinAttenuationCutoffCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOffsetCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E108 (-EmitSetOffsetCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetQuadraticAttenuationCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E75C (-EmitSetQuadraticAttenuationCommand@CPointLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A04 (-EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CPointLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  _QWORD *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPositionedLightMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x100) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 28;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 579;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v6 + 12) = *(_OWORD *)((char *)this + 120);
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
        return v4;
      v7 = v9;
      *(_DWORD *)v9 = 16;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 1) = 580;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 34);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    if ( DirectComposition::CPointLightMarshaler::EmitSetIntensityCommand(this, a2)
      && DirectComposition::CPointLightMarshaler::EmitSetLinearAttenuationCommand(this, a2)
      && DirectComposition::CPointLightMarshaler::EmitSetMaxAttenuationCutoffCommand(this, a2)
      && DirectComposition::CPointLightMarshaler::EmitSetMinAttenuationCutoffCommand(this, a2)
      && DirectComposition::CPointLightMarshaler::EmitSetOffsetCommand(this, a2)
      && DirectComposition::CPointLightMarshaler::EmitSetQuadraticAttenuationCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
