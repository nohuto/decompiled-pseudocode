/*
 * XREFs of ?SetFileTimeSettingToCurrentTime@Details@SubscribedContentStore@CreativeFramework@@YAXPEBG0@Z @ 0x180064288
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006192C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x1800637E0 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z @ 0x180048910 (--$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z.c)
 */

void __fastcall CreativeFramework::SubscribedContentStore::Details::SetFileTimeSettingToCurrentTime(
        const WCHAR *this,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3)
{
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+18h] BYREF

  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned __int64,11>(
         this,
         lpValueName,
         SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      147LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)v5,
      v6);
}
