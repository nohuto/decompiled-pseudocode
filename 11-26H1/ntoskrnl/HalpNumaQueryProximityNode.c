/*
 * XREFs of HalpNumaQueryProximityNode @ 0x1405948B0
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x140593FD0 (HalpNumaAddRangeProximity.c)
 *     HalpNumaGetHmatConfigSize @ 0x140594348 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaQueryMemoryNumaAttributes @ 0x140594670 (HalpNumaQueryMemoryNumaAttributes.c)
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140594900 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 *     HalpNumaParseHmat @ 0x140CB82E0 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryProximityNode(int a1, unsigned __int16 *a2)
{
  unsigned __int16 i; // r8

  for ( i = 0; (unsigned int)i < *(_DWORD *)(HalpNumaConfig + 56); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * i) == a1 )
    {
      *a2 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
