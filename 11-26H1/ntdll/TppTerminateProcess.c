/*
 * XREFs of TppTerminateProcess @ 0x18011F478
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18011EFA4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x1801593F0 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
