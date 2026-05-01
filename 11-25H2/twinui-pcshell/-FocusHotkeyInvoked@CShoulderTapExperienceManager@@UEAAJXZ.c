/*
 * XREFs of ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x18037CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18002EA40 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18065BDCC (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShoulderTapExperienceManager::FocusHotkeyInvoked(CShoulderTapExperienceManager *this)
{
  CSingleViewShellExperience *v1; // rbx
  int v2; // eax
  unsigned int v3; // r8d
  HSTRING_HEADER *v4; // rax
  struct Windows::Foundation::Collections::IPropertySet *v5; // r9
  int v6; // eax
  HSTRING_HEADER v8; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_DWORD *)this + 20) == 2 )
  {
    v1 = (CShoulderTapExperienceManager *)((char *)this + 40);
    v2 = CSingleViewShellExperience::NavigateView((char *)this + 40, 5LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x178,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, (const WCHAR **)&off_1807355F0, v3);
    v6 = CSingleViewShellExperience::Reactivate(v1, (HSTRING)v4[1].Reserved.Reserved1, 0LL, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x179,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  return 0LL;
}
