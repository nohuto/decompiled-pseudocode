/*
 * XREFs of _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18045A160
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045B890 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherDismissMethod(__int64 a1)
{
  if ( winrt::operator==(a1, (__int64)L"StartButton") )
    return 6LL;
  if ( winrt::operator==(a1, (__int64)L"TaskView") )
    return 7LL;
  return winrt::operator==(a1, (__int64)L"Drag") ? 9 : 7;
}
