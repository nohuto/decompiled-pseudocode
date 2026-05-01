/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180474640
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B5448 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18046894C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@AEB_NPEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N11AEB_N0@Z @ 0x18047305C (--$HandleInputPaneTryShow@PEBDPEBDAEAU-$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@AEB_NPEBD@Touc.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180474DE0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z @ 0x180475938 (-StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z.c)
 *     ?StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1804759FC (-StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z.c)
 *     ?StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180475AB4 (-StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  bool v6; // di
  bool IsPrimaryViewTryShowAllowed; // si
  char v8; // r8
  __int64 v9; // r9
  char v10; // r8
  __int64 v11; // r9
  bool v12; // cc
  __int64 v13; // rcx
  char v15[4]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+54h] [rbp-44h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+68h] [rbp-30h] BYREF

  *(_DWORD *)a3 = 0;
  v6 = a2 <= 2;
  IsPrimaryViewTryShowAllowed = 0;
  v15[0] = KeyboardHosting::IsRunningOnServerSku(this);
  if ( !v15[0] || !v6 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    IsPrimaryViewTryShowAllowed = KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(this);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( v15[0] && v6 )
      goto LABEL_15;
    if ( !IsPrimaryViewTryShowAllowed )
    {
      v12 = a2 - 1 <= 6;
      goto LABEL_13;
    }
LABEL_14:
    *(_DWORD *)a3 = 1;
    goto LABEL_15;
  }
  if ( v15[0] && v6 )
    goto LABEL_15;
  if ( IsPrimaryViewTryShowAllowed )
    goto LABEL_14;
  v12 = a2 - 1 <= 5;
LABEL_13:
  if ( v12 )
    goto LABEL_14;
LABEL_15:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v10,
    v11);
  v17 = StringifyShellRequestType(*(unsigned int *)a3);
  v13 = *((unsigned int *)this + 157);
  v16 = *((_DWORD *)this + 153);
  v18 = StringifyCoreKeyboardModality(v13);
  v19[0] = StringifyCoreInputViewKind(a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,std::atomic<bool> &,int,std::atomic<bool> &,bool &,std::atomic<bool> &,std::atomic<bool> &,bool const &,char const *>(
    v19,
    &v18,
    (__int64)this + 608,
    &v16,
    (__int64)this + 609,
    (char *)this + 602,
    (__int64)this + 625,
    (__int64)this + 661,
    v15,
    &v17);
  return 0LL;
}
