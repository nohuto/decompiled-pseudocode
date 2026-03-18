/*
 * XREFs of DbgkpLkmdSnapData @ 0x1405B3D70
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x14078B8F0 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     DbgkpLkmdSnapDataEx @ 0x1405B3D9C (DbgkpLkmdSnapDataEx.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(int a1, int a2, int a3)
{
  return DbgkpLkmdSnapDataEx(a1, a2, a3, 0, 0LL, 0LL);
}
