/*
 * XREFs of ObpDestroyObjectRefsByStack @ 0x1407C49F0
 * Callers:
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C4A14 (ObpDestroyStackAndObjectTables.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     ObpCleanupObjectRefsByStack @ 0x1407C483C (ObpCleanupObjectRefsByStack.c)
 */

void __fastcall ObpDestroyObjectRefsByStack(PVOID P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ObpCleanupObjectRefsByStack((__int64)P, a2, a3, a4);
  ObpTraceFreeMemory(P);
}
