/*
 * XREFs of KiValidateCpuSetMasks @ 0x14045BE5C
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x14045BD60 (KeSetSelectedCpuSetsThread.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     KeSetTagCpuSets @ 0x1405F68DC (KeSetTagCpuSets.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KiInitializeReservedCpuSets @ 0x140CD18F0 (KiInitializeReservedCpuSets.c)
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
    if ( (~*(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * i + 4) & *(_QWORD *)(a1 + 8 * i)) != 0LL )
      return 3221225903LL;
  }
  return 0LL;
}
