/*
 * XREFs of ?IsViewPinned@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEA_N@Z @ 0x1801E5040
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsViewPinned(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        bool *a3)
{
  char v4; // bl
  __int64 v5; // rax
  int v6; // eax
  bool v7; // al
  __int128 Buf1; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( a3 )
    *a3 = 0;
  v5 = *(_QWORD *)a2;
  Buf1 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(v5 + 200))(a2, &Buf1);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = memcmp_0(&Buf1, &unk_180788180, 0x10uLL) == 0;
    if ( a3 )
      *a3 = v7;
  }
  if ( !memcmp_0(&Buf1, &unk_180788160, 0x10uLL) || !memcmp_0(&Buf1, &unk_180788180, 0x10uLL) )
    return 1;
  return v4;
}
