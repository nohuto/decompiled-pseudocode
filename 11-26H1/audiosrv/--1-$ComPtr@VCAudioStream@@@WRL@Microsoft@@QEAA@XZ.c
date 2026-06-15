/*
 * XREFs of ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x18007DD98
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x180165FAF (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$5.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Find_::_1_::dtor$0 @ 0x180166042 (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Find_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$1 @ 0x18016702C (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProces.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$2 @ 0x18016712A (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$8 @ 0x180167601 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$8.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$4 @ 0x180168410 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x1801698BD (_Microsoft--WRL--Details--Make_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_.c)
 *     _wil::MakeOrThrow_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$0 @ 0x18016991F (_wil--MakeOrThrow_ResourceGroupInstance_unsigned___int64_-_EndpointInfo_-_unsigned_short_(-)[257.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$5 @ 0x180169DA2 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$1 @ 0x18016AAAC (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_18016AAAC.c)
 *     _CMonitorManager::CStreamConnectionImpl::SetStreamingState_::_1_::dtor$6 @ 0x18016B073 (_CMonitorManager--CStreamConnectionImpl--SetStreamingState_--_1_--dtor$6.c)
 *     _AtmosCheck::RegisterForUserWatcherNotifications_::_1_::dtor$5 @ 0x18016B255 (_AtmosCheck--RegisterForUserWatcherNotifications_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$6 @ 0x18016C0B4 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(_QWORD *a1)
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
