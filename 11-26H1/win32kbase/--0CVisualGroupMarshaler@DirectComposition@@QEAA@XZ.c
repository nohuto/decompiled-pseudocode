/*
 * XREFs of ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B5D4
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401B98FC (--0-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(
        DirectComposition::CVisualGroupMarshaler *this)
{
  _QWORD *v1; // r8
  __int64 v2; // r8

  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 159);
  *v1 = &DirectComposition::CVisualGroupMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v1 + 7);
  return v2;
}
