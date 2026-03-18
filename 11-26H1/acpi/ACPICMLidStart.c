/*
 * XREFs of ACPICMLidStart @ 0x1400AE7C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1400AE5E4 (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMLidStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, 4);
}
