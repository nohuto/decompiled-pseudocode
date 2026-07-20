/*
 * XREFs of SmpSelectNodeNumber @ 0x140003810
 * Callers:
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 * Callees:
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 */

ULONG SmpSelectNodeNumber()
{
  signed __int32 v0; // ebx
  unsigned __int32 v1; // edi
  ULONG i; // esi
  signed __int32 v3; // ecx
  unsigned __int32 v4; // eax
  _BYTE SystemInformation[1048]; // [rsp+20h] [rbp-418h] BYREF

  memset_0(SystemInformation, 0, 0x408uLL);
  v0 = SmpActiveProcessorCount;
  v1 = MEMORY[0x7FFE03C0];
  if ( (unsigned int)SmpActiveProcessorCount < MEMORY[0x7FFE03C0]
    && NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL) >= 0 )
  {
    for ( i = 0; i < SmpMaximumNodeCount; ++i )
    {
      if ( *(_QWORD *)&SystemInformation[16 * i + 8] && !RtlTestBit(&SmpNodeBitmap, i) )
        RtlInterlockedSetBitRun(&SmpNodeBitmap, i, 1LL);
    }
    do
    {
      v3 = v0;
      v4 = _InterlockedCompareExchange(&SmpActiveProcessorCount, v1, v0);
      v0 = v4;
    }
    while ( v4 != v3 && v4 < v1 );
  }
  return RtlFindSetBits(
           &SmpNodeBitmap,
           1u,
           _InterlockedExchangeAdd(&SmpCurrentNodeCount, 1u) % (unsigned int)SmpMaximumNodeCount);
}
