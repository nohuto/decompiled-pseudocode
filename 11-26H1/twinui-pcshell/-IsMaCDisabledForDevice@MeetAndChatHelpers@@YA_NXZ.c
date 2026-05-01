/*
 * XREFs of ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805F5FDC
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x1802120B0 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029A430 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MainKey_ChatCompliance@@@details@wil@@QEA.c)
 */

char __fastcall MeetAndChatHelpers::IsMaCDisabledForDevice(MeetAndChatHelpers *this, __int64 a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MainKey_ChatCompliance>::GetImpl'::`2'::impl,
    1u,
    a3);
  return 1;
}
