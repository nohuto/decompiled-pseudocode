/*
 * XREFs of DhGetGenerator @ 0x1400E3180
 * Callers:
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 * Callees:
 *     <none>
 */

void *__fastcall DhGetGenerator(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_14015A480;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_14015A580;
  if ( v2 == 1 )
    return &unk_140159EF0;
  return 0LL;
}
