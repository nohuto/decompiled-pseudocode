/*
 * XREFs of PopHiberNotificationMarkBootPhaseCallback @ 0x140C00D10
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall PopHiberNotificationMarkBootPhaseCallback(__int64 a1, void *a2, ULONG_PTR a3, ULONG Tag)
{
  PoSetHiberRange(0LL, 0x10000u, a2, a3, Tag);
}
