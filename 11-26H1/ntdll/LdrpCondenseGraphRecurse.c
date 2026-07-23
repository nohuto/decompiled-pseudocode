/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x180118FA0
 * Callers:
 *     LdrpCondenseGraph @ 0x180118F64 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 *     LdrpMergeNodes @ 0x18011927C (LdrpMergeNodes.c)
 */

__int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  int v4; // eax
  _QWORD *v7; // rdi
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 result; // rax
  _QWORD **v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  _QWORD **v15; // r9
  _QWORD *v16; // r8
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v22; // rbx
  _QWORD *v23; // r8
  _QWORD *v24; // rbp
  _QWORD *v25; // rdi
  _QWORD *v26; // [rsp+50h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v9 = v7[1];
      if ( *(int *)(v9 + 56) <= 5 )
        break;
LABEL_10:
      if ( v7 == *(_QWORD **)(a1 + 40) )
        goto LABEL_11;
    }
    v10 = *(_DWORD *)(v9 + 72);
    if ( v10 )
    {
      if ( !*(_QWORD *)(v9 + 64) )
      {
LABEL_8:
        if ( *(_DWORD *)(v9 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v7[1], a2, a3);
      v10 = *(_DWORD *)(v9 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v10 )
      *(_DWORD *)(a1 + 32) = v10;
    goto LABEL_8;
  }
LABEL_11:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v12 = (_QWORD **)*a3;
    v13 = (_QWORD *)*a3;
    if ( *a3 )
    {
      v13 = *v12;
      *a3 = *v12;
    }
    v14 = 0LL;
    if ( v3 != v12 )
    {
      do
      {
        *v12 = v14;
        v14 = v12;
        v15 = v12;
        v16 = v13;
        if ( v13 )
        {
          v16 = (_QWORD *)*v13;
          *a3 = *v13;
        }
        v12 = (_QWORD **)v13;
        v13 = v16;
      }
      while ( v3 != v12 );
      v26 = v14;
      if ( v15 )
      {
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v18 = 0LL;
          v19 = SchedulerSharedDataSlot;
          while ( *v19 )
          {
            v18 = (unsigned int)(v18 + 1);
            ++v19;
            if ( (unsigned int)v18 >= 8 )
              goto LABEL_26;
          }
          v20 = &SchedulerSharedDataSlot[v18];
          if ( v20 )
            *v20 = &LdrpModuleDatatableLock;
        }
LABEL_26:
        if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(
            (volatile signed __int64 *)&LdrpModuleDatatableLock,
            (unsigned __int64)SchedulerSharedDataSlot);
        LdrpMergeNodes(a1, &v26);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v22 = v26;
        while ( v22 )
        {
          v23 = (_QWORD *)*(v22 - 6);
          v24 = v22;
          v22 = (_QWORD *)*v22;
          if ( v23 )
          {
            do
            {
              v25 = (_QWORD *)*v23;
              RtlFreeHeap_0(LdrpHeap, 0, v23);
              v23 = v25;
            }
            while ( v25 );
          }
          RtlFreeHeap_0(LdrpHeap, 0, v24 - 8);
        }
      }
    }
    *v3 = 0LL;
    result = *(unsigned int *)(a1 + 56);
    if ( (_DWORD)result == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
