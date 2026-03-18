/*
 * XREFs of ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ @ 0x140228448 (--1-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ.c)
 *     ?ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D650 (-ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(this, a2);
}
