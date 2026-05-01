/*
 * XREFs of ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180261A30
 * Callers:
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054D700 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x18027ED0C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CVirtualDesktopVisibilityPolicy::IsVisible(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, __int64 *))
{
  bool v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  CVirtualDesktopVisibilityPolicy *v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall **v13)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-40h] BYREF
  int v19; // [rsp+24h] [rbp-3Ch] BYREF
  int v20; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = 0;
  Buf1 = 0LL;
  v18 = 0;
  v19 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v18);
  if ( v6 >= 0 )
  {
    if ( !v18 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6);
  }
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v7);
  if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v8, a2) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v19);
    if ( v9 >= 0 )
    {
      if ( v19 )
        return 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x57,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v9);
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *), __int128 *))(*a3)[4])(
            a3,
            &Buf1);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 93LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        v11,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v10);
      return v5;
    }
    if ( memcmp_0(&Buf1, &unk_180786B98, 0x10uLL) )
    {
      v22 = 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 200LL))(a2, &v22);
      v11 = retaddr;
      if ( v10 < 0 )
      {
        v12 = 102LL;
        goto LABEL_14;
      }
      v20 = 0;
      v13 = *a3;
      v21 = 0LL;
      v14 = (*v13)((struct IVirtualDesktop *)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v21);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 56LL))(v21, &v20);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
          if ( v20 )
          {
            v5 = memcmp_0(&v22, &Buf1, 0x10uLL) == 0;
LABEL_25:
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
            return v5;
          }
LABEL_20:
          if ( !memcmp_0(&v22, &unk_180788160, 0x10uLL)
            || !memcmp_0(&v22, &unk_180788180, 0x10uLL)
            || !memcmp_0(&v22, &unk_180788170, 0x10uLL)
            || !memcmp_0(&v22, &Buf1, 0x10uLL) )
          {
            v5 = 1;
          }
          goto LABEL_25;
        }
        v16 = 109LL;
      }
      else
      {
        v16 = 107LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v15,
        (void *)v16,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_20;
    }
  }
  return 1;
}
