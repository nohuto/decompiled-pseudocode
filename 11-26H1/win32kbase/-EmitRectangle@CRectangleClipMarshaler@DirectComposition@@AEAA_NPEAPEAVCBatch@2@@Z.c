/*
 * XREFs of ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0A78
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0230 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___ @ 0x1400B0910 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitRectangle(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // cl
  DirectComposition::CRectangleClipMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x1000) == 0;
  v7 = this;
  if ( !v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    return 1;
  }
  return v5;
}
