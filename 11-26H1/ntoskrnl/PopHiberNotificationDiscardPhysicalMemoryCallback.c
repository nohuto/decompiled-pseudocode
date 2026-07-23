/*
 * XREFs of PopHiberNotificationDiscardPhysicalMemoryCallback @ 0x140C00CE0
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall PopHiberNotificationDiscardPhysicalMemoryCallback(void *a1, void *a2, ULONG_PTR a3, ULONG Tag)
{
  PoSetHiberRange(a1, 0xC000u, a2, a3, Tag);
}
