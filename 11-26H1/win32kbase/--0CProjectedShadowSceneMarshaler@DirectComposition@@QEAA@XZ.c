/*
 * XREFs of ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x14022A790
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401B98FC (--0-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  _QWORD *v1; // r9
  __int64 v2; // r9
  __int64 v3; // r9

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler((__int64)this, 98LL);
  *v1 = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v1 + 9);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>((_QWORD *)(v2 + 96));
  return v3;
}
