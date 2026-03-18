/*
 * XREFs of EtwpCovSampCaptureQueueRebalance @ 0x1402C1874
 * Callers:
 *     EtwpCovSampSampleBufferGet @ 0x1402BFF1C (EtwpCovSampSampleBufferGet.c)
 *     EtwpCovSampLookasidePop @ 0x1402C1E48 (EtwpCovSampLookasidePop.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueRebalance(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1068);
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - result) >= 0x40 )
  {
    *(_DWORD *)(a1 + 1068) = MEMORY[0xFFFFF78000000320];
    return KiInsertQueueDpc(a1 + 976, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
