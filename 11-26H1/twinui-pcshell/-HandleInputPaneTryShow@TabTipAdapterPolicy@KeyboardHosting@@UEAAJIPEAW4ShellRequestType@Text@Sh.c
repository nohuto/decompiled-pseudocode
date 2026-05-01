/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802A6E34 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x180474A18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@_ea_180474A18.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@AEB_NPEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N11AEB_N0@Z @ 0x180481F20 (--$HandleInputPaneTryShow@PEBDPEBDAEAU-$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@AEB_NPEBD@Touc.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804840A0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1804850B0 (-StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z.c)
 *     ?StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x180485174 (-StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z.c)
 *     ?StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18048522C (-StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  bool v5; // di
  bool IsPrimaryViewTryShowAllowed; // si
  char v8; // r8
  char v9; // r8
  __int64 v10; // rcx
  char v12[4]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+54h] [rbp-44h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16[6]; // [rsp+68h] [rbp-30h] BYREF

  *(_DWORD *)a3 = 0;
  v5 = a2 <= 2;
  IsPrimaryViewTryShowAllowed = 0;
  v12[0] = KeyboardHosting::IsRunningOnServerSku(this);
  if ( !v12[0] || !v5 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      v8);
    IsPrimaryViewTryShowAllowed = KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(this);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( v12[0] && v5 || !IsPrimaryViewTryShowAllowed && a2 - 1 > 6 )
      goto LABEL_15;
LABEL_14:
    *(_DWORD *)a3 = 1;
    goto LABEL_15;
  }
  if ( (!v12[0] || !v5) && (IsPrimaryViewTryShowAllowed || a2 - 1 <= 5) )
    goto LABEL_14;
LABEL_15:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v9);
  v14 = StringifyShellRequestType(*(unsigned int *)a3);
  v10 = *((unsigned int *)this + 223);
  v13 = *((_DWORD *)this + 219);
  v15 = StringifyCoreKeyboardModality(v10);
  v16[0] = StringifyCoreInputViewKind(a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,std::atomic<bool> &,int,std::atomic<bool> &,bool &,std::atomic<bool> &,std::atomic<bool> &,bool const &,char const *>(
    v16,
    &v15,
    (__int64)this + 872,
    &v13,
    (__int64)this + 873,
    (char *)this + 866,
    (__int64)this + 889,
    (__int64)this + 925,
    v12,
    &v14);
  return 0LL;
}
