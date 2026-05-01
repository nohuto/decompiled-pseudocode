/*
 * XREFs of ?IsOrphanedView@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktopCollection@@@Z @ 0x180220420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopVisibilityPolicy::IsOrphanedView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktopCollection *a3)
{
  char v5; // di
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int (__fastcall *v10)(struct IVirtualDesktopCollection *, __int128 *, __int64 *); // rbx
  int v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  Buf1 = 0LL;
  v5 = 0;
  v11 = 0;
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v11);
  if ( v6 >= 0 )
  {
    if ( !v11 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFA,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  if ( v12 )
    return 0;
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &Buf1);
  if ( v8 >= 0 )
  {
    v13 = 0LL;
    if ( memcmp_0(&Buf1, &unk_180788160, 0x10uLL)
      && memcmp_0(&Buf1, &unk_180788180, 0x10uLL)
      && memcmp_0(&Buf1, &unk_180788170, 0x10uLL) )
    {
      v10 = *(int (__fastcall **)(struct IVirtualDesktopCollection *, __int128 *, __int64 *))(*(_QWORD *)a3 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      if ( v10(a3, &Buf1, &v13) < 0 )
        v5 = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    return v5;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return 1;
  }
}
