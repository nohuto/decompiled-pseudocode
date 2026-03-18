/*
 * XREFs of ?SetBufferProperty@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DF1C
 * Callers:
 *     ?SetBufferProperty@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DFE0 (-SetBufferProperty@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 * Callees:
 *     ?Copy@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAAJPEBX_K@Z @ 0x1402292C8 (-Copy@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA.c)
 */

__int64 __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::SetBufferProperty(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 7 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::Copy(
             (DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104),
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x1000u;
  }
  return result;
}
