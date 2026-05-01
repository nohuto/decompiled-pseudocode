/*
 * XREFs of ?ChangeTitleBarHeight@WindowWrapperBase@@UEAAJN@Z @ 0x18042F600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeTitleBarHeight(WindowWrapperBase *this, double a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x282,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
