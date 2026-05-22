/*
 * XREFs of McGenEventRegister_EventRegister @ 0x180094ECC
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x180075B00 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger___0.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return EventRegister(
             &MICROSOFT_WINDOWSPHONE_INPUT,
             McGenControlCallbackV2,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context);
  return result;
}
