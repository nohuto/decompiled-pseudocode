/*
 * XREFs of ?SetCurrentDesktopForHighZBandView@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18052AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::SetCurrentDesktopForHighZBandView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)a3;
  *(_OWORD *)v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, int *))(v3 + 32))(a3, v9);
  if ( v5 < 0 )
  {
    v6 = 327LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v7 = *(_QWORD *)v9 - 0x4658059A45DB96FFLL;
  if ( *(_QWORD *)v9 == 0x4658059A45DB96FFLL )
    v7 = *(_QWORD *)&v9[2] - 0x1012647F7CCD4687LL;
  if ( !v7 )
  {
    v5 = -2147024809;
    v6 = 332LL;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 208LL))(a2, v9);
  if ( v5 < 0 )
  {
    v6 = 335LL;
    goto LABEL_9;
  }
  return (unsigned int)v5;
}
