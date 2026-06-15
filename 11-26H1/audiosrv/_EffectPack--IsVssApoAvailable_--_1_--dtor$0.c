/*
 * XREFs of _EffectPack::IsVssApoAvailable_::_1_::dtor$0 @ 0x18016AE44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPack::IsVssApoAvailable_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
