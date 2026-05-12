/*
 * XREFs of NvmeControllerCompletionDpcQuiesce @ 0x1400F1914
 * Callers:
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400D38F4 (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 */

__int64 __fastcall NvmeControllerCompletionDpcQuiesce(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  int v4; // ebp
  int v5; // edi

  v1 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 26); ++i )
  {
    v4 = 0;
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 864) + ((unsigned __int64)i << 7) + 44) )
    {
      StorDelayExecution(0x3E8u);
      if ( (unsigned int)++v4 >= 0x7D0 )
        goto LABEL_11;
    }
  }
  v5 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 856) + 44LL) )
  {
    StorDelayExecution(0x3E8u);
    if ( (unsigned int)++v5 >= 0x7D0 )
    {
LABEL_11:
      v1 = -1073741643;
      *(_DWORD *)(*(_QWORD *)(a1 + 1288) + 48LL) |= 4u;
      return v1;
    }
  }
  return v1;
}
