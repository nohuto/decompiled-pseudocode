/*
 * XREFs of LdrGetProcedureAddress @ 0x18007CF40
 * Callers:
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     RtlLogMessageInEventLogger @ 0x180120700 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddress(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress)
{
  PVOID *Callback; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(DllHandle, ProcedureName, ProcedureNumber, ProcedureAddress, 0, Callback);
}
