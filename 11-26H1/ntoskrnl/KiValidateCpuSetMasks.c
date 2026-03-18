/*
 * XREFs of KiValidateCpuSetMasks @ 0x140462E9C
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x140462DA0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetCpuSetsProcess @ 0x14052D934 (KeSetCpuSetsProcess.c)
 *     KeSetTagCpuSets @ 0x1405F3F1C (KeSetTagCpuSets.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F4548 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiInitializeReservedCpuSets @ 0x140CCB790 (KiInitializeReservedCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiValidateCpuSetMasks(__int64 a1, unsigned int a2)
{
  __int64 i; // r8

  if ( a2 > (unsigned __int16)KiMaximumGroups )
    return 3221225903LL;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( (~*(_QWORD *)((char *)&stru_140FC01F0.116 + 8 * i + 4) & *(_QWORD *)(a1 + 8 * i)) != 0LL )
      return 3221225903LL;
  }
  return 0LL;
}
