/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180023CCC
 * Callers:
 *     _CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor$0 @ 0x18004C650 (_CProcess--ForEachSession_IAudioSessionPolicyControl__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>>()
{
  return std::vector<wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>>::_Tidy();
}
