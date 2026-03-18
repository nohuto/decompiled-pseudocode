/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EB6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EB860 (-EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4NineGridBrushMarshalerFlag@12@KM@Z @ 0x1400EB920 (-EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EB9B4 (-EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si

  if ( !DirectComposition::CNineGridBrushMarshaler::EmitUpdateSourceCommand(this, a2) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 64LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 128LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 256LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 512LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 1024LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 2048LL) )
    return 0;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 4096LL) )
    return 0;
  v4 = 1;
  if ( !(unsigned __int8)DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(this, a2, 0x2000LL)
    || !DirectComposition::CNineGridBrushMarshaler::EmitUpdateIsCenterHollowCommand(this, a2) )
  {
    return 0;
  }
  return v4;
}
