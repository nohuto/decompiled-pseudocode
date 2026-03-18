/*
 * XREFs of xxxUnlockMenuState @ 0x14015BCF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuState(__int64 a1)
{
  int v3; // r8d

  if ( (*(_DWORD *)(a1 + 40))-- != 1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( (v3 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
