/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C516C
 * Callers:
 *     ??0CWindowNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x14016D138 (--0CWindowNodeMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(a1, a2);
  *(_DWORD *)(v2 + 328) = 0;
  *(_QWORD *)v2 = &DirectComposition::CVisualMarshaler::`vftable';
  return v2;
}
