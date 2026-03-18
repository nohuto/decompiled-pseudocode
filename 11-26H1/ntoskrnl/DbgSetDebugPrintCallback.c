/*
 * XREFs of DbgSetDebugPrintCallback @ 0x14052FD00
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 *     EtwpEnableKernelTrace @ 0x14095ACA0 (EtwpEnableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1406180B8 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14061819C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
