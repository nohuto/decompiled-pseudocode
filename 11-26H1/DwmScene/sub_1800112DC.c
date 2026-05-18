/*
 * XREFs of sub_1800112DC @ 0x1800112DC
 * Callers:
 *     sub_180010E00 @ 0x180010E00 (sub_180010E00.c)
 * Callees:
 *     <none>
 */

FARPROC sub_1800112DC()
{
  HMODULE ModuleHandleW; // rax
  __int64 WilFailureNotifyWatchers; // rbx

  ModuleHandleW = hModule;
  WilFailureNotifyWatchers = 0LL;
  if ( hModule )
    return GetProcAddress(ModuleHandleW, "WilFailureNotifyWatchers");
  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  hModule = ModuleHandleW;
  if ( ModuleHandleW )
    return GetProcAddress(ModuleHandleW, "WilFailureNotifyWatchers");
  return (FARPROC)WilFailureNotifyWatchers;
}
