/*
 * XREFs of NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564
 * Callers:
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400D38F4 (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeControllerSubmissionQueueQuiesce(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 i; // rdi
  int v4; // ebp
  char v5; // di
  int v6; // edi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
  {
    v4 = 0;
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 728) + 192 * i + 128) )
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
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 712) + 128LL) )
  {
    StorDelayExecution(0x3E8u);
    if ( (unsigned int)++v6 >= 0x7D0 )
    {
      v5 = 0;
LABEL_12:
      v1 = -1073741643;
      StorEtwNvmeControllerEvent(
        a1,
        1,
        3LL,
        (__int64)L"Controller submission queue quiesce timeout",
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
      *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 48LL) |= 2u;
      return v1;
    }
  }
  return v1;
}
