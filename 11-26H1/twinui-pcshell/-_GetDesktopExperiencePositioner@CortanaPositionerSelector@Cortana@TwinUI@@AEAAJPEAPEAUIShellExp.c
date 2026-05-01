/*
 * XREFs of ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1803BEC34
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1803BE910 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803D05C4 (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  _QWORD *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_QWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 2)
    || (Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2),
        v9 = *((_QWORD *)this + 5),
        v10 = *((_QWORD *)this + 4),
        *v4 = 0LL,
        v5 = Microsoft::WRL::Details::MakeAndInitialize<CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ICortanaExperienceManagerNotification * &>(
               v4,
               &v10,
               &v9),
        v6 = v5,
        v5 >= 0) )
  {
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
    *a2 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBAD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)v6);
    return v6;
  }
}
