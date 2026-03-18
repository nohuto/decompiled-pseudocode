/*
 * XREFs of SdbGetPathSystemSdb @ 0x14088652C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140886554 (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x140886F14 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
