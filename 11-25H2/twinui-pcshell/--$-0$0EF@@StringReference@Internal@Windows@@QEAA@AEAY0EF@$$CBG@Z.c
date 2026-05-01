/*
 * XREFs of ??$?0$0EF@@StringReference@Internal@Windows@@QEAA@AEAY0EF@$$CBG@Z @ 0x1802C8338
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A3F6C (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[69])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.ApplicationModel.WindowManagement.UniversalAppModel",
         0x44u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
