/*
 * XREFs of PopCheckSkipTick @ 0x1407C846C
 * Callers:
 *     PopNewProcessorCallback @ 0x1407C8540 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
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
