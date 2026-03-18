/*
 * XREFs of ?EmitPreferReferenceVisual@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14015C33C
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___ @ 0x14023B3EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitPreferReferenceVisual(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x2000) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x2000u;
    return 1;
  }
  return v5;
}
