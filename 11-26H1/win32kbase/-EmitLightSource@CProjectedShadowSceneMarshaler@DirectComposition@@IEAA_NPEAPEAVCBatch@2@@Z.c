/*
 * XREFs of ?EmitLightSource@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14018735C
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140246670 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad63447384___ @ 0x14018739C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad6344738.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitLightSource(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CProjectedShadowSceneMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad63447384___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v5;
}
