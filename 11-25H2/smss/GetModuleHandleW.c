/*
 * XREFs of GetModuleHandleW @ 0x14001D2D8
 * Callers:
 *     wil_details_GetNtDllProcedureAddress @ 0x14001BEB0 (wil_details_GetNtDllProcedureAddress.c)
 * Callees:
 *     BasepGetModuleHandleExW @ 0x14001D250 (BasepGetModuleHandleExW.c)
 */

__int64 __fastcall GetModuleHandleW(__int64 a1, __int64 a2)
{
  BOOL ModuleHandle; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  ModuleHandle = BasepGetModuleHandleExW(a1, a2, &v4);
  return v4 & -(__int64)ModuleHandle;
}
