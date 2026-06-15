/*
 * XREFs of sub_14007F9EC @ 0x14007F9EC
 * Callers:
 *     sub_14007FDC0 @ 0x14007FDC0 (sub_14007FDC0.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall sub_14007F9EC(LPCSTR lpProcName)
{
  HMODULE ModuleHandleW; // rax
  __int64 v2; // rbx

  ModuleHandleW = hModule;
  v2 = 0LL;
  if ( hModule )
    return GetProcAddress(ModuleHandleW, lpProcName);
  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  hModule = ModuleHandleW;
  if ( ModuleHandleW )
    return GetProcAddress(ModuleHandleW, lpProcName);
  return (FARPROC)v2;
}
