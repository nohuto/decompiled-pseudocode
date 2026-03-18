/*
 * XREFs of ObpStackDbFreeRoutine @ 0x1407C51D0
 * Callers:
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 */

void __fastcall ObpStackDbFreeRoutine(void *a1)
{
  ObpTraceFreeMemory(a1);
}
