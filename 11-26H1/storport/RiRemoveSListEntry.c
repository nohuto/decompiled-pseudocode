/*
 * XREFs of RiRemoveSListEntry @ 0x14007489C
 * Callers:
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RiRemoveSListEntry(PSLIST_HEADER ListHead, struct _SLIST_ENTRY **a2)
{
  ULONG v4; // edi
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *v6; // rdx
  struct _SLIST_ENTRY *v7; // r8

  v4 = 0;
  result = ExpInterlockedFlushSList(ListHead);
  v6 = result;
  if ( result == (PSLIST_ENTRY)a2 )
    v6 = *a2;
  v7 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      result = v7->Next;
      ++v4;
      if ( (struct _SLIST_ENTRY **)v7->Next == a2 )
      {
        result = *a2;
        v7->Next = *a2;
      }
      if ( !result )
        break;
      v7 = result;
    }
    if ( v4 )
      return InterlockedPushListSList(ListHead, v6, v7, v4);
  }
  return result;
}
