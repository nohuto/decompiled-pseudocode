/*
 * XREFs of PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmHeteroDetectHgsCores @ 0x140516AD8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopHeteroCapabilityDeepCopy @ 0x140B76650 (PopHeteroCapabilityDeepCopy.c)
 */

char PpmHeteroReinitializeWpsProcessors()
{
  char v0; // si
  const void **Object; // rbp
  int v2; // eax
  char *v3; // rcx
  size_t v4; // rdi
  SIZE_T v5; // r14

  v0 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    Object = (const void **)stru_140FC11F0.WaitBlock[1].Object;
    if ( stru_140FC11F0.WaitBlock[1].Object )
    {
      v2 = PpmHeteroWorkloadClasses;
      v3 = (char *)stru_140FC11F0.WaitBlock[1].Object + 48;
      *((_DWORD *)stru_140FC11F0.WaitBlock[1].Object + 1) = PpmHeteroWorkloadClasses;
      v4 = 4LL * (unsigned int)(*(_DWORD *)Object * v2);
      memset_0(v3, 0, v4);
      PpmHeteroUpdateHgsConfiguration((__int64)Object);
      PpmHeteroDetectHgsCores((__int64)Object);
      v5 = 2LL * *((unsigned int *)Object + 1);
      if ( RtlCompareMemory(Object + 6, (const void *)(PpmHeteroCapability + 48), v4) != v4
        || RtlCompareMemory(Object[3], *(const void **)(PpmHeteroCapability + 24), v5) != v5 )
      {
        v0 = 1;
        PopHeteroCapabilityDeepCopy(PpmHeteroCapability, Object);
      }
    }
  }
  return v0;
}
