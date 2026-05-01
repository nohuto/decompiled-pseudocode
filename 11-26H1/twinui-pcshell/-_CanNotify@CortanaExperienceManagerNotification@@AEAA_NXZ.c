/*
 * XREFs of ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x180376D68
 * Callers:
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373D80 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373DB0 (-OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373DE0 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373E10 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373EA0 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180373ED0 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180373FC0 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180374030 (-OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180374060 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1803741A0 (-OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1803741D0 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180374200 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
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
