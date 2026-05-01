/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E12C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8CA8 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D6F3C (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1804E0ECC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall VirtualDesktopAddAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  char *v6; // r14
  int v7; // ecx
  __int64 v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // r8
  int AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73; // ebx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

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
    v13 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v13);
    if ( v5 >= 0 )
    {
      v6 = (char *)a2 + 28;
      v17 = *(_OWORD *)((char *)a2 + 28);
      v7 = *((_DWORD *)this + 62);
      HIDWORD(v17) = v7 + HIDWORD(*(_QWORD *)((char *)a2 + 36));
      DWORD1(v17) += v7;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL))(
        v13,
        0LL,
        &v17,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 56LL))(v13, &v11);
      v12 = 0LL;
      if ( v11 && !(unsigned int)IsHighContrast() )
      {
        v8 = v11;
        v16 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
        v14 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v12 = 0LL;
        v15 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(0LL, &v15, v9, &v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        if ( AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, 0LL);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
            (const char *)(unsigned int)AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, __int64))(*(_QWORD *)v13 + 32LL))(
        v13,
        0LL,
        v6,
        23LL,
        v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
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
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
}
