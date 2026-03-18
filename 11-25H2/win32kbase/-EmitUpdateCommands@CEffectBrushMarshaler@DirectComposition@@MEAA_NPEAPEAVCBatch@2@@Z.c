/*
 * XREFs of ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140106450
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateTemplateCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401064C4 (-EmitUpdateTemplateCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_35529fb37e3d051452ca63a425a17044___ @ 0x140106550 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_35529fb37e3d051452ca63a425a1704.c)
 *     ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401065D4 (-EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CEffectBrushMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CEffectBrushMarshaler::EmitUpdateTemplateCommand(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_35529fb37e3d051452ca63a425a17044___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    if ( DirectComposition::CEffectBrushMarshaler::EmitSetInputs(this, a2) )
      return 1;
  }
  return v4;
}
