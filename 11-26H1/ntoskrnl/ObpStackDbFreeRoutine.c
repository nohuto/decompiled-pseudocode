/*
 * XREFs of ObpStackDbFreeRoutine @ 0x1407C8230
 * Callers:
 *     ObpObjectRefsByStackAddTrace @ 0x140AB76B0 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 */

void __fastcall ObpStackDbFreeRoutine(void *a1)
{
  ObpTraceFreeMemory(a1);
}
