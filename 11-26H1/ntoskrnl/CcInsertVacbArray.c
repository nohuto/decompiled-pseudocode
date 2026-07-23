/*
 * XREFs of CcInsertVacbArray @ 0x1404CAC3C
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcInsertVacbArray(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  bool v4; // cc
  __int64 v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // r10

  if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] > 0x500u )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  for ( i = 0LL; (unsigned int)i < 0x500; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + i) )
    {
      v4 = (unsigned int)i <= CcVacbArraysHighestUsedIndex;
      *((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + i) = a2;
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
    result = &a2[10 * v5 + 8];
    if ( *(_QWORD *)&a2[10 * v5 + 4] )
    {
      v8 = *(_QWORD **)(a1 + 1240);
      if ( *v8 != a1 + 1232 )
LABEL_10:
        __fastfail(3u);
      *result = a1 + 1232;
      *(_QWORD *)&a2[10 * v5 + 10] = v8;
      *v8 = result;
      *(_QWORD *)(a1 + 1240) = result;
      ++*(_DWORD *)(a1 + 1248);
    }
    else
    {
      v7 = *(_QWORD **)&EmpParseLock.PriorityFloorCounts[16];
      if ( **(struct _KTHREAD ***)&EmpParseLock.PriorityFloorCounts[16] != (struct _KTHREAD *)&EmpParseLock.PriorityFloorCounts[8] )
        goto LABEL_10;
      *result = &EmpParseLock.PriorityFloorCounts[8];
      *(_QWORD *)&a2[10 * v5 + 10] = v7;
      *v7 = result;
      ++*(_DWORD *)&EmpParseLock.AbWaitEntryCount;
      *(_QWORD *)&EmpParseLock.PriorityFloorCounts[16] = &a2[10 * v5 + 8];
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0xCCC );
  return result;
}
