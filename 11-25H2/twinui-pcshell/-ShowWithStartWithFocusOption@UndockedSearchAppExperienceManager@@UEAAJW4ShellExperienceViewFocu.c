/*
 * XREFs of ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800ABB80
 * Callers:
 *     ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1803B08E0 (-ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800AD1DC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x1800AD318 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?EnsureImmersiveLauncher@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800AD6C8 (-EnsureImmersiveLauncher@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memcpy_s_3 @ 0x1802E09D8 (memcpy_s_3.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::ShowWithStartWithFocusOption(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edx
  struct winrt::impl::shared_hstring_header *v6; // rdi
  const char *v7; // r9
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest(a1, 2LL, 0LL);
    v4 = UndockedSearchAppExperienceManager::EnsureImmersiveLauncher((UndockedSearchAppExperienceManager *)a1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4A9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    else
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 88)
                                                                                             + 40LL))(
                                           *(_QWORD *)(a1 + 88),
                                           v9,
                                           *(_QWORD *)(a1 + 80));
    v6 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)0xB, v5);
    memcpy_s_3((char *)v6 + 28, 0x16uLL, L"StartButton", 0x16uLL);
    v9[0] = v6;
    UndockedSearchAppExperienceManager::ActivateAppAsync(a1, 0LL, a2, v9, 1, &LocaleName);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4B0,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v7);
  }
  return result;
}
