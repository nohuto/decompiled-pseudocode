/*
 * XREFs of LdrGetProcedureAddress @ 0x180085BA0
 * Callers:
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     RtlLogMessageInEventLogger @ 0x180120950 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddress(int a1, int a2, int a3, int a4)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, 0, retaddr);
}
