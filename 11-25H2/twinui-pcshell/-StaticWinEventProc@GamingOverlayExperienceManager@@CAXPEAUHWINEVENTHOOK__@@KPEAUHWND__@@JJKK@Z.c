/*
 * XREFs of ?StaticWinEventProc@GamingOverlayExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1803502B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOwner@?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@SAPEAVGamingOverlayExperienceManager@@PEAUHWINEVENTHOOK__@@@Z @ 0x180346BA0 (-GetOwner@-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@SAPEAVGamingOverlayExperienceM.c)
 *     ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1803511A0 (-WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::StaticWinEventProc(
        __int64 hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  GamingOverlayExperienceManager *Owner; // rax
  HWINEVENTHOOK v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+38h] [rbp-10h]

  if ( !idObject )
  {
    Owner = (GamingOverlayExperienceManager *)OwnedHWinEventHook<GamingOverlayExperienceManager>::GetOwner(hWinEventHook);
    if ( Owner )
      GamingOverlayExperienceManager::WinEventProc(Owner, v7, event, hwnd, v8, v9, v10, v11);
  }
}
