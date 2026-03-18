/*
 * XREFs of ??0CEffectBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1401B98C0
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ @ 0x1401B98FC (--0-$CMarshaledArray@I$0HAGJEDEE@$0CBG@$0CBH@$0A@@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::CEffectBrushMarshaler(
        DirectComposition::CEffectBrushMarshaler *this)
{
  _QWORD *v1; // r8
  __int64 v2; // r8
  __int64 v3; // r8

  DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler((__int64)this, 47LL);
  *v1 = &DirectComposition::CEffectBrushMarshaler::`vftable';
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v1 + 10);
  DirectComposition::CMarshaledArray<unsigned int,1885946692,534,535,0>::CMarshaledArray<unsigned int,1885946692,534,535,0>(v2 + 104);
  return v3;
}
