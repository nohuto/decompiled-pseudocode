/*
 * XREFs of ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18024ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18024A6C8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180474AD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     ?GetProcessAndThreadAndAppIdFromWindow@KeyboardHosting@@YA?AV?$tuple@KKV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@PEAUHWND__@@@Z @ 0x180480ECC (-GetProcessAndThreadAndAppIdFromWindow@KeyboardHosting@@YA-AV-$tuple@KKV-$unique_any_t@V-$unique.c)
 *     ??$HandleForegroundChanged@PEBGAEAKAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAKAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481D4C (--$HandleForegroundChanged@PEBGAEAKAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyb.c)
 *     ??$HandleForegroundChanged@PEBGHAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG$$QEAHAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481DF4 (--$HandleForegroundChanged@PEBGHAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboar.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleForegroundChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        CallerIdentity *a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char *v6; // rbx
  void **p_Src; // rcx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h]
  int v11[4]; // [rsp+30h] [rbp-10h] BYREF
  char *v12; // [rsp+78h] [rbp+38h] BYREF
  void *v13; // [rsp+80h] [rbp+40h] BYREF
  char *v14; // [rsp+88h] [rbp+48h] BYREF

  *(_DWORD *)a3 = 0;
  v6 = (char *)this + 912;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl) )
  {
    KeyboardHosting::GetProcessAndThreadAndAppIdFromWindow(&Src, a2);
    *((_DWORD *)this + 236) = v11[0];
    *((_DWORD *)this + 237) = v10;
    std::wstring::operator=(v6, Src);
    if ( *((_QWORD *)v6 + 3) > 7uLL )
      v6 = *(char **)v6;
    v12 = v6;
    TouchKeyboardExperienceTelemetryLogger::HandleForegroundChanged<unsigned short const *,unsigned long &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      &v12,
      v11,
      a3);
    p_Src = &Src;
  }
  else
  {
    TouchKeyboardExperienceManager::GetAppIdFromWindow(&v13, a2);
    std::wstring::operator=(v6, v13);
    LODWORD(v12) = 0;
    if ( *((_QWORD *)v6 + 3) > 7uLL )
      v6 = *(char **)v6;
    v14 = v6;
    TouchKeyboardExperienceTelemetryLogger::HandleForegroundChanged<unsigned short const *,int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      &v14,
      &v12,
      a3);
    p_Src = &v13;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(p_Src);
  return 0LL;
}
