/*
 * XREFs of NVMeCompletionQueuesSubmissionQueuesInit @ 0x140011320
 * Callers:
 *     NVMeCompletionQueueInit @ 0x1400063A0 (NVMeCompletionQueueInit.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001639C (NVMeCleanUpSqCqMapping.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall NVMeCompletionQueuesSubmissionQueuesInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // cx
  unsigned __int16 v6; // ax
  int v7; // eax
  int v8; // ecx

  if ( a4 )
    *(_QWORD *)(a2 + 192) = a4;
  HIBYTE(v5) = 0;
  *(_QWORD *)(a2 + 180) = 0LL;
  if ( *(_WORD *)(a1 + 332) )
  {
    LOBYTE(v5) = *(_QWORD *)(a2 + 192) != 0LL;
    *(_WORD *)(a2 + 200) = v5;
    v6 = *(_WORD *)(a1 + 330);
    if ( v6 >= *(_WORD *)(a1 + 234) )
      v6 = *(_WORD *)(a1 + 234);
    LOWORD(v7) = (v6 - 1) / *(unsigned __int16 *)(a1 + 332) + 1;
    *(_WORD *)(a2 + 202) = v7;
  }
  else
  {
    LOWORD(v7) = *(_WORD *)(a2 + 202);
  }
  if ( *(_WORD *)(a2 + 200) )
    v8 = *(_DWORD *)(a1 + 4088);
  else
    v8 = -1;
  *(_DWORD *)(a2 + 204) = v8;
  if ( (_WORD)v7 )
  {
    v7 = *(_DWORD *)(a1 + 4092);
    *(_DWORD *)(a2 + 208) = v7;
  }
  else
  {
    *(_DWORD *)(a2 + 208) = -1;
  }
  return v7;
}
