/*
 * XREFs of ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802BF8E0
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031B520 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B0A78 (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B5B40 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803CA87C (-OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803D6894 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1803D6F34 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1803D6FFC (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803D7EA0 (-AboveLockAppActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803D8A20 (-WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18047023C (-SaveUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXW4TapInvokeSettingV.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1805FB080 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18065AECC (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x18067AAF0 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x180689350 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 *     ?v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z @ 0x18068B0D0 (-v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z.c)
 *     ?v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z @ 0x18068B100 (-v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180694EC8 (PersistEnterprisePinDataToRegistry.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801DE804 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, (BYTE *)&v5, 4u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
