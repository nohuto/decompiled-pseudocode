/*
 * XREFs of _LXp_setn @ 0x18000E5A0
 * Callers:
 *     _Stoldx @ 0x180006020 (_Stoldx.c)
 * Callees:
 *     _LXp_setw @ 0x18000E5C8 (_LXp_setw.c)
 */

__int64 __fastcall LXp_setn(__int64 a1, __int64 a2)
{
  LXp_setw(a1, a2);
  return a1;
}
