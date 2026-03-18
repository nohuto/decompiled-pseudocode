/*
 * XREFs of ?EmitUpdateCommands@CDesktopTreeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401811A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetIdCommand@CDesktopTreeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401811EC (-EmitSetIdCommand@CDesktopTreeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRootCommand@CDesktopTreeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14018125C (-EmitSetRootCommand@CDesktopTreeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CDesktopTreeMarshaler::EmitUpdateCommands(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CDesktopTreeMarshaler::EmitSetIdCommand(this, a2) )
    return DirectComposition::CDesktopTreeMarshaler::EmitSetRootCommand(this, a2);
  return v4;
}
