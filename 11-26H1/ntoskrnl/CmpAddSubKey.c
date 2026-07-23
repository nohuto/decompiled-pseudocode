/*
 * XREFs of CmpAddSubKey @ 0x1408C6284
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1)
{
  return CmpAddSubKeyEx(a1);
}
