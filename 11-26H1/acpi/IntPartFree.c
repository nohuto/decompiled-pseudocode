/*
 * XREFs of IntPartFree @ 0x140071FA4
 * Callers:
 *     IntPartArbInit @ 0x1400BFF80 (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
