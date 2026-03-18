/*
 * XREFs of ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401003EC
 * Callers:
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140100370 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___ @ 0x140100444 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d68.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // cl
  char updated; // al

  if ( (*((_DWORD *)this + 98) & 2) != 0 )
  {
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___(
                this,
                a2,
                (char *)this + 388,
                *((unsigned int *)this + 96));
    v3 = 0;
    if ( !updated )
      return v3;
    *((_DWORD *)this + 98) &= ~2u;
  }
  return 1;
}
