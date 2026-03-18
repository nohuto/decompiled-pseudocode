/*
 * XREFs of ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140107758
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1401076E0 (--_G-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectCompositio.c)
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140107720 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ @ 0x140228448 (--1-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CAO@$0CAP@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,526,527>::~CMarshaledArray<MilGradientStop,1650934596,4096,526,527>((char *)this + 96);
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
}
