/*
 * XREFs of ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x1800303F0
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ @ 0x180366244 (-IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ.c)
 *     ?IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ @ 0x18036CCDC (-IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ.c)
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1803B56E8 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG@Z @ 0x1804814D8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char__ea_1804814D8.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180485010 (-ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x180636294 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x18065D554 (-evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

bool __fastcall std::wstring::_Equal(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // rdx
  const wchar_t *v4; // r10
  size_t v5; // rcx

  v2 = std::_WChar_traits<wchar_t>::length(a2);
  v5 = *((_QWORD *)v4 + 2);
  if ( *((_QWORD *)v4 + 3) > 7uLL )
    v4 = *(const wchar_t **)v4;
  return std::_Traits_equal<std::char_traits<unsigned short>>(v4, v5, v3, v2);
}
