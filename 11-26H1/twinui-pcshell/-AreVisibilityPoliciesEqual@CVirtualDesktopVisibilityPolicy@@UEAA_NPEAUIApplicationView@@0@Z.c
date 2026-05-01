/*
 * XREFs of ?AreVisibilityPoliciesEqual@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@0@Z @ 0x18054D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@Z @ 0x18054D2E8 (-AreVisibilityPoliciesCompatible@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesEqual(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  char v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  __int128 Buf2; // [rsp+20h] [rbp-38h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Buf1 = 0LL;
  Buf2 = 0LL;
  v5 = 0;
  if ( CVirtualDesktopVisibilityPolicy::AreVisibilityPoliciesCompatible(this, a2, a3) )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &Buf1);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &Buf2);
      if ( v6 >= 0 )
        return memcmp_0(&Buf1, &Buf2, 0x10uLL) == 0;
      v7 = 288LL;
    }
    else
    {
      v7 = 287LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  return v5;
}
