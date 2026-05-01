/*
 * XREFs of ?HandleInputHostVisibilityChange@CortanaStoreAppExperienceManager@@AEAAJPEAUHWND__@@@Z @ 0x1803A1840
 * Callers:
 *     ?InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803A1A50 (-InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803A1AB0 (-InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801A8474 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::HandleInputHostVisibilityChange(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v4; // rcx
  HWND v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  HWND v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = (ExperienceManagerUtils *)*((_QWORD *)this + 29);
  if ( v4 && *((_QWORD *)this + 30) )
  {
    v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v4, a2);
    v13 = 0LL;
    v6 = *((_QWORD *)this + 30);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v8 = v7(v6, &v13);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1307LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      return v9;
    }
    v14 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1309LL;
      goto LABEL_11;
    }
    if ( a2 == (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v5
      || a2 == (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v14 )
    {
      v8 = CortanaStoreAppExperienceManager::PositionCortanaWindow(this);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1313LL;
        goto LABEL_11;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  return 0LL;
}
