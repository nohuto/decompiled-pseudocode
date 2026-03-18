/*
 * XREFs of ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400561E8
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401B98FC (--0-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  _QWORD *v1; // r10
  __int64 v2; // r10

  DirectComposition::CGeometryMarshaler::CGeometryMarshaler(this, 105LL);
  *v1 = &DirectComposition::CRegionGeometryMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v1 + 12);
  return v2;
}
