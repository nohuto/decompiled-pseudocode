/*
 * XREFs of HalpHvInitSystem @ 0x140BEB300
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140CAF3C0 (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 7 )
    HalpHvInitDiscard(a3);
  return 0LL;
}
