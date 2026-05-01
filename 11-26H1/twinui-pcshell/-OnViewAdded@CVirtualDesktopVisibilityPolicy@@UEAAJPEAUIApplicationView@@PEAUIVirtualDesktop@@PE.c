/*
 * XREFs of ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1801A3ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x18027ED0C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopVisibilityPolicy::OnViewAdded(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktopCollection *a4)
{
  int v8; // eax
  __int64 v9; // rbx
  int v11; // ebx
  struct IVirtualDesktop *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  CVirtualDesktopVisibilityPolicy *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  int (__fastcall *v22)(struct IVirtualDesktopCollection *, __int128 *, __int64 *); // rbx
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+28h] [rbp-38h] BYREF
  GUID v25; // [rsp+38h] [rbp-28h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  Buf1 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &Buf1);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v9 = 0LL;
    v23 = 0LL;
    if ( !memcmp_0(&Buf1, &unk_180788160, 0x10uLL)
      || !memcmp_0(&Buf1, &unk_180788180, 0x10uLL)
      || !memcmp_0(&Buf1, &unk_180788170, 0x10uLL) )
    {
      return 0LL;
    }
    if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) && memcmp_0(&Buf1, &unk_180786B98, 0x10uLL) )
    {
      v22 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int128 *, __int64 *))(*(_QWORD *)a4 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      if ( v22(a4, &Buf1, &v23) >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        return 0LL;
      }
      v9 = v23;
    }
    if ( v9 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v26 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v26);
  if ( v11 < 0 )
  {
    v21 = 228LL;
    goto LABEL_27;
  }
  v12 = 0LL;
  if ( memcmp_0(&v26, &unk_180786B98, 0x10uLL) )
    v12 = a3;
  LODWORD(v23) = 0;
  v13 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 336LL))(a2, &v23);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v13);
  }
  else if ( (_DWORD)v23 )
  {
    return 0LL;
  }
  LOBYTE(v14) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v14);
  if ( CVirtualDesktopVisibilityPolicy::IsAppBarView(v15, a2) )
    return 0LL;
  v25 = GUID_NULL;
  if ( !v12 )
    goto LABEL_16;
  v18 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)v12 + 32LL))(v12, &v25);
  v11 = v18;
  if ( v18 < 0 )
  {
    v19 = (unsigned int)v18;
    v20 = 176LL;
    goto LABEL_25;
  }
  if ( !memcmp_0(&v25, &unk_180786B98, 0x10uLL) )
  {
    v11 = -2147024809;
    v19 = 2147942487LL;
    v20 = 180LL;
  }
  else
  {
LABEL_16:
    v16 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *))(*(_QWORD *)a2 + 208LL))(a2, &v25);
    v11 = v16;
    if ( v16 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
              *((_QWORD *)this + 2),
              a2);
      v11 = v17;
      if ( v17 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
          (const char *)(unsigned int)v17);
      if ( v11 >= 0 )
        return 0LL;
      goto LABEL_26;
    }
    v19 = (unsigned int)v16;
    v20 = 184LL;
  }
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)v19);
LABEL_26:
  v21 = 234LL;
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
