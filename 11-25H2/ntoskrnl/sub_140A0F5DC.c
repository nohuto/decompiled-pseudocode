/*
 * XREFs of sub_140A0F5DC @ 0x140A0F5DC
 * Callers:
 *     sub_140908B00 @ 0x140908B00 (sub_140908B00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140A0F5DC(__int64 a1)
{
  if ( a1 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
}
