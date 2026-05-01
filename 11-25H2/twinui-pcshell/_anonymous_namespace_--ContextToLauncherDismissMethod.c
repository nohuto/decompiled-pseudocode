/*
 * XREFs of _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18044DB14
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801CCBE4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherDismissMethod(__int64 *a1)
{
  __int64 *v1; // r11
  __int64 *v3; // r11

  if ( winrt::operator==(a1, (char *)L"StartButton") )
    return 6LL;
  if ( winrt::operator==(v1, (char *)L"TaskView") )
    return 7LL;
  return winrt::operator==(v3, (char *)L"Drag") != 0 ? 9 : 7;
}
