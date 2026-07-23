/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800E9210
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _LIST_ENTRY *Flink; // r9
  signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 *v10; // rcx
  __int64 v11; // r8
  signed __int32 **v12; // rax
  _LIST_ENTRY *v13; // rdx
  _LIST_ENTRY *v14; // rcx
  __int64 v15; // r8
  signed __int32 **v16; // rax
  signed __int32 v17; // eax
  signed __int32 v18; // r8d
  signed __int32 v19; // ett
  _LIST_ENTRY *p_CleanupList; // r14
  _LIST_ENTRY *v21; // rsi
  _LIST_ENTRY *v22; // rsi
  _LIST_ENTRY *v23; // rax
  _RTL_SRWLOCK *v24; // rbx
  _LIST_ENTRY *v25; // rdx
  _LIST_ENTRY **Value; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *Blink; // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( CleanupGroup && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    RtlAcquireSRWLockExclusive(&CleanupGroup->CleanupLock);
    RtlAcquireSRWLockExclusive(&CleanupGroup->MemberLock);
    Flink = CleanupGroup->MemberList.Flink;
    while ( 1 )
    {
      if ( Flink == &CleanupGroup->MemberList )
      {
        RtlReleaseSRWLockExclusive(&CleanupGroup->MemberLock);
        p_CleanupList = &CleanupGroup->CleanupList;
        v21 = CleanupGroup->CleanupList.Flink;
        while ( v21 != p_CleanupList )
        {
          p_Blink = &v21[-3].Blink;
          v21 = v21->Flink;
          v28 = p_Blink[1][1].Flink;
          if ( v28 )
            ((void (__fastcall *)(_LIST_ENTRY **, _QWORD))v28)(p_Blink, CancelPendingCallbacks);
          if ( CancelPendingCallbacks )
          {
            Blink = p_Blink[1][1].Blink;
            if ( Blink )
              ((void (__fastcall *)(_LIST_ENTRY **))Blink)(p_Blink);
          }
        }
        v22 = p_CleanupList->Flink;
        while ( 1 )
        {
          v23 = v22;
          if ( v22 == p_CleanupList )
            break;
          v24 = (_RTL_SRWLOCK *)&v22[-3].Blink;
          v25 = v22->Flink;
          v22 = v25;
          Value = (_LIST_ENTRY **)v24[6].Value;
          if ( v25->Blink != v23 || *Value != v23 )
            __fastfail(3u);
          *Value = v25;
          v25->Blink = (_LIST_ENTRY *)Value;
          v24[6].Value = (unsigned __int64)v23;
          v24[5].Value = (unsigned __int64)v23;
          TppBarrierAdjust(v24 + 7, 0, 1);
          if ( v24[3].Value && (*(_DWORD *)&v24[21].0 & 0x10000) == 0 )
            ((void (__fastcall *)(unsigned __int64, PVOID))v24[3].Value)(v24[11].Value, CleanupParameter);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_RTL_SRWLOCK *))v24[1].Value)(v24);
        }
        RtlReleaseSRWLockExclusive(&CleanupGroup->CleanupLock);
        TppBarrierAdjust((_RTL_SRWLOCK *)&CleanupGroup->Barrier, 0, 1);
        return;
      }
      v7 = (signed __int32 *)&Flink[-3].Blink;
      Flink = Flink->Flink;
      _m_prefetchw(v7 + 42);
      v8 = v7[42];
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v7 + 42, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      v10 = v7 + 10;
      if ( (v8 & 0x30000) == 0 )
        break;
      v15 = *(_QWORD *)v10;
      v16 = (signed __int32 **)*((_QWORD *)v7 + 6);
      if ( *(signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 || *v16 != v10 )
LABEL_12:
        __fastfail(3u);
      *v16 = (signed __int32 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      _m_prefetchw(v7);
      v17 = *v7;
      while ( v17 )
      {
        v18 = v17;
        v19 = v17;
        v17 = _InterlockedCompareExchange(v7, v17 + 1, v17);
        if ( v19 == v17 )
          goto LABEL_18;
      }
      v18 = 0;
LABEL_18:
      v13 = (_LIST_ENTRY *)(v7 + 10);
      if ( v18 )
      {
LABEL_11:
        v14 = CleanupGroup->CleanupList.Blink;
        if ( v14->Flink != &CleanupGroup->CleanupList )
          goto LABEL_12;
        v13->Flink = &CleanupGroup->CleanupList;
        v13->Blink = v14;
        v14->Flink = v13;
        CleanupGroup->CleanupList.Blink = v13;
      }
      else
      {
        v13->Blink = v13;
        v13->Flink = v13;
      }
    }
    *((_QWORD *)v7 + 23) = retaddr;
    v11 = *(_QWORD *)v10;
    v12 = (signed __int32 **)*((_QWORD *)v7 + 6);
    if ( *(signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
      goto LABEL_12;
    *v12 = (signed __int32 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = (_LIST_ENTRY *)(v7 + 10);
    goto LABEL_11;
  }
  if ( !CleanupGroup )
    TppRaiseInvalidParameter();
}
