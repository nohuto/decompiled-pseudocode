/*
 * XREFs of SHFusionLoadLibrary @ 0x1802D8144
 * Callers:
 *     DelayLoadCC @ 0x1802C1FD4 (DelayLoadCC.c)
 * Callees:
 *     SHActivateContext @ 0x180224DEC (SHActivateContext.c)
 *     SHDeactivateContext @ 0x1802D811C (SHDeactivateContext.c)
 */

HMODULE SHFusionLoadLibrary()
{
  HMODULE Library; // rbx
  ULONG_PTR ulCookie; // [rsp+30h] [rbp+8h] BYREF

  ulCookie = 0LL;
  if ( !SHActivateContext(&ulCookie) )
    return 0LL;
  Library = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  SHDeactivateContext(ulCookie);
  return Library;
}
