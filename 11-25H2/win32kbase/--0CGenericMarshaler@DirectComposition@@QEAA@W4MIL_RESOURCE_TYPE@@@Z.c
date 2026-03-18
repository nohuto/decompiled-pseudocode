/*
 * XREFs of ??0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005402C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CGenericMarshaler::CGenericMarshaler(_QWORD *a1, int a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)a1, a2);
  *a1 = &DirectComposition::CGenericMarshaler::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  return a1;
}
