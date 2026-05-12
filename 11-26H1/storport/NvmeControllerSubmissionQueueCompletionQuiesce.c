/*
 * XREFs of NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400FB2AC
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeControllerSubmissionQueueCompletionQuiesce(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  int v4; // ebp
  char v5; // di
  int v6; // edi

  v2 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 22); ++i )
  {
    v4 = 0;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 728) + 192LL * i + 152) )
    {
      StorDelayExecution(0x3E8u);
      if ( (unsigned int)++v4 >= 0x7D0 )
      {
        v5 = i + 1;
        goto LABEL_12;
      }
    }
  }
  v6 = 0;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 712) + 152LL) )
  {
    StorDelayExecution(0x3E8u);
    if ( (unsigned int)++v6 >= 0x7D0 )
    {
      v5 = 0;
LABEL_12:
      v2 = -1073741643;
      StorEtwNvmeControllerEvent(
        a1,
        1,
        3LL,
        (__int64)L"Controller submission queue completion quiesce timeout",
        L"QueueId",
        v5,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      return v2;
    }
  }
  return v2;
}
