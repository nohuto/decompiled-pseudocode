/*
 * XREFs of __std_find_trivial_8 @ 0x1800B1B60
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18006E740 (--1CPdcTimerActivation@@QEAA@XZ.c)
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180081C30 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 *     ?ContainsStream@CBaseStreamGroupProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x1800FB140 (-ContainsStream@CBaseStreamGroupProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?ContainsStream@CProcessSubmixProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x1800FB1E0 (-ContainsStream@CProcessSubmixProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall _std_find_trivial_8(const __m128i *a1, const __m128i *a2, unsigned __int64 _R8)
{
  return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_8_unsigned___int64_(
           a1,
           a2,
           _R8);
}
