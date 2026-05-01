/*
 * XREFs of ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1801C60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsImeInputProfileEnabled @ 0x1801C6144 (IsImeInputProfileEnabled.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::InputAppPreloader::OnEnabledInputProfilesChanged(
        KeyboardHosting::InputAppPreloader *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *a3)
{
  int v4; // eax
  __int32 v5; // ecx
  const char *v6; // r9
  __int32 v7; // eax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v4,
        v9);
    v5 = (unsigned __int8)IsImeInputProfileEnabled(0LL) + 1;
    v7 = _InterlockedExchange((volatile __int32 *)this + 8, v5);
    if ( v5 == 2 && v7 != 2 )
      TouchKeyboardExperienceManager::PreloadInputApp(*(TouchKeyboardExperienceManager **)this);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
                           v6);
  }
  return result;
}
