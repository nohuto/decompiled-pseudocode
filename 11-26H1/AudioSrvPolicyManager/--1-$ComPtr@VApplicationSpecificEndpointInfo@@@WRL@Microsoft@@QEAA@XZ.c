/*
 * XREFs of ??1?$ComPtr@VApplicationSpecificEndpointInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x18002A7D0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAudioStreamInfo___&__::_1_::dtor$1 @ 0x18004BD20 (_Microsoft--WRL--Details--MakeAndInitialize_CAastPreStartContext_IAudioStreamPreStartContext_IAu.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAudioProcess___&_unsigned_short_const___&_bool_bool_enum__AudioSessionState__::_1_::dtor$1 @ 0x18004E46D (_Microsoft--WRL--Details--MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSes_ea_18004E46D.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
