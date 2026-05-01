/*
 * XREFs of ?unsubscribe_from_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x18026FA80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180568164 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@w.c)
 */

void __fastcall TouchGestureComponent::unsubscribe_from_services(
        TouchGestureComponent *this,
        struct IServiceProvider *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  char v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetImpl'::`2'::impl,
                          a2) )
  {
    v3 = (_QWORD *)((char *)this + 112);
    if ( (char *)this + 112 != &v6 )
    {
      if ( *v3 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 14);
      *v3 = 0LL;
    }
    v4 = (_QWORD *)((char *)this + 120);
    if ( (char *)this + 120 != &v7 )
    {
      if ( *v4 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 15);
      *v4 = 0LL;
    }
    v5 = (_QWORD *)((char *)this + 256);
    if ( (char *)this + 256 != &v8 )
    {
      if ( *v5 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((char *)this + 256);
      *v5 = 0LL;
    }
    SmartCookie::Unregister((TouchGestureComponent *)((char *)this + 128));
    SmartCookie::Unregister((TouchGestureComponent *)((char *)this + 264));
  }
}
