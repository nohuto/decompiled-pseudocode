/*
 * XREFs of ZwAcceptConnectPort @ 0x140723430
 * Callers:
 *     DifZwAcceptConnectPortWrapper @ 0x140697100 (DifZwAcceptConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
