/*
 * XREFs of ?EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400ED7E0 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetTextureCommand@CCompositionDynamicTextureMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A5F8 (-EmitSetTextureCommand@CCompositionDynamicTextureMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 */

char __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDynamicTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         492,
         493,
         0x10uLL) )
  {
    return DirectComposition::CCompositionDynamicTextureMarshaler::EmitSetTextureCommand(this, a2) != 0;
  }
  return v4;
}
