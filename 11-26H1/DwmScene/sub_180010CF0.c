/*
 * XREFs of sub_180010CF0 @ 0x180010CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D974 @ 0x18000D974 (sub_18000D974.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

FARPROC __fastcall sub_180010CF0(__int64 a1, __int64 a2, unsigned int a3)
{
  HMODULE ModuleHandleW; // rax
  FARPROC result; // rax

  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  result = sub_18000D974(ModuleHandleW);
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, __int64, _QWORD))result)(a1, a2, a3);
  return result;
}
