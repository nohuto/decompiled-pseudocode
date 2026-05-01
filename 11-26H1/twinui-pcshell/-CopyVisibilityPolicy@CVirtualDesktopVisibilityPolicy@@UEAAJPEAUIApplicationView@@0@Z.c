/*
 * XREFs of ?CopyVisibilityPolicy@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@0@Z @ 0x18054D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18054D2E8 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::CopyVisibilityPolicy(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(struct IApplicationView *, __int128 *); // rax
  int v11; // edi
  __int64 v12; // rdx
  __int128 Buf1; // [rsp+20h] [rbp-48h] BYREF
  __int128 Buf2; // [rsp+30h] [rbp-38h] BYREF
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
  Buf1 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(v9 + 200);
  Buf2 = 0LL;
  v11 = v10(a3, &Buf1);
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
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &Buf2);
  if ( v11 < 0 )
  {
    v12 = 309LL;
    goto LABEL_6;
  }
  if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) )
  {
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 208LL))(a2, &Buf1);
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
