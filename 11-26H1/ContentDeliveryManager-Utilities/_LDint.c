/*
 * XREFs of _LDint @ 0x180020F18
 * Callers:
 *     _LXp_addh @ 0x18000DE78 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E288 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E5C8 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDint(_WORD *a1, __int16 a2)
{
  return Dint(a1, a2);
}
