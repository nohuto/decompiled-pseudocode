/*
 * XREFs of ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180062CC8
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006338C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180063840 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetFileTimeSetting@Details@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG0_N@Z @ 0x18006255C (-GetFileTimeSetting@Details@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG0_N@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x180062DEC (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct _FILETIME __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  unsigned __int16 **v3; // r8
  const unsigned __int16 *v4; // r8
  struct _FILETIME FileTimeSetting; // rbx
  CreativeFramework::SubscribedContentStore::Details *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v7,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(this, (const unsigned __int16 *)&v7, v3);
  FileTimeSetting = CreativeFramework::SubscribedContentStore::Details::GetFileTimeSetting(
                      (const WCHAR *)v7,
                      L"LastUpdated",
                      v4);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v7);
  return FileTimeSetting;
}
