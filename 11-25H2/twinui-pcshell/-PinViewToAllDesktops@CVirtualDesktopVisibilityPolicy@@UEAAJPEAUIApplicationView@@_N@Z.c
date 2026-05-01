/*
 * XREFs of ?PinViewToAllDesktops@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@_N@Z @ 0x18052A970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::PinViewToAllDesktops(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        char a3)
{
  __int64 v3; // rax
  __int64 *v6; // rdx
  __int64 (__fastcall *v7)(struct IApplicationView *, __int64 *); // rax
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)a2;
  v6 = &qword_18075D1E0;
  v7 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(v3 + 208);
  if ( !a3 )
    v6 = &qword_18075D1C0;
  v8 = v7(a2, v6);
  if ( v8 < 0 )
  {
    v9 = 340LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v8 < 0 )
  {
    v9 = 341LL;
    goto LABEL_7;
  }
  return (unsigned int)v8;
}
