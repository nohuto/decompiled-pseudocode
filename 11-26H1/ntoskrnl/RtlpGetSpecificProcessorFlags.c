/*
 * XREFs of RtlpGetSpecificProcessorFlags @ 0x140C052A4
 * Callers:
 *     RtlDetectProcessorFeatures @ 0x140C048AC (RtlDetectProcessorFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetSpecificProcessorFlags(unsigned __int8 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned int i; // r10d

  v2 = 0;
  for ( i = 0; *((_DWORD *)&KiCpuTable[1] + 5 * i) != 19; ++i )
  {
    if ( *((_DWORD *)KiCpuTable + 5 * i) == a1 && *((_DWORD *)KiCpuTable + 5 * i + 1) == a2 )
      return *((unsigned int *)&KiCpuTable[2] + 5 * i);
  }
  return v2;
}
