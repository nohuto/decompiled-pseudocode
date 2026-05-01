/*
 * XREFs of ?PinViewToAllDesktops@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@_N@Z @ 0x18054D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::PinViewToAllDesktops(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        char a3)
{
  void *v4; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = &unk_180788180;
  if ( !a3 )
    v4 = &unk_180788160;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, void *))(*(_QWORD *)a2 + 208LL))(a2, v4);
  if ( v6 < 0 )
  {
    v7 = 340LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v6 < 0 )
  {
    v7 = 341LL;
    goto LABEL_7;
  }
  return (unsigned int)v6;
}
