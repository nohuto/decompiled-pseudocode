/*
 * XREFs of ClearEnumerationContext @ 0x140005F9C
 * Callers:
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
