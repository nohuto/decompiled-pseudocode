/*
 * XREFs of sub_1400390C4 @ 0x1400390C4
 * Callers:
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400390C4(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 68) )
    return 3221225760LL;
  if ( *(KDEFERRED_ROUTINE **)(a2 + 32) != sub_1400E0040 )
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = a2;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)sub_1401341B0);
  return 259LL;
}
