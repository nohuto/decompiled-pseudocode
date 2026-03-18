/*
 * XREFs of ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x140145F08
 * Callers:
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x140145B58 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140145D40 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023CF40 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DirectComposition::CGenericInkMarshaler::GetSegmentCount(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned __int64 v1; // r8

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
    return *((_QWORD *)this + 15) / v1;
  else
    return 0LL;
}
