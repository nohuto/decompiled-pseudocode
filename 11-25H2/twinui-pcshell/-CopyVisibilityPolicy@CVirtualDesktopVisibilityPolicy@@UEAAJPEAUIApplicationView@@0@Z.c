/*
 * XREFs of ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x18052A430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18052A264 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::CopyVisibilityPolicy(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(struct IApplicationView *, int *); // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a3, a2) )
  {
    v6 = -2147019873;
    v7 = 306LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_QWORD *)a3;
  *(_OWORD *)v14 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IApplicationView *, int *))(v9 + 200);
  v15 = 0LL;
  v11 = v10(a3, v14);
  if ( v11 < 0 )
  {
    v12 = 308LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &v15);
  if ( v11 < 0 )
  {
    v12 = 309LL;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)v14 - v15;
  if ( *(_QWORD *)v14 == (_QWORD)v15 )
    v13 = *(_QWORD *)&v14[2] - *((_QWORD *)&v15 + 1);
  if ( v13 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 208LL))(a2, v14);
    if ( v11 < 0 )
    {
      v12 = 312LL;
      goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
           *((_QWORD *)this + 2),
           a2);
    if ( v6 < 0 )
    {
      v7 = 313LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
