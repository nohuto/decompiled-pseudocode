/*
 * XREFs of ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1401045AC
 * Callers:
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x140102F04 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1401041A0 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401043EC (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
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
