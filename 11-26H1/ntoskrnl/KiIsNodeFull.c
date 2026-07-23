/*
 * XREFs of KiIsNodeFull @ 0x1405F2504
 * Callers:
 *     KiQueryProcessorNode @ 0x1405F25AC (KiQueryProcessorNode.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsNodeFull(_WORD *a1)
{
  unsigned __int16 i; // dx

  for ( i = 0; i < (unsigned __int16)KiSubNodeCount; ++i )
  {
    if ( *(_WORD *)(KiSubNodeConfigBlock + 24LL * i + 2) == *a1
      && (unsigned int)__popcnt(*(_QWORD *)(KiSubNodeConfigBlock + 24LL * i + 16)) < *(unsigned __int8 *)(KiSubNodeConfigBlock + 24LL * i + 4) )
    {
      return 0;
    }
  }
  return 1;
}
