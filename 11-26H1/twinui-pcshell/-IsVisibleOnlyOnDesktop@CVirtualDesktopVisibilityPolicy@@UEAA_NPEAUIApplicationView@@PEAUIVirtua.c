/*
 * XREFs of ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054D700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180261A30 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x18027ED0C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsVisibleOnlyOnDesktop(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  __int64 v3; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  char v10; // r8
  CVirtualDesktopVisibilityPolicy *v11; // rcx
  __int64 (__fastcall **v12)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v19; // [rsp+28h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = *(_QWORD *)a2;
  v17 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v3 + 216))(a2, &v17);
  if ( v7 >= 0 )
  {
    if ( !v17 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
  }
  v8 = *(_QWORD *)a2;
  v18 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v8 + 336))(a2, &v18);
  if ( v9 >= 0 )
  {
    if ( v18 )
      return 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x82,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    1u,
    v10);
  if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v11, a2) )
  {
    v12 = *a3;
    Buf1 = 0LL;
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), __int128 *))v12[4])(
            a3,
            &Buf1);
    if ( v13 >= 0 )
    {
      if ( !memcmp_0(&Buf1, &unk_180786B98, 0x10uLL) )
        return 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v13);
    }
    v14 = *(_QWORD *)a2;
    v19 = 0LL;
    v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(v14 + 200))(a2, &v19);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v15);
      return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
    if ( memcmp_0(&v19, &unk_180788160, 0x10uLL)
      && memcmp_0(&v19, &unk_180788180, 0x10uLL)
      && memcmp_0(&v19, &unk_180788170, 0x10uLL) )
    {
      return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
  }
  return 0;
}
