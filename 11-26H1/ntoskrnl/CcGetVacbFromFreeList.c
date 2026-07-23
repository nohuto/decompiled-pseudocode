/*
 * XREFs of CcGetVacbFromFreeList @ 0x14045A1D0
 * Callers:
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 *__fastcall CcGetVacbFromFreeList($04F135B480AA75E9F84DA8531FC1BADA *a1, char a2)
{
  __int64 *v2; // r8
  unsigned __int8 *p_AbWaitEntryCount; // rdx
  $04F135B480AA75E9F84DA8531FC1BADA *v4; // r9
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  _DWORD *v11; // rcx

  v2 = 0LL;
  if ( a2 )
  {
    p_AbWaitEntryCount = (unsigned __int8 *)&a1[616].AbWaitEntryCount;
    v4 = a1 + 624;
  }
  else
  {
    p_AbWaitEntryCount = &EmpParseLock.PriorityFloorCounts[8];
    v4 = &EmpParseLock.792;
  }
  v5 = *(__int64 **)p_AbWaitEntryCount;
  if ( *(unsigned __int8 **)p_AbWaitEntryCount != p_AbWaitEntryCount )
  {
    v6 = *v5;
    v2 = v5 - 2;
    ++CcNumberOfMappedVacbs;
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*(_DWORD *)&v4->AbWaitEntryCount )
      KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*(_DWORD *)&v4->AbWaitEntryCount;
    v8 = v2[4];
    v9 = ((__int64)v2 - v8 - 16) / 40;
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*v2 )
    {
      v10 = *(unsigned int *)v2[4];
      v11 = (_DWORD *)*((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + v10);
      if ( v11 )
      {
        ++v11[1];
        if ( *v11 != (_DWORD)v10 )
          KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
    }
    v2[1] = -1LL;
  }
  return v2;
}
