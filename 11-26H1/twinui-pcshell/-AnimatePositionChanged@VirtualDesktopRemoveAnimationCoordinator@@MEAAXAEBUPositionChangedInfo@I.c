/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E1B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8CA8 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D6F3C (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopRemoveAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopRemoveAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _QWORD, __int64, _QWORD, _QWORD); // rdi
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 27LL);
    return;
  }
  if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v10 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v10);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v10 + 112LL))(v10, (char *)a2 + 28, 27LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
LABEL_12:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    return;
  }
  if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 16) )
  {
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v10);
    if ( v5 >= 0 )
    {
      v6 = v10;
      v7 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 40LL);
      HighContrastAwareOpacity<float>::operator float((float *)this + 64);
      v7(v6, 0LL, v8, 0LL, 0LL);
      v11 = *(_OWORD *)((char *)a2 + 28);
      v9 = *((_DWORD *)this + 186);
      HIDWORD(v11) = v9 + HIDWORD(*(_QWORD *)((char *)a2 + 36));
      DWORD1(v11) += v9;
      (*(void (__fastcall **)(__int64, _QWORD, char *, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL))(
        v10,
        0LL,
        (char *)a2 + 28,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, __int64, _QWORD))(*(_QWORD *)v10 + 32LL))(
        v10,
        0LL,
        &v11,
        24LL,
        0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    goto LABEL_12;
  }
}
