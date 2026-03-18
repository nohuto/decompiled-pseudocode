/*
 * XREFs of NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x140011280
 * Callers:
 *     NVMeCompletionQueueInit @ 0x1400063A0 (NVMeCompletionQueueInit.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001639C (NVMeCleanUpSqCqMapping.c)
 * Callees:
 *     GetMaxDedicatedSqPerCqCount @ 0x140014620 (GetMaxDedicatedSqPerCqCount.c)
 */

__int64 __fastcall NVMeCompletionQueuesDedicatedSubmissionQueuesInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int16 v6; // cx
  __int64 result; // rax
  int v8; // ecx

  v4 = a2;
  v5 = a1;
  if ( a4 )
    *(_QWORD *)(a2 + 224) = a4;
  HIBYTE(v6) = 0;
  *(_QWORD *)(a2 + 212) = 0LL;
  if ( *(_WORD *)(v5 + 332) )
  {
    LOBYTE(v6) = *(_QWORD *)(a2 + 224) != 0LL;
    *(_WORD *)(a2 + 232) = v6;
    result = GetMaxDedicatedSqPerCqCount(v5);
    *(_WORD *)(v4 + 234) = result;
  }
  else
  {
    result = *(unsigned __int16 *)(a2 + 234);
  }
  if ( *(_WORD *)(v4 + 232) )
    v8 = *(_DWORD *)(v5 + 4096);
  else
    v8 = -1;
  *(_DWORD *)(v4 + 236) = v8;
  if ( (_WORD)result )
  {
    result = *(unsigned int *)(v5 + 4100);
    *(_DWORD *)(v4 + 240) = result;
  }
  else
  {
    *(_DWORD *)(v4 + 240) = -1;
  }
  return result;
}
