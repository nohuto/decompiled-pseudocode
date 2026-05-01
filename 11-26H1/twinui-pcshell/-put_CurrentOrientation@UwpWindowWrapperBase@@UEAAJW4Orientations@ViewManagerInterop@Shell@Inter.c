/*
 * XREFs of ?put_CurrentOrientation@UwpWindowWrapperBase@@UEAAJW4Orientations@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180448CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 UwpWindowWrapperBase::put_CurrentOrientation()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B3,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
