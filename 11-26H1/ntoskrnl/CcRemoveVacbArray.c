/*
 * XREFs of CcRemoveVacbArray @ 0x1405B46B4
 * Callers:
 *     CcDereferenceVacbArray @ 0x140409730 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcRemoveVacbArray(unsigned int *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r9
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *result; // rax

  v1 = 0;
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x244uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *a1;
  if ( *((unsigned int **)EmpParseLock.SchedulerSharedSystemSlot + v3) != a1 )
    KeBugCheckEx(0x34u, 0x24AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = CcVacbArraysHighestUsedIndex;
  if ( (_DWORD)v3 == CcVacbArraysHighestUsedIndex )
  {
    while ( v4 )
    {
      if ( *((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + v4) )
      {
        CcVacbArraysHighestUsedIndex = v4;
        break;
      }
      --v4;
    }
  }
  v5 = *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24];
  *((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + v3) = 0LL;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x266uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] = v5 - 1;
  do
  {
    v6 = (__int64)&a1[10 * v1 + 8];
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (result = *(_QWORD **)&a1[10 * v1 + 10], *result != v6) )
      __fastfail(3u);
    ++v1;
    *result = v7;
    *(_QWORD *)(v7 + 8) = result;
  }
  while ( v1 < 0xCCC );
  *(_DWORD *)&EmpParseLock.AbWaitEntryCount -= 3276;
  return result;
}
