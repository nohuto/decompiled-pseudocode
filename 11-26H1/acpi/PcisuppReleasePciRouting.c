/*
 * XREFs of PcisuppReleasePciRouting @ 0x1400BC760
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1400BC4A4 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1400BC658 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
