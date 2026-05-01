/*
 * XREFs of SdbOpenApphelpResourceFile @ 0x1800906FC
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x180091020 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetPathResourceDll @ 0x180091220 (SdbGetPathResourceDll.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

HMODULE SdbOpenApphelpResourceFile()
{
  HMODULE Library; // rbx
  DWORD LastError; // [rsp+28h] [rbp-230h]
  WCHAR LibFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  Library = 0LL;
  memset_0(LibFileName, 0, 0x208uLL);
  if ( (unsigned int)SdbGetPathResourceDll(LibFileName) )
  {
    Library = LoadLibraryExW(LibFileName, 0LL, 2u);
    if ( !Library )
    {
      LastError = GetLastError();
      AslLogCallPrintf(
        1LL,
        "SdbOpenApphelpResourceFile",
        265LL,
        "Failed to open the Apphelp resource file %ws [Gle=%u]",
        0LL,
        LastError);
    }
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbOpenApphelpResourceFile", 254LL, "SdbGetPathResourceDll failed.");
  }
  return Library;
}
