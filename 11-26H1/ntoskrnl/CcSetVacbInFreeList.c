/*
 * XREFs of CcSetVacbInFreeList @ 0x1402C49B0
 * Callers:
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x1405B5808 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     CcSetVacbIntoList @ 0x1404774B4 (CcSetVacbIntoList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetVacbInFreeList(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
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
    v3 = *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8];
    v4 = a2 + 2;
    if ( *(struct _KTHREAD **)(*(_QWORD *)&EmpParseLock.PriorityFloorCounts[8] + 8LL) != (struct _KTHREAD *)&EmpParseLock.PriorityFloorCounts[8] )
      __fastfail(3u);
    a2[3] = &EmpParseLock.PriorityFloorCounts[8];
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8] = a2 + 2;
    v5 = a2[4];
    a2[1] = 0LL;
    v6 = *(_DWORD *)(v5 + 4);
    if ( !v6 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    result = (unsigned int)(v6 - 1);
    *(_DWORD *)(v5 + 4) = result;
    ++*(_DWORD *)&EmpParseLock.AbWaitEntryCount;
  }
  return result;
}
