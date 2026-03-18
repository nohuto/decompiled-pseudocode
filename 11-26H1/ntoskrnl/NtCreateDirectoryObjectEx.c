/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140AF9E50
 * Callers:
 *     DifNtCreateDirectoryObjectExWrapper @ 0x140670290 (DifNtCreateDirectoryObjectExWrapper.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140AF9E70 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return ObpCreateDirectoryObject(a1, a2, a3, a4, a5);
}
