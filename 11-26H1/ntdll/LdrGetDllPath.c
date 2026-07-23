/*
 * XREFs of LdrGetDllPath @ 0x18009A6E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return LdrpGetDllPath(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
