/*
 * XREFs of ?EmitOpacityFalloff@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401882A4
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140246670 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___ @ 0x1401882E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da99071.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitOpacityFalloff(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CProjectedShadowSceneMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v5;
}
