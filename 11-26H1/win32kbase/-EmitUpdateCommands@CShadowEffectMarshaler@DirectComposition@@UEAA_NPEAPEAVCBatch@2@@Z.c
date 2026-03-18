/*
 * XREFs of ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232930
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetAlphaCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B5C0 (-EmitSetAlphaCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetBlueCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BA60 (-EmitSetBlueCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetGreenCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C710 (-EmitSetGreenCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOptimizationCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E380 (-EmitSetOptimizationCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRedCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E84C (-EmitSetRedCommand@CShadowEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CShadowEffectMarshaler *this,
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
      *((_DWORD *)v5 + 1) = 653;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 64);
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CShadowEffectMarshaler::EmitSetRedCommand(this, a2)
      && DirectComposition::CShadowEffectMarshaler::EmitSetGreenCommand(this, a2)
      && DirectComposition::CShadowEffectMarshaler::EmitSetBlueCommand(this, a2)
      && DirectComposition::CShadowEffectMarshaler::EmitSetAlphaCommand(this, a2)
      && DirectComposition::CShadowEffectMarshaler::EmitSetOptimizationCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
