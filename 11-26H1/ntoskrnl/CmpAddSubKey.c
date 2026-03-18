/*
 * XREFs of CmpAddSubKey @ 0x1408BFCB4
 * Callers:
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1408C04BC (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1)
{
  return CmpAddSubKeyEx(a1);
}
