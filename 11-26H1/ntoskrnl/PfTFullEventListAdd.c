/*
 * XREFs of PfTFullEventListAdd @ 0x1404A59AC
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1404A5960 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1409F12C0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1404A5B6C (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(__int64 a1, _SLIST_ENTRY *a2)
{
  _SLIST_HEADER *v2; // rbx
  PSLIST_ENTRY result; // rax

  v2 = (_SLIST_HEADER *)(a1 + 544);
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
