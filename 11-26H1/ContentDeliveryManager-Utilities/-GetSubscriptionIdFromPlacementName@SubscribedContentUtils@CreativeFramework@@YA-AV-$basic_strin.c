/*
 * XREFs of ?GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV34@@Z @ 0x18009740C
 * Callers:
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180096B04 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005E9A4 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18005F308 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180099078 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

_QWORD *__fastcall CreativeFramework::SubscribedContentUtils::GetSubscriptionIdFromPlacementName(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = std::char_traits<wchar_t>::length(L"-");
  v5 = std::wstring::find(a2, L"-", 0LL, v4);
  if ( v5 == -1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      14LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\SubscribedContentUtils.h",
      (const char *)0x80070057LL,
      v7);
  std::wstring::substr(a2, a1, v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  return a1;
}
