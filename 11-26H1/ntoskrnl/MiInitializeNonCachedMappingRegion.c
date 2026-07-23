/*
 * XREFs of MiInitializeNonCachedMappingRegion @ 0x140D05144
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140D05208 (MiInitializePteInfo.c)
 */

__int64 MiInitializeNonCachedMappingRegion()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 PoolMm; // rax

  v0 = qword_140E37DA0;
  v1 = qword_140E37DA8;
  v2 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(6) )
    return 0LL;
  PoolMm = ExAllocatePoolMm(
             64LL,
             216LL * (unsigned int)(unsigned __int16)KeNumberNodes,
             1883466061,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  LOBYTE(v2) = (unsigned int)MiInitializePteInfo((unsigned int)&unk_140E34BC0, 6, 0, 5, v0, v1, 1, PoolMm) != 0;
  return v2;
}
