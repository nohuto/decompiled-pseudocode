/*
 * XREFs of ?ShowWithStartWithFocusOption@UndockedSearchAppExperienceManager@@UEAAJW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18023F4B0
 * Callers:
 *     ?ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x1803B9170 (-ShowWithStart@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x18023F5D8 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::ShowWithStartWithFocusOption(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, __int64); // rbx
  const char *v7; // r9
  __int64 result; // rax
  volatile signed __int32 *v9[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest(a1, 2LL, 0LL);
    v4 = 0;
    if ( !*(_QWORD *)(a1 + 80) )
    {
      v5 = *(_QWORD *)(a1 + 48);
      v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64))(*(_QWORD *)v5 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
      v4 = v6(v5, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, a1 + 80);
    }
    if ( v4 >= 0 )
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 **, _QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(
                                           *(_QWORD *)(a1 + 88),
                                           v9,
                                           *(_QWORD *)(a1 + 80));
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x51A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    winrt::hstring::hstring((winrt::hstring *)v9, L"StartButton");
    UndockedSearchAppExperienceManager::ActivateAppAsync(
      a1,
      0,
      a2,
      (winrt::hstring *)v9,
      1,
      (unsigned __int16 *)&pvData);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x521,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v7);
  }
  return result;
}
