/*
 * XREFs of ?ShowPlaceMode@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x18049E560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::ShowPlaceMode(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2,
        struct IAppLayout *a3,
        struct tagRECT *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
