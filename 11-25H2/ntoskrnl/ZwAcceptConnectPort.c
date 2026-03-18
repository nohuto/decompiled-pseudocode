/*
 * XREFs of ZwAcceptConnectPort @ 0x14069B180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
