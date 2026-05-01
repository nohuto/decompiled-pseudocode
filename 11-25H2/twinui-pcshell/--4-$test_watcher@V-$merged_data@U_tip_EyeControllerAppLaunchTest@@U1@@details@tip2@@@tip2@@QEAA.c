/*
 * XREFs of ??4?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x18047B460
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18047D808 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x1801E6904 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ?Release@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18047CAF4 (-Release@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator=(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = *(void **)(a1 + 48);
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 280));
  if ( v4 )
    tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::Release(v4);
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 8),
    *(_DWORD *)(a2 + 32) != 0);
  return a1;
}
