/*
 * XREFs of ?remove_ClientWindowPrepareForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x180434AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn WindowWrapperBase::remove_ClientWindowPrepareForPresentationChanged(
        WindowWrapperBase *this,
        struct EventRegistrationToken a2)
{
  const char *v2; // r9
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x990,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)0x80004001LL,
      v4);
  }
  catch ( ... )
  {
    *(_DWORD *)(v3 + 64) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x993,
                             (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                             v2);
  }
}
