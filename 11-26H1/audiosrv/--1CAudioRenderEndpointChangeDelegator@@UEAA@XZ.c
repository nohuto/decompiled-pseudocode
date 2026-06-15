/*
 * XREFs of ??1CAudioRenderEndpointChangeDelegator@@UEAA@XZ @ 0x1800C43F8
 * Callers:
 *     ??_ECAudioRenderEndpointChangeDelegator@@UEAAPEAXI@Z @ 0x1800C53A0 (--_ECAudioRenderEndpointChangeDelegator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18007596C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800CC874 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall CAudioRenderEndpointChangeDelegator::~CAudioRenderEndpointChangeDelegator(
        CAudioRenderEndpointChangeDelegator *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx

  *(_QWORD *)this = &CAudioRenderEndpointChangeDelegator::`vftable';
  *((_QWORD *)this + 1) = &CAudioRenderEndpointChangeDelegator::`vftable'{for `IAudioRenderEndpointChangeDelegator'};
  *((_QWORD *)this + 2) = &CAudioRenderEndpointChangeDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 11,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 11);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  v4 = (_QWORD *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4 + 1);
      std::_Deallocate<16>(v4, (struct std::nothrow_t *)0x10);
      v4 = v5;
    }
    while ( v5 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>((__int64)this);
}
