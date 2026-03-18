/*
 * XREFs of ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x140230604
 * Callers:
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140230930 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EEB10 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ @ 0x140228448 (--1-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(
        DirectComposition::CTextVisualMarshaler *this)
{
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((DirectComposition::CTextVisualMarshaler *)((char *)this + 424));
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((DirectComposition::CTextVisualMarshaler *)((char *)this + 400));
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((DirectComposition::CTextVisualMarshaler *)((char *)this + 376));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
}
