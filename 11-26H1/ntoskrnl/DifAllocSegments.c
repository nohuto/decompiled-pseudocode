/*
 * XREFs of DifAllocSegments @ 0x140650A10
 * Callers:
 *     DifInitSegContext @ 0x140650B6C (DifInitSegContext.c)
 *     DifPopSegment @ 0x140650C14 (DifPopSegment.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall DifAllocSegments(__int64 a1)
{
  unsigned int v2; // ebx
  _SLIST_ENTRY *ListEntry; // [rsp+38h] [rbp+10h]
  unsigned int ListEntrya; // [rsp+38h] [rbp+10h]
  _SLIST_ENTRY *v6; // [rsp+40h] [rbp+18h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 48)) > *(_DWORD *)(a1 + 88) )
    return 3221225659LL;
  ListEntry = (_SLIST_ENTRY *)ExAllocatePool2(0x240uLL);
  if ( !ListEntry )
    return 3221225626LL;
  v6 = ListEntry;
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1, ListEntry);
  v2 = 1;
  ListEntrya = 0x1000u / *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 44) += ListEntrya;
  if ( ListEntrya > 1 )
  {
    do
    {
      v6 = (_SLIST_ENTRY *)((char *)v6 + *(unsigned int *)(a1 + 40));
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v6);
      ++v2;
    }
    while ( v2 < ListEntrya );
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), 0, 1);
  return 0LL;
}
