/*
 * XREFs of ??0CLightMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B3C4
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401B98FC (--0-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CLightMarshaler::CLightMarshaler(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  *v2 = &DirectComposition::CLightMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v2 + 8);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>((_QWORD *)(v3 + 88));
  return v4;
}
