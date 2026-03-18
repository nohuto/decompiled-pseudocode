/*
 * XREFs of ?EmitReleaseCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140105B20
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400245B0 (-EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140105B88 (-EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVisualTargetMarshaler::EmitReleaseCommand(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualTargetMarshaler::EmitRoot(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CResourceMarshaler::EmitReleaseCommand(this, a2);
  return v4;
}
