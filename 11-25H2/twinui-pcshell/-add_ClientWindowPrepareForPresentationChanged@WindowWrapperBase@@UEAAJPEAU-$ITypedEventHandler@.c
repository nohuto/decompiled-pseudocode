/*
 * XREFs of ?add_ClientWindowPrepareForPresentationChanged@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowPrepareForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180433690
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn WindowWrapperBase::add_ClientWindowPrepareForPresentationChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  const char *v3; // r9
  int *v4; // rdx
  int v5[10]; // [rsp+0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x988,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80004001LL,
      v5[8]);
  }
  catch ( ... )
  {
    v4 = v5;
    v4[16] = wil::details::in1diag3::Return_CaughtException(
               *((wil::details::in1diag3 **)v4 + 5),
               (void *)0x98B,
               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
               v3);
  }
}
