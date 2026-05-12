/*
 * XREFs of NvmeControllerQueuesReInit @ 0x1400F96F4
 * Callers:
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeCompletionQueueReInit @ 0x1400F0294 (NvmeCompletionQueueReInit.c)
 *     NvmeSubmissionQueueReInit @ 0x1400FFD50 (NvmeSubmissionQueueReInit.c)
 */

void *__fastcall NvmeControllerQueuesReInit(__int64 a1)
{
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // esi

  NvmeSubmissionQueueReInit(a1, *(_QWORD *)(a1 + 712));
  result = NvmeCompletionQueueReInit(a1, *(_QWORD *)(a1 + 856));
  v3 = 0;
  v4 = 0;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
    {
      NvmeSubmissionQueueReInit(a1, *(_QWORD *)(a1 + 728) + 192LL * v4);
      result = (void *)*(unsigned __int16 *)(a1 + 22);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  if ( *(_WORD *)(a1 + 26) )
  {
    do
    {
      NvmeCompletionQueueReInit(a1, *(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7));
      result = (void *)*(unsigned __int16 *)(a1 + 26);
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
