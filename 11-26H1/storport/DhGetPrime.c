/*
 * XREFs of DhGetPrime @ 0x1400E31E4
 * Callers:
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 * Callees:
 *     <none>
 */

void *__fastcall DhGetPrime(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_140159DF0;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_14015A300;
  if ( v2 == 1 )
    return &unk_14015A0F0;
  return 0LL;
}
