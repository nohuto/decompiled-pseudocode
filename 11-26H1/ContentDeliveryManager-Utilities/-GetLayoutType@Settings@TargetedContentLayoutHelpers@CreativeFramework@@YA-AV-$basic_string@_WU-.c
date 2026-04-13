/*
 * XREFs of ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800AEF70
 * Callers:
 *     ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800AFBF0 (-NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedC.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800AEEE0 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800AF5B4 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z @ 0x1800AF7C8 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800B13D8 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
CreativeFramework::Policy *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
        CreativeFramework::Policy *a1,
        HSTRING a2,
        const WCHAR *a3)
{
  bool ShouldUseInternal; // bl
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v8; // rdx
  __int64 v9; // r8
  CreativeFramework::SubscribedContentStore::Details *AdUnitIdFromSubscriptionId; // rbx
  wchar_t **v11; // r8
  const wchar_t *v12; // r8
  int StringSetting; // eax
  wchar_t **v15; // [rsp+20h] [rbp-20h]
  int v16; // [rsp+20h] [rbp-20h]
  bool v17[8]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]
  __int64 v19; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CreativeFramework::ContentDeliveryManagerSettings *v21; // [rsp+78h] [rbp+38h] BYREF

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(a1);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  LOBYTE(v8) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = (CreativeFramework::SubscribedContentStore::Details *)CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
                                                                                       StringRawBuffer,
                                                                                       v8,
                                                                                       v9);
  v21 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v21,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(
    AdUnitIdFromSubscriptionId,
    (const wchar_t *)&v21,
    v11);
  *(_QWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  v18 = -1LL;
  v19 = -1LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(v21, a3, v12, (bool)v17, v15);
  if ( StringSetting < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      72LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)StringSetting,
      v16);
  std::wstring::wstring((__int64)a1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v21);
  return a1;
}
