/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180017BF0
 * Callers:
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x180016260 (RtlpWakeConditionVariable.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  unsigned int v4; // esi
  PRTL_SRWLOCK v5; // r12
  unsigned __int64 Value; // rdi
  ULONG v8; // r13d
  void *UniqueThread; // rcx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rax
  char *SchedulerSharedDataSlot; // r8
  char *v16; // r14
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  signed __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  NTSTATUS v23; // ebx
  signed __int8 v24; // cf
  char *v25; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // rcx
  signed __int64 v31; // rtt
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  bool v36; // zf
  signed __int64 v37; // rax
  _RTL_SRWLOCK *v38; // r14
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rtt
  signed __int64 v43; // rax
  unsigned __int64 v44; // rcx
  char v45; // di
  _QWORD *v46; // r9
  unsigned __int64 v47; // r10
  PRTL_SRWLOCK v48; // r8
  signed __int64 v49; // rtt
  unsigned __int64 v50; // rtt
  _QWORD ThreadInformation[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v52[4]; // [rsp+30h] [rbp-30h] BYREF
  int v53; // [rsp+50h] [rbp-10h]
  signed __int32 v54; // [rsp+54h] [rbp-Ch] BYREF
  PRTL_SRWLOCK v55; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v53 = 0;
  v5 = SRWLock;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Value = ConditionVariable->Value;
  v8 = Flags & 1;
  v54 = 2;
  v52[2] = 0LL;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v10 = 2;
  if ( (Flags & 1) == 0 )
    v10 = 3;
  v52[3] = UniqueThread;
  v54 = v10;
  v55 = SRWLock;
  while ( 1 )
  {
    v11 = (unsigned __int64)v52 | Value & 0xF;
    v12 = v52;
    v52[0] = Value & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v12 = 0LL;
    v52[1] = v12;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v11 |= 8uLL;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v11, Value);
    if ( Value == v13 )
      break;
    Value = v13;
  }
  if ( (Flags & 1) != 0 )
  {
    RtlReleaseSRWLockShared(SRWLock);
  }
  else
  {
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
    if ( v14 != 1 )
    {
      do
      {
        v29 = 3LL;
        SRWLock = (PRTL_SRWLOCK)(v14 & 6);
        if ( SRWLock != (PRTL_SRWLOCK)2 )
          v29 = -1LL;
        v30 = v14 + v29;
        v31 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v30, v14);
      }
      while ( v31 != v14 );
      if ( SRWLock == (PRTL_SRWLOCK)2 )
      {
        ThreadInformation[0] = v5;
        while ( 1 )
        {
          while ( (v30 & 1) != 0 )
          {
            SRWLock = (PRTL_SRWLOCK)(v30 - 4);
            v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v30 - 4, v30);
            v36 = v30 == v40;
            v30 = v40;
            if ( v36 )
              goto LABEL_12;
          }
          v32 = v30 & 0xFFFFFFFFFFFFFFF0uLL;
          SRWLock = *(PRTL_SRWLOCK *)((v30 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !SRWLock )
          {
            do
            {
              v33 = v32;
              v32 = *(_QWORD *)v32;
              *(_QWORD *)(v32 + 16) = v33;
              SRWLock = *(PRTL_SRWLOCK *)(v32 + 8);
            }
            while ( !SRWLock );
            if ( v32 != (v30 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = SRWLock;
          }
          if ( (HIDWORD(SRWLock[4].Ptr) & 1) != 0 )
          {
            v34 = SRWLock[2].Value;
            if ( v34 )
              break;
          }
          v35 = 0LL;
          ThreadInformation[0] = 0LL;
          v37 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v30);
          v36 = v30 == v37;
          v30 = v37;
          if ( v36 )
            goto LABEL_68;
        }
        *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v34;
        SRWLock[2].Value = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
        v35 = ThreadInformation[0];
        do
        {
LABEL_68:
          v38 = (_RTL_SRWLOCK *)SRWLock[2].Value;
          v39 = SRWLock[3].Value;
          _interlockedbittestandset((volatile signed __int32 *)&SRWLock[4].Ptr + 1, 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&SRWLock[4].Ptr + 1, 1u) )
            ZwAlertThreadByThreadIdEx(v39, v35, v35);
          v35 = ThreadInformation[0];
          SRWLock = v38;
        }
        while ( v38 );
      }
    }
LABEL_12:
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( SRWLock = 0LL; (unsigned int)SRWLock < 8; SRWLock = (PRTL_SRWLOCK)(unsigned int)((_DWORD)SRWLock + 1) )
      {
        v16 = &SchedulerSharedDataSlot[8 * (unsigned int)SRWLock];
        if ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL) )
        {
          if ( v16 )
          {
            *v16 |= 2u;
            if ( v16[7] < 0 )
            {
              ThreadInformation[1] = 0LL;
              ThreadInformation[0] = (v16 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
            }
            *(_QWORD *)v16 = 0LL;
          }
          break;
        }
      }
    }
  }
  if ( (((unsigned __int8)Value ^ (unsigned __int8)v11) & 8) != 0 )
  {
    SRWLock = (PRTL_SRWLOCK)v11;
    while ( 1 )
    {
      v17 = (unsigned __int64)SRWLock & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = (_QWORD *)v17;
      if ( !*(_QWORD *)(v17 + 8) )
      {
        do
        {
          v19 = v18;
          v18 = (_QWORD *)*v18;
          v18[2] = v19;
        }
        while ( !v18[1] );
      }
      *(_QWORD *)(v17 + 8) = v18[1];
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v17, v11);
      SRWLock = (PRTL_SRWLOCK)v20;
      if ( v11 == v20 )
        break;
      v11 = v20;
      if ( (v20 & 7) != 0 )
      {
        RtlpWakeConditionVariable((volatile __int64 *)ConditionVariable, v20, 0);
        break;
      }
    }
  }
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v21 = __rdtsc();
      v22 = v21 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        SRWLock = 0LL;
        __asm { monitorx rax, rcx, rdx }
        if ( (v54 & 2) == 0 )
          break;
        v27 = v21;
        v28 = __rdtsc();
        SRWLock = (PRTL_SRWLOCK)((unsigned __int64)HIDWORD(v28) << 32);
        v21 = v28;
        if ( v28 < v27 || v28 >= v22 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( SRWLock = 0LL;
            (v54 & 2) != 0 && (_DWORD)SRWLock != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
            SRWLock = (PRTL_SRWLOCK)(unsigned int)((_DWORD)SRWLock + 1) )
      {
        _mm_pause();
      }
    }
  }
  v23 = 0;
  v24 = _interlockedbittestandreset(&v54, 1u);
  if ( !v24 )
  {
    _InterlockedOr(&v54, 4u);
LABEL_34:
    if ( (v54 & 4) != 0 )
      goto LABEL_35;
    goto LABEL_76;
  }
  v23 = NtWaitForAlertByThreadId(v5, Timeout);
  if ( v23 != 258 )
    goto LABEL_34;
LABEL_76:
  v41 = ConditionVariable->Value;
  do
  {
    while ( 1 )
    {
      if ( !v41 || (v41 & 7) == 7 )
        goto LABEL_100;
      if ( (v41 & 8) == 0 )
        break;
      v50 = v41;
      v41 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v41 | 7, v41);
      if ( v50 == v41 )
        goto LABEL_100;
    }
    SRWLock = (PRTL_SRWLOCK)(v41 + 8);
    v42 = v41;
    v41 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v41 + 8, v41);
  }
  while ( v42 != v41 );
  v43 = (signed __int64)SRWLock;
  v44 = (unsigned __int64)SRWLock & 0xFFFFFFFFFFFFFFF0uLL;
  v45 = 0;
  while ( 2 )
  {
    v46 = 0LL;
    v47 = v44;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v44 )
        {
          if ( v47 )
            *(_QWORD *)(v47 + 8) = v46;
          if ( !v45 )
            _InterlockedOr(&v54, 2u);
          RtlpWakeConditionVariable((volatile __int64 *)ConditionVariable, (signed __int64)SRWLock, 0);
          if ( v45 )
            goto LABEL_96;
          v24 = _interlockedbittestandreset(&v54, 1u);
          if ( !v24 )
            goto LABEL_96;
          do
LABEL_100:
            NtWaitForAlertByThreadId(v5, 0LL);
          while ( (v54 & 4) == 0 );
LABEL_35:
          v23 = 0;
          goto LABEL_36;
        }
        v48 = *(PRTL_SRWLOCK *)v44;
        if ( (_QWORD *)v44 == v52 )
          break;
        *(_QWORD *)(v44 + 16) = v46;
        v46 = (_QWORD *)v44;
        v44 = (unsigned __int64)v48;
      }
      if ( !v46 )
        break;
      _interlockedbittestandset((volatile signed __int32 *)(v44 + 36), 2u);
      *v46 = v48;
      v45 = 1;
      if ( v48 )
        v48[2].Value = (unsigned __int64)v46;
      v44 = (unsigned __int64)v48;
    }
    SRWLock = *(PRTL_SRWLOCK *)v44;
    if ( v48 )
      SRWLock = (PRTL_SRWLOCK)(v43 ^ (v43 ^ (unsigned __int64)v48) & 0xFFFFFFFFFFFFFFF0uLL);
    v49 = v43;
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, (signed __int64)SRWLock, v43);
    if ( v49 != v43 )
    {
      SRWLock = (PRTL_SRWLOCK)v43;
      goto LABEL_99;
    }
    _interlockedbittestandset((volatile signed __int32 *)(v44 + 36), 2u);
    v45 = 1;
    v43 = (signed __int64)SRWLock;
    if ( v48 )
    {
LABEL_99:
      v44 = v43 & 0xFFFFFFFFFFFFFFF0uLL;
      continue;
    }
    break;
  }
LABEL_96:
  if ( v23 != 258 )
    goto LABEL_35;
LABEL_36:
  if ( v8 )
  {
    RtlAcquireSRWLockShared(v5);
  }
  else
  {
    v25 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v25 )
    {
      while ( v4 < 8 )
      {
        SRWLock = (PRTL_SRWLOCK)&v25[8 * v4];
        if ( !SRWLock->Value )
        {
          SRWLock->Value = (unsigned __int64)v5;
          break;
        }
        ++v4;
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v5, (unsigned __int64)SRWLock);
  }
  return v23;
}
