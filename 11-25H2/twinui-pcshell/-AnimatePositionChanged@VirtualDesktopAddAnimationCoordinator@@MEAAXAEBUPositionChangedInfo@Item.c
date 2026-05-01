/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804CF0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801544B0 (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A72D0 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C4EE8 (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1804CECDC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall VirtualDesktopAddAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  char *v6; // r14
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdx
  int AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 25LL);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v11 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v11);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v11 + 112LL))(v11, (char *)a2 + 28, 25LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  else if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 12) )
  {
    v12 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v12);
    if ( v5 >= 0 )
    {
      v6 = (char *)a2 + 28;
      v16 = *(_OWORD *)((char *)a2 + 28);
      v7 = *((_DWORD *)this + 62);
      HIDWORD(v16) = v7 + HIDWORD(*(_QWORD *)((char *)a2 + 36));
      DWORD1(v16) += v7;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v12 + 32LL))(
        v12,
        0LL,
        &v16,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 56LL))(v12, &v11);
      v13 = 0LL;
      if ( v11 && !(unsigned int)IsHighContrast() )
      {
        v8 = v11;
        v15 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        v14 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___(
                                                                      &v14,
                                                                      v9,
                                                                      &v13);
        if ( AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, 0LL);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
            (const char *)(unsigned int)AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, __int64))(*(_QWORD *)v12 + 32LL))(
        v12,
        0LL,
        v6,
        23LL,
        v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
}
