/*
 * XREFs of zzzDelegateInputFocusLostWindowEvent @ 0x1402897EC
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     EditionKeyboardInputDelegationChanged @ 0x140279FF0 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1402896A0 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzDelegateInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  zzzInputFocusLostWindowEventImpl(a1, KeyboardDelegationTargetQ, a2);
}
