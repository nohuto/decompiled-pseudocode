/*
 * XREFs of ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18065F220
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FAF4 (-find@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ??$?RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowsTracker@implementation@Shell@Internal@Windows@1@AEBUWindowId@UI@61@@Z @ 0x18065E024 (--$-RUWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UWindowId@UI@45@@-$event@U-$Ev.c)
 *     ??$_Erase@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAUHWND__@@@Z @ 0x18065E0EC (--$_Erase@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compar.c)
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18065EAB8 (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::WinEventProc(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject,
        LONG idChild)
{
  __int64 *v6; // rax
  __int64 v7; // rbx
  HWINEVENTHOOK v8; // rcx
  HWND v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( event == 32769 && !idObject && !idChild )
  {
    v6 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::Current(v11);
    v7 = (*v6 - 16) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64);
    v9 = hwnd;
    std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::find(
      (_QWORD *)(v7 + 40),
      (__int64 **)&v10,
      (const unsigned __int8 *)&v9);
    if ( v10 != *(_QWORD *)(v7 + 48) )
    {
      v8 = *(HWINEVENTHOOK *)(v10 + 24);
      if ( v8 )
        UnhookWinEvent(v8);
      std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::_Erase<HWND__ *>(
        (_QWORD *)(v7 + 40),
        (unsigned __int8 *)&v9);
      v10 = (unsigned int)hwnd;
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::UI::WindowId>(
        (RTL_SRWLOCK *)(v7 + 104),
        v7,
        (__int64)&v10);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  }
}
