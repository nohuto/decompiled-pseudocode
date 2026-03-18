/*
 * XREFs of ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400541E4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(_QWORD *a1, int a2)
{
  *a1 = &DirectComposition::CBaseAnimation::`vftable';
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)(a1 + 2), a2);
  *a1 = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  a1[2] = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  return a1;
}
