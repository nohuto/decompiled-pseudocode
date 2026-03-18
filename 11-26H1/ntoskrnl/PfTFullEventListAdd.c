/*
 * XREFs of PfTFullEventListAdd @ 0x1404AC31C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1404AC2D0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140A05AD0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(__int64 a1, struct _SLIST_ENTRY *a2)
{
  union _SLIST_HEADER *v2; // rbx
  PSLIST_ENTRY result; // rax

  v2 = (union _SLIST_HEADER *)(a1 + 544);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 544), a2);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(v2->Alignment);
    if ( (unsigned int)result <= *(_DWORD *)(a1 + 560) )
      break;
    result = RtlpInterlockedPopEntrySList(v2);
    if ( !result )
      break;
    PfFbBufferListInsertInFree((PEX_RUNDOWN_REF)(a1 + 416), result, 1);
  }
  return result;
}
