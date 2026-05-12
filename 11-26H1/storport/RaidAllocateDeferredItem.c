/*
 * XREFs of RaidAllocateDeferredItem @ 0x140057E30
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     StorPortBusy @ 0x140050770 (StorPortBusy.c)
 *     StorPortReady @ 0x14005CDB0 (StorPortReady.c)
 *     StorPortLogError @ 0x14007BB80 (StorPortLogError.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidAllocateDeferredItem(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax

  result = ExpInterlockedPopEntrySList(a1 + 5);
  if ( result )
    LODWORD(result[1].Next) = 134684674;
  return result;
}
