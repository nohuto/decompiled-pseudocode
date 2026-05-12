/*
 * XREFs of sub_14006B1AC @ 0x14006B1AC
 * Callers:
 *     StorPortBusy @ 0x140042460 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     StorPortReady @ 0x140056290 (StorPortReady.c)
 *     sub_14005E134 @ 0x14005E134 (sub_14005E134.c)
 *     StorPortLogError @ 0x1400742C0 (StorPortLogError.c)
 *     sub_1400D46D8 @ 0x1400D46D8 (sub_1400D46D8.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_14006B1AC(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY result; // rax

  result = ExpInterlockedPopEntrySList(a1 + 5);
  if ( result )
    LODWORD(result[1].Next) = 134684674;
  return result;
}
