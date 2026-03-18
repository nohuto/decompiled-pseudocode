/*
 * XREFs of CcInsertVacbArray @ 0x1404D120C
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1405B2EE8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

struct _SINGLE_LIST_ENTRY *__fastcall CcInsertVacbArray(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  bool v4; // cc
  __int64 v5; // rcx
  struct _SINGLE_LIST_ENTRY *result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r9
  struct _SINGLE_LIST_ENTRY **v8; // r10

  if ( LODWORD(EmpParseLock.MutantListHead.Blink) > 0x500 )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  for ( i = 0LL; (unsigned int)i < 0x500; i = (unsigned int)(i + 1) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8 * i) )
    {
      v4 = (unsigned int)i <= CcVacbArraysHighestUsedIndex;
      *(_QWORD *)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8 * i) = a2;
      *a2 = i;
      if ( !v4 )
        CcVacbArraysHighestUsedIndex = i;
      goto LABEL_7;
    }
  }
  if ( (_DWORD)i == 1280 )
    KeBugCheckEx(0x34u, 0x207uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_7:
  v5 = 0LL;
  do
  {
    result = (struct _SINGLE_LIST_ENTRY *)&a2[10 * v5 + 8];
    if ( *(_QWORD *)&a2[10 * v5 + 4] )
    {
      v8 = *(struct _SINGLE_LIST_ENTRY ***)(a1 + 1240);
      if ( *v8 != (struct _SINGLE_LIST_ENTRY *)(a1 + 1232) )
LABEL_10:
        __fastfail(3u);
      result->Next = (struct _SINGLE_LIST_ENTRY *)(a1 + 1232);
      *(_QWORD *)&a2[10 * v5 + 10] = v8;
      *v8 = result;
      *(_QWORD *)(a1 + 1240) = result;
      ++*(_DWORD *)(a1 + 1248);
    }
    else
    {
      Next = EmpParseLock.IoSelfBoostsEntry.Next;
      if ( EmpParseLock.IoSelfBoostsEntry.Next->Next != &EmpParseLock.PropagateBoostsEntry )
        goto LABEL_10;
      result->Next = &EmpParseLock.PropagateBoostsEntry;
      *(_QWORD *)&a2[10 * v5 + 10] = Next;
      Next->Next = result;
      ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[4];
      EmpParseLock.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)&a2[10 * v5 + 8];
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0xCCC );
  return result;
}
