/*
 * XREFs of ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x1801628CC
 * Callers:
 *     ?MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054D8F0 (-MoveViewToDesktop@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x18027ED0C (-IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::MoveViewToDesktopIfAllowed(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        bool *a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  CVirtualDesktopVisibilityPolicy *v11; // rcx
  int v12; // ebx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-48h] BYREF
  GUID Buf1; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a4 )
    *a4 = 1;
  v8 = *(_QWORD *)a2;
  v15 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v8 + 336))(a2, &v15);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v9);
  }
  else if ( v15 )
  {
    goto LABEL_15;
  }
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v10);
  if ( !CVirtualDesktopVisibilityPolicy::IsAppBarView(v11, a2) )
  {
    Buf1 = GUID_NULL;
    if ( !a3 )
      goto LABEL_7;
    v12 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)a3 + 32LL))(a3, &Buf1);
    if ( v12 < 0 )
    {
      v14 = 176LL;
      goto LABEL_13;
    }
    if ( !memcmp_0(&Buf1, &unk_180786B98, 0x10uLL) )
    {
      v12 = -2147024809;
      v14 = 180LL;
    }
    else
    {
LABEL_7:
      v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *))(*(_QWORD *)a2 + 208LL))(a2, &Buf1);
      if ( v12 < 0 )
      {
        v14 = 184LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
                *((_QWORD *)this + 2),
                a2);
        if ( v12 >= 0 )
          return (unsigned int)v12;
        v14 = 185LL;
      }
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
LABEL_15:
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
