/*
 * XREFs of EngProbeForRead @ 0x1401C7C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngProbeForRead(PVOID Address, SIZE_T Length, ULONG Alignment)
{
  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
  }
}
