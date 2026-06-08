/*
 * XREFs of ClearEnumerationContext @ 0x140005440
 * Callers:
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
