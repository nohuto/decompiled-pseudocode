/*
 * XREFs of NvmeControllerIoQueuesCreation @ 0x1400F6E10
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F69A4 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F7BA8 (NvmeControllerIoSubmissionQueueCreate.c)
 */

__int64 __fastcall NvmeControllerIoQueuesCreation(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = NvmeControllerIoCompletionQueueCreate(a1, a2);
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = a2;
    result = NvmeControllerIoSubmissionQueueCreate(a1, v5);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 1192) = 22;
  }
  else
  {
    *(_DWORD *)(a1 + 1192) = 23;
  }
  return result;
}
