/*
 * XREFs of ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140147E18
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140147DA0 (--_G-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectCompositio.c)
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140147DE0 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140147E40 (--1CGeometryMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401BA478 (--1-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::~CMarshaledArray<unsigned int,1885946692,534,535,0>((char *)this + 96);
  DirectComposition::CGeometryMarshaler::~CGeometryMarshaler(this);
}
