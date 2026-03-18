/*
 * XREFs of CcSetVacbInFreeList @ 0x1402E28F0
 * Callers:
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcInitializePartitionVacbs @ 0x1405B2EE8 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x1405B2FF8 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     CcSetVacbIntoList @ 0x14047DB44 (CcSetVacbIntoList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetVacbInFreeList(__int64 a1, struct _SINGLE_LIST_ENTRY *a2, __int64 a3)
{
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v4; // rcx
  struct _SINGLE_LIST_ENTRY *v5; // rcx
  int Next_high; // eax
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r10

  --CcNumberOfMappedVacbs;
  if ( (_BYTE)a3 )
  {
    result = CcSetVacbIntoList(a2, a1 + 1232, a3);
    *(_QWORD *)(v8 + 8) = 0LL;
    ++*(_DWORD *)(v9 + 1248);
  }
  else
  {
    Next = EmpParseLock.PropagateBoostsEntry.Next;
    v4 = a2 + 2;
    if ( EmpParseLock.PropagateBoostsEntry.Next[1].Next != &EmpParseLock.PropagateBoostsEntry )
      __fastfail(3u);
    a2[3].Next = &EmpParseLock.PropagateBoostsEntry;
    v4->Next = Next;
    Next[1].Next = v4;
    EmpParseLock.PropagateBoostsEntry.Next = a2 + 2;
    v5 = a2[4].Next;
    a2[1].Next = 0LL;
    Next_high = HIDWORD(v5->Next);
    if ( !Next_high )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    result = (unsigned int)(Next_high - 1);
    HIDWORD(v5->Next) = result;
    ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[4];
  }
  return result;
}
