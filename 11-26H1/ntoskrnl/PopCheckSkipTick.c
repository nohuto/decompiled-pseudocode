/*
 * XREFs of PopCheckSkipTick @ 0x1407CB4CC
 * Callers:
 *     PopNewProcessorCallback @ 0x1407CB5A0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  ULONG v0; // ebx
  bool result; // al

  result = 1;
  if ( PopApicMode != 2 && ((HvlEnlightenments & 0x4000) == 0 || (HvlpFlags & 2) != 0) )
  {
    if ( PopApicMode != 3 )
      return 0;
    v0 = 8 * PopApicClusterSize;
    if ( KeQueryActiveProcessorCountEx(0xFFFFu) > v0 )
      return 0;
  }
  return result;
}
