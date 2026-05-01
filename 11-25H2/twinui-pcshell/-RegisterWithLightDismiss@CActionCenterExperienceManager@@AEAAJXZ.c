/*
 * XREFs of ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x1802C94D4
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FE80 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180206618 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 */

__int64 __fastcall CActionCenterExperienceManager::RegisterWithLightDismiss(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  SHRegGetBOOLWithREGSAM(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
    L"DisableLightDismiss",
    a4,
    &v9);
  if ( v9 )
    return 0LL;
  v5 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (SingleViewLightDismissHelper *)(this + 44),
         (struct ILightDismissNotification *)((unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         this[19]);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x463,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
