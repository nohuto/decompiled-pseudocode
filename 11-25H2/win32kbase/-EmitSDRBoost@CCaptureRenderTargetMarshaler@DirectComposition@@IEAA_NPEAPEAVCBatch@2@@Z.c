/*
 * XREFs of ?EmitSDRBoost@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140155F2C
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___ @ 0x14023B378 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitSDRBoost(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char v4; // dl
  char updated; // al
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v7 = this;
  if ( !v2 )
  {
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___(
                this,
                a2,
                &v7);
    v4 = 0;
    if ( !updated )
      return v4;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return 1;
}
