/*
 * XREFs of ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18052A690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802696C0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x180287808 (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v11; // r9
  CVirtualDesktopVisibilityPolicy *v12; // rcx
  __int64 (__fastcall **v13)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v24; // [rsp+28h] [rbp-28h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = *(_QWORD *)a2;
  v22 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v3 + 216))(a2, &v22);
  if ( v7 >= 0 )
  {
    if ( !v22 )
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
  v23 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v8 + 336))(a2, &v23);
  if ( v9 >= 0 )
  {
    if ( v23 )
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
    v10,
    v11);
  if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v12, a2) )
  {
    v13 = *a3;
    v24 = 0LL;
    v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), __int128 *))v13[4])(
            a3,
            &v24);
    if ( v14 >= 0 )
    {
      v15 = v24 - 0x4658059A45DB96FFLL;
      if ( (_QWORD)v24 == 0x4658059A45DB96FFLL )
        v15 = *((_QWORD *)&v24 + 1) - 0x1012647F7CCD4687LL;
      if ( !v15 )
        return 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v14);
    }
    v16 = *(_QWORD *)a2;
    v25 = 0LL;
    v17 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(v16 + 200))(a2, &v25);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v17);
      return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
    }
    v18 = v25 - 0x4CF966F2C2DDEA68LL;
    if ( (_QWORD)v25 == 0x4CF966F2C2DDEA68LL )
      v18 = *((_QWORD *)&v25 + 1) + 0x534404FF02E49B7ELL;
    if ( v18 )
    {
      v19 = v25 - 0x4AB24DE3BB64D5B7LL;
      if ( (_QWORD)v25 == 0x4AB24DE3BB64D5B7LL )
        v19 = *((_QWORD *)&v25 + 1) + 0x235851FE89248358LL;
      if ( v19 )
      {
        v20 = v25 - 0x45D551C0B4620C71LL;
        if ( (_QWORD)v25 == 0x45D551C0B4620C71LL )
          v20 = *((_QWORD *)&v25 + 1) + 0xC8183C556F22755LL;
        if ( v20 )
          return CVirtualDesktopVisibilityPolicy::IsVisible(this, a2, a3);
      }
    }
  }
  return 0;
}
