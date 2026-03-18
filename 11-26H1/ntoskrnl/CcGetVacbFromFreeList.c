/*
 * XREFs of CcGetVacbFromFreeList @ 0x140461210
 * Callers:
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcInitializePartitionVacbs @ 0x1405B2EE8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

struct _SINGLE_LIST_ENTRY *__fastcall CcGetVacbFromFreeList(__int64 a1, char a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  unsigned __int8 *v4; // r9
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v6; // rdx
  struct _SINGLE_LIST_ENTRY *v7; // rcx
  struct _SINGLE_LIST_ENTRY *v8; // r9
  __int64 v9; // rdx
  struct _SINGLE_LIST_ENTRY *v10; // rdx
  _DWORD *v11; // rcx

  v2 = 0LL;
  if ( a2 )
  {
    p_PropagateBoostsEntry = (_SINGLE_LIST_ENTRY *)(a1 + 1232);
    v4 = (unsigned __int8 *)(a1 + 1248);
  }
  else
  {
    p_PropagateBoostsEntry = &EmpParseLock.PropagateBoostsEntry;
    v4 = &EmpParseLock.PriorityFloorCounts[4];
  }
  Next = p_PropagateBoostsEntry->Next;
  if ( p_PropagateBoostsEntry->Next != p_PropagateBoostsEntry )
  {
    v6 = Next->Next;
    v2 = Next - 2;
    ++CcNumberOfMappedVacbs;
    if ( v6[1].Next != Next || (v7 = Next[1].Next, v7->Next != Next) )
      __fastfail(3u);
    v7->Next = v6;
    v6[1].Next = v7;
    if ( !*(_DWORD *)v4 )
      KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*(_DWORD *)v4;
    v8 = v2[4].Next;
    v9 = ((char *)v2 - (char *)v8 - 16) / 40;
    if ( (unsigned int)v9 > LODWORD(v8[1].Next) )
      LODWORD(v8[1].Next) = v9;
    if ( !v2->Next )
    {
      v10 = v2[4].Next->Next;
      v11 = *(_DWORD **)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8LL * (_QWORD)v10);
      if ( v11 )
      {
        ++v11[1];
        if ( *v11 != (_DWORD)v10 )
          KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
    }
    v2[1].Next = (struct _SINGLE_LIST_ENTRY *)-1LL;
  }
  return v2;
}
