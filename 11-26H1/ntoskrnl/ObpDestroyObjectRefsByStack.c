/*
 * XREFs of ObpDestroyObjectRefsByStack @ 0x1407C7A50
 * Callers:
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C7A74 (ObpDestroyStackAndObjectTables.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     ObpCleanupObjectRefsByStack @ 0x1407C789C (ObpCleanupObjectRefsByStack.c)
 */

void __fastcall ObpDestroyObjectRefsByStack(PVOID P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ObpCleanupObjectRefsByStack((__int64)P, a2, a3, a4);
  ObpTraceFreeMemory(P);
}
