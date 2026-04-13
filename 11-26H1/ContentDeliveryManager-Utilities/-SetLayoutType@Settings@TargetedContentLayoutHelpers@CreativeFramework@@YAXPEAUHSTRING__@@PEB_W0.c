/*
 * XREFs of ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800B1274
 * Callers:
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800B1224 (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800B124C (-SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800AEEE0 (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z @ 0x1800AF7C8 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEB_WPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z @ 0x1800B134C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800B13D8 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
        CreativeFramework::Policy *string,
        const WCHAR *lpValueName,
        HSTRING a3,
        HSTRING a4)
{
  bool ShouldUseInternal; // di
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v9; // rdx
  __int64 v10; // r8
  CreativeFramework::SubscribedContentStore::Details *AdUnitIdFromSubscriptionId; // rbx
  wchar_t **v12; // r8
  PCWSTR v13; // rax
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CreativeFramework::ContentDeliveryManagerSettings *v19; // [rsp+48h] [rbp+20h] BYREF

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(string);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  LOBYTE(v9) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = (CreativeFramework::SubscribedContentStore::Details *)CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
                                                                                       StringRawBuffer,
                                                                                       v9,
                                                                                       v10);
  v19 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v19,
    0LL);
  CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(
    AdUnitIdFromSubscriptionId,
    (wchar_t *)&v19,
    v12);
  v13 = WindowsGetStringRawBuffer(a3, 0LL);
  v14 = -1LL;
  do
    ++v14;
  while ( v13[v14] );
  v15 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v19,
          lpValueName,
          v13,
          (const wchar_t *)v14,
          v16);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      47LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15,
      v17);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v19);
}
