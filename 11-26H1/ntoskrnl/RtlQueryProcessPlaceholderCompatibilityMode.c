/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x140807530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryProcessPlaceholderCompatibilityMode()
{
  struct _LIST_ENTRY *Blink; // rax

  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( Blink )
    return (char)Blink[123].Flink;
  else
    return -3;
}
