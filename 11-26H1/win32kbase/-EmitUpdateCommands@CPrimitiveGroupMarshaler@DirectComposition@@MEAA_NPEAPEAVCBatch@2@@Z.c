/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023F880
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140136FB8 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     ?EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401388F0 (-EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0NC@$0MP@$0A@$0FN@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023F8F8 (-Marshal@-$CResourceMarshalerArray@$0NC@$0MP@$0A@$0FN@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0NE@$0NA@$0A@$0BP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023F91C (-Marshal@-$CResourceMarshalerArray@$0NE@$0NA@$0A@$0BP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<212,208,0,31>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<210,207,0,93>::Marshal(
                          (char *)this + 104,
                          a2,
                          *((unsigned int *)this + 8))
    && DirectComposition::CPrimitiveGroupMarshaler::EmitAddPrimitivesCommand(this, a2) )
  {
    return DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(this, a2) != 0;
  }
  return v4;
}
