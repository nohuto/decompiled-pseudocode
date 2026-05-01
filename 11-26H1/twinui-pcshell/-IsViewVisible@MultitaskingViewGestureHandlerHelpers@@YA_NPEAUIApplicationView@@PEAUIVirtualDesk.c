/*
 * XREFs of ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804AA438
 * Callers:
 *     ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x1804AA204 (-DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCo.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x1804AA5DC (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall MultitaskingViewGestureHandlerHelpers::IsViewVisible(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  char v3; // bl
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = 0;
  Buf1 = 0LL;
  v13 = 0LL;
  if ( !a2 )
    goto LABEL_11;
  v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int128 *, struct IVirtualDesktop *))(*(_QWORD *)this + 200LL))(
         this,
         &v13,
         a3);
  if ( v6 < 0 )
  {
    v7 = 18LL;
LABEL_15:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v6);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 32LL))(a2, &Buf1);
  if ( v6 < 0 )
  {
    v7 = 19LL;
    goto LABEL_15;
  }
  if ( !memcmp_0(&Buf1, &unk_1807B1080, 0x10uLL)
    || !memcmp_0(&v13, &Buf1, 0x10uLL)
    || !memcmp_0(&v13, &unk_1807B1060, 0x10uLL)
    || !memcmp_0(&v13, &unk_1807B1070, 0x10uLL)
    || !memcmp_0(&v13, &unk_1807B1050, 0x10uLL) )
  {
LABEL_11:
    v8 = *(_QWORD *)this;
    v11 = 0;
    v12 = 0;
    v9 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *, struct IVirtualDesktop *))(v8 + 216))(
           this,
           &v11,
           a3);
    if ( v9 >= 0 )
    {
      if ( v11 )
        return 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        (const char *)(unsigned int)v9);
    }
    v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *))(*(_QWORD *)this + 336LL))(
           this,
           &v12);
    if ( v6 >= 0 )
      return v12 != 0;
    v7 = 37LL;
    goto LABEL_15;
  }
  return v3;
}
