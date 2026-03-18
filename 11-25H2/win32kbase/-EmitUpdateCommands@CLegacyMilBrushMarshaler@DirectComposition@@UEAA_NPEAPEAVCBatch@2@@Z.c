/*
 * XREFs of ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B768
 * Callers:
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B1D4 (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B320 (-EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C690 (-EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetOpacityAnimationCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A228 (-EmitSetOpacityAnimationCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetRelativeTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A32C (-EmitSetRelativeTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A76C (-EmitSetTransformCommand@CLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 542;
    v5[2] = *((_DWORD *)this + 8);
    v5[3] = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitSetOpacityAnimationCommand(this, a2)
    && DirectComposition::CLegacyMilBrushMarshaler::EmitSetTransformCommand(this, a2)
    && DirectComposition::CLegacyMilBrushMarshaler::EmitSetRelativeTransformCommand(this, a2) )
  {
    return 1;
  }
  return v2;
}
