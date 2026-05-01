/*
 * XREFs of ?SetCurrentDesktopForHighZBandView@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::SetCurrentDesktopForHighZBandView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int128 Buf1; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)a3;
  Buf1 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(v3 + 32))(a3, &Buf1);
  if ( v5 < 0 )
  {
    v6 = 327LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !memcmp_0(&Buf1, &unk_180786B98, 0x10uLL) )
  {
    v5 = -2147024809;
    v6 = 332LL;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 208LL))(a2, &Buf1);
  if ( v5 < 0 )
  {
    v6 = 335LL;
    goto LABEL_7;
  }
  return (unsigned int)v5;
}
