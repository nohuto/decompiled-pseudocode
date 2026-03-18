/*
 * XREFs of ?EmitIsCursorEnabled@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140155930
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140199320 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___ @ 0x14023B21C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca6.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitIsCursorEnabled(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char v4; // dl
  char updated; // al
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v7 = this;
  if ( !v2 )
  {
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___(
                this,
                a2,
                &v7);
    v4 = 0;
    if ( !updated )
      return v4;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  return 1;
}
