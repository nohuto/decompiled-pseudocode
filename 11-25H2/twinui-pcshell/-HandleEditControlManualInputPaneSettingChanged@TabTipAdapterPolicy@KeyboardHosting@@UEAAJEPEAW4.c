/*
 * XREFs of ?HandleEditControlManualInputPaneSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180474580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlManualInputPaneSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 601) = a2 != 0;
  return 2147500033LL;
}
