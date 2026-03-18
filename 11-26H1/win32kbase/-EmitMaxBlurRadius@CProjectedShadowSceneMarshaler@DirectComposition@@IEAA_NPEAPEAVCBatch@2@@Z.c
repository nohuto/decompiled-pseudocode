/*
 * XREFs of ?EmitMaxBlurRadius@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14019DBF4
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140246670 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___ @ 0x140246584 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitMaxBlurRadius(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CProjectedShadowSceneMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v5;
}
