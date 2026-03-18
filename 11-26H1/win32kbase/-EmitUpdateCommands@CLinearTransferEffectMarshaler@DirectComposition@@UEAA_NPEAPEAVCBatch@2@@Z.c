/*
 * XREFs of ?EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetAlphaDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B638 (-EmitSetAlphaDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetAlphaSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B798 (-EmitSetAlphaSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetAlphaYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B810 (-EmitSetAlphaYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetBlueDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BAD8 (-EmitSetBlueDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetBlueSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BB50 (-EmitSetBlueSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetBlueYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BBC8 (-EmitSetBlueYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetClampOutputCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C31C (-EmitSetClampOutputCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetGreenDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C788 (-EmitSetGreenDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetGreenSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C800 (-EmitSetGreenSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetGreenYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C878 (-EmitSetGreenYInterceptCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetRedDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E8C4 (-EmitSetRedDisableCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetRedSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E93C (-EmitSetRedSlopeCommand@CLinearTransferEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLinearTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 554;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 64);
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CLinearTransferEffectMarshaler::EmitSetRedSlopeCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetRedDisableCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetGreenYInterceptCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetGreenSlopeCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetGreenDisableCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetBlueYInterceptCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetBlueSlopeCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetBlueDisableCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetAlphaYInterceptCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetAlphaSlopeCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetAlphaDisableCommand(this, a2)
      && DirectComposition::CLinearTransferEffectMarshaler::EmitSetClampOutputCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
