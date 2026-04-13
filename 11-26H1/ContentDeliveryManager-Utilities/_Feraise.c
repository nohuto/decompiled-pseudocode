/*
 * XREFs of _Feraise @ 0x180020948
 * Callers:
 *     _FXp_addh @ 0x18000C538 (_FXp_addh.c)
 *     _FXp_mulh @ 0x18000C9F0 (_FXp_mulh.c)
 *     _Xp_addh @ 0x18000D2C8 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18000D794 (_Xp_mulh.c)
 *     _LXp_addh @ 0x18000DE78 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E288 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
