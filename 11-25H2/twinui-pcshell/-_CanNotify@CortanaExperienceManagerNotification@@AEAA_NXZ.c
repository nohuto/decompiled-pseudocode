/*
 * XREFs of ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18036F4FC
 * Callers:
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C8C0 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C8F0 (-OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C920 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C950 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C9E0 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18036CA10 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CAF0 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CB60 (-OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18036CB90 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CCC0 (-OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CCF0 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036CD20 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CortanaExperienceManagerNotification::_CanNotify(CortanaExperienceManagerNotification *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
    return *((_BYTE *)this + 48) != 0;
  return result;
}
