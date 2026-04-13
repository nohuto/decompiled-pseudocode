/*
 * XREFs of _LDscale @ 0x18000DE6C
 * Callers:
 *     _Stoldx @ 0x180006020 (_Stoldx.c)
 *     _LXp_addh @ 0x18000DE78 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E288 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E5C8 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDscale(__int16 *a1, __int64 a2)
{
  return Dscale(a1, a2);
}
