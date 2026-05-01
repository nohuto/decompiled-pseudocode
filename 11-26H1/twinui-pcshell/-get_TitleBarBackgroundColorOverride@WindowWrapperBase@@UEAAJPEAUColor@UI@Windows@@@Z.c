/*
 * XREFs of ?get_TitleBarBackgroundColorOverride@WindowWrapperBase@@UEAAJPEAUColor@UI@Windows@@@Z @ 0x180440660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_TitleBarBackgroundColorOverride(
        WindowWrapperBase *this,
        struct Windows::UI::Color *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D1,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
