/*
 * XREFs of ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180499584
 * Callers:
 *     ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x180499354 (-DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCo.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x18049973C (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v18; // [rsp+28h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a2 )
    goto LABEL_21;
  v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int128 *, struct IVirtualDesktop *))(*(_QWORD *)this + 200LL))(
         this,
         &v19,
         a3);
  if ( v6 < 0 )
  {
    v7 = 18LL;
LABEL_25:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v6);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 32LL))(a2, &v18);
  if ( v6 < 0 )
  {
    v7 = 19LL;
    goto LABEL_25;
  }
  v8 = v18 - 0x4658059A45DB96FFLL;
  if ( (_QWORD)v18 == 0x4658059A45DB96FFLL )
    v8 = *((_QWORD *)&v18 + 1) - 0x1012647F7CCD4687LL;
  if ( !v8 )
    goto LABEL_21;
  v9 = v19 - v18;
  if ( (_QWORD)v19 == (_QWORD)v18 )
    v9 = *((_QWORD *)&v19 + 1) - *((_QWORD *)&v18 + 1);
  if ( !v9 )
    goto LABEL_21;
  v10 = v19 - 0x4CF966F2C2DDEA68LL;
  if ( (_QWORD)v19 == 0x4CF966F2C2DDEA68LL )
    v10 = *((_QWORD *)&v19 + 1) + 0x534404FF02E49B7ELL;
  if ( !v10 )
    goto LABEL_21;
  v11 = v19 - 0x4AB24DE3BB64D5B7LL;
  if ( (_QWORD)v19 == 0x4AB24DE3BB64D5B7LL )
    v11 = *((_QWORD *)&v19 + 1) + 0x235851FE89248358LL;
  if ( !v11 )
    goto LABEL_21;
  v12 = v19 - 0x45D551C0B4620C71LL;
  if ( (_QWORD)v19 == 0x45D551C0B4620C71LL )
    v12 = *((_QWORD *)&v19 + 1) + 0xC8183C556F22755LL;
  if ( !v12 )
  {
LABEL_21:
    v13 = *(_QWORD *)this;
    v16 = 0;
    v17 = 0;
    v14 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *, struct IVirtualDesktop *))(v13 + 216))(
            this,
            &v16,
            a3);
    if ( v14 >= 0 )
    {
      if ( v16 )
        return 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        (const char *)(unsigned int)v14);
    }
    v6 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *))(*(_QWORD *)this + 336LL))(
           this,
           &v17);
    if ( v6 >= 0 )
      return v17 != 0;
    v7 = 37LL;
    goto LABEL_25;
  }
  return v3;
}
