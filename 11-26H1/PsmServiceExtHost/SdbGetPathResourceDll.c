/*
 * XREFs of SdbGetPathResourceDll @ 0x180091220
 * Callers:
 *     SdbOpenApphelpResourceFile @ 0x1800906FC (SdbOpenApphelpResourceFile.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x180091F84 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathResourceDll(int a1, int a2, __int64 a3, int a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, 11, a4, 0LL, 0LL) >= 0;
}
