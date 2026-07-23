/*
 * XREFs of TppBarrierAdjust @ 0x180018390
 * Callers:
 *     TppWorkWait @ 0x1800166F0 (TppWorkWait.c)
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x180016FA0 (TppExecuteWaitCallback.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TppWorkCancelPendingCallbacks @ 0x18003E6E0 (TppWorkCancelPendingCallbacks.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     TpWaitForTimer @ 0x180088570 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 *     TpWaitForAlpcCompletion @ 0x1800C6F30 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x1800C7010 (TpWaitForJobNotification.c)
 *     TpStartAsyncIoOperation @ 0x1800D60E0 (TpStartAsyncIoOperation.c)
 *     TpCancelAsyncIoOperation @ 0x1800DDAF0 (TpCancelAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800E9090 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800E9210 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForIoCompletion @ 0x1800EC860 (TpWaitForIoCompletion.c)
 *     TppWorkUnposted @ 0x180110350 (TppWorkUnposted.c)
 *     TppIopCancelPendingCallbacks @ 0x180158F90 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  __int64 v3; // r12
  char v4; // r15
  char v6; // r14
  signed __int64 Value; // rdi
  unsigned __int64 v9; // rdx
  _RTL_SRWLOCK *v10; // rbp
  signed __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rbp
  unsigned int k; // ecx
  char *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  volatile signed __int32 *v18; // r8
  void *v19; // r9
  unsigned int m; // ecx
  bool v21; // zf
  struct _TEB *v22; // rax
  unsigned __int64 v23; // rbx
  _RTL_SRWLOCK *v24; // rsi
  signed __int64 v25; // rax
  char *v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rsi
  char *v29; // rdi
  unsigned __int64 v30; // rdi
  _RTL_SRWLOCK *v31; // rbp
  signed __int64 v32; // rax
  char *SchedulerSharedDataSlot; // rdx
  __int64 v34; // rbp
  unsigned int j; // ecx
  char *v36; // rbx
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  __int64 v39; // rcx
  signed __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rtt
  _RTL_SRWLOCK *v43; // rbp
  unsigned __int64 v44; // r8
  _QWORD *v45; // r9
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rax
  signed __int64 v49; // rax
  __int64 v50; // rcx
  signed __int64 v51; // rdx
  signed __int64 v52; // rcx
  signed __int64 v53; // rtt
  _RTL_SRWLOCK *v54; // r14
  unsigned __int64 v55; // r8
  _QWORD *v56; // r9
  __int64 v57; // rdx
  _QWORD *v58; // rax
  __int64 v59; // rax
  signed __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rcx
  signed __int64 v65; // rax
  signed __int64 v66; // rax
  signed __int64 v67; // r8
  signed __int64 v68; // rtt
  _QWORD *v69; // rcx
  __int64 i; // rdx
  __int64 v71; // r8
  signed __int64 v72; // rdx
  __int64 v73; // rcx
  signed __int64 v74; // rcx
  signed __int64 v75; // rtt
  _RTL_SRWLOCK *v76; // r15
  _QWORD *v77; // r8
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rax
  signed __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rcx
  signed __int64 v84; // rax
  _QWORD ThreadInformation[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v87; // [rsp+30h] [rbp-48h] BYREF
  __int64 v88; // [rsp+38h] [rbp-40h]
  __int128 v89; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  v4 = 0;
  v89 = 0LL;
  v6 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  do
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !v6 )
    {
      if ( !v4 )
        goto LABEL_15;
      v31 = a1 + 1;
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[1], 0LL, 17LL);
      if ( v32 == 17 )
        goto LABEL_41;
      if ( (v32 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      while ( (v32 & 2) == 0 )
      {
        v67 = 0LL;
        if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v67 = v32 - 16;
        v68 = v32;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v31, v67, v32);
        if ( v68 == v32 )
          goto LABEL_41;
      }
      if ( (v32 & 8) != 0 )
      {
        v69 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( i = *(_QWORD *)((v32 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v69[1] )
          v69 = (_QWORD *)*v69;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        {
LABEL_41:
          SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
          if ( SchedulerSharedDataSlot )
          {
            v34 = (unsigned __int64)v31 & 0x7FFFFFFFFFFFFFFCLL;
            for ( j = 0; j < 8; ++j )
            {
              v36 = &SchedulerSharedDataSlot[8 * j];
              if ( (*(_QWORD *)v36 & 0x7FFFFFFFFFFFFFFCLL) == v34 )
              {
                if ( v36 )
                {
                  *v36 |= 2u;
                  if ( v36[7] < 0 )
                  {
                    v88 = 0LL;
                    v87 = (v36 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, &v87, 0x10u);
                  }
                  *(_QWORD *)v36 = 0LL;
                }
                break;
              }
            }
          }
          v4 = 0;
          goto LABEL_14;
        }
        v71 = -9LL;
      }
      else
      {
        v71 = -1LL;
      }
      do
      {
        v72 = v32 & 6;
        if ( v72 == 2 )
          v73 = v71 + 4;
        else
          v73 = v71;
        v74 = v32 + v73;
        v75 = v32;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v31, v74, v32);
      }
      while ( v75 != v32 );
      if ( v72 == 2 )
      {
        v76 = a1 + 1;
        while ( 1 )
        {
          while ( (v74 & 1) != 0 )
          {
            v84 = _InterlockedCompareExchange64((volatile signed __int64 *)v31, v74 - 4, v74);
            v21 = v74 == v84;
            v74 = v84;
            if ( v21 )
              goto LABEL_41;
          }
          v77 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0uLL);
          v78 = *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v78 )
          {
            do
            {
              v79 = v77;
              v77 = (_QWORD *)*v77;
              v77[2] = v79;
              v78 = v77[1];
            }
            while ( !v78 );
            if ( v77 != (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v78;
          }
          if ( (*(_DWORD *)(v78 + 36) & 1) != 0 )
          {
            v80 = *(_QWORD *)(v78 + 16);
            if ( v80 )
              break;
          }
          v76 = 0LL;
          v81 = _InterlockedCompareExchange64((volatile signed __int64 *)v31, 0LL, v74);
          v21 = v74 == v81;
          v74 = v81;
          if ( v21 )
            goto LABEL_129;
        }
        *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v80;
        *(_QWORD *)(v78 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_129:
          v82 = *(_QWORD *)(v78 + 16);
          v83 = *(_QWORD *)(v78 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v78 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v78 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v83, v76, v77);
          v78 = v82;
        }
        while ( v82 );
      }
      goto LABEL_41;
    }
    v10 = a1 + 1;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[1], 0LL, 1LL);
    if ( v11 != 1 )
    {
      do
      {
        v50 = 3LL;
        v51 = v11 & 6;
        if ( v51 != 2 )
          v50 = -1LL;
        v52 = v11 + v50;
        v53 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v52, v11);
      }
      while ( v53 != v11 );
      if ( v51 == 2 )
      {
        v54 = a1 + 1;
        while ( 1 )
        {
          while ( (v52 & 1) != 0 )
          {
            v66 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v52 - 4, v52);
            v21 = v52 == v66;
            v52 = v66;
            if ( v21 )
              goto LABEL_4;
          }
          v55 = v52 & 0xFFFFFFFFFFFFFFF0uLL;
          v56 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0uLL);
          v57 = *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v57 )
          {
            do
            {
              v58 = v56;
              v56 = (_QWORD *)*v56;
              v56[2] = v58;
              v57 = v56[1];
            }
            while ( !v57 );
            if ( v56 != (_QWORD *)v55 )
              *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v57;
          }
          if ( (*(_DWORD *)(v57 + 36) & 1) != 0 )
          {
            v59 = *(_QWORD *)(v57 + 16);
            if ( v59 )
              break;
          }
          v54 = 0LL;
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, v52);
          v21 = v52 == v60;
          v52 = v60;
          if ( v21 )
            goto LABEL_95;
        }
        *(_QWORD *)((v52 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v59;
        *(_QWORD *)(v57 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_95:
          v63 = *(_QWORD *)(v57 + 16);
          v64 = *(_QWORD *)(v57 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v57 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v57 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v64, v54, v55);
          v57 = v63;
        }
        while ( v63 );
      }
    }
LABEL_4:
    v12 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v12 )
    {
      v13 = (unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL;
      for ( k = 0; k < 8; ++k )
      {
        v15 = &v12[8 * k];
        if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == v13 )
        {
          if ( v15 )
          {
            *v15 |= 2u;
            if ( v15[7] < 0 )
            {
              ThreadInformation[1] = 0LL;
              ThreadInformation[0] = (v15 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
            }
            *(_QWORD *)v15 = 0LL;
          }
          break;
        }
      }
    }
    v6 = 0;
LABEL_14:
    v9 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
    v16 = (Value + v3) & 0xFFFFFFFFFFFFFFFLL;
    v17 = (Value + v3) ^ (Value ^ (Value + v3)) & 0xF000000000000000uLL;
    if ( Value >= 0 || v16 )
    {
      if ( a3 && v16 )
      {
        v17 |= 0x8000000000000000uLL;
        v4 = 1;
        RtlAcquireSRWLockShared(a1 + 1);
      }
    }
    else
    {
      v18 = (volatile signed __int32 *)&a1[1];
      v17 &= ~0x8000000000000000uLL;
      v6 = 1;
      v19 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v19 )
      {
        for ( m = 0; m < 8; ++m )
        {
          v9 = (unsigned __int64)v19 + 8 * m;
          if ( !*(_QWORD *)v9 )
          {
            *(_QWORD *)v9 = v18;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v18, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&a1[1], v9);
    }
    v22 = (struct _TEB *)_InterlockedCompareExchange64((volatile signed __int64 *)a1, v17, Value);
    v21 = Value == (_QWORD)v22;
    Value = (signed __int64)v22;
  }
  while ( !v21 );
  if ( v6 )
  {
    v23 = a1[2].Value;
    a1[2].Value = 0LL;
    v24 = a1 + 1;
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, 1LL);
    if ( v25 != 1 )
    {
      do
      {
        v39 = 3LL;
        v40 = v25 & 6;
        if ( v40 != 2 )
          v39 = -1LL;
        v41 = v25 + v39;
        v42 = v25;
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v41, v25);
      }
      while ( v42 != v25 );
      if ( v40 == 2 )
      {
        v43 = v24;
        while ( 1 )
        {
          while ( (v41 & 1) != 0 )
          {
            v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v41 - 4, v41);
            v21 = v41 == v65;
            v41 = v65;
            if ( v21 )
              goto LABEL_25;
          }
          v44 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
          v45 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0uLL);
          v46 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v46 )
          {
            do
            {
              v47 = v45;
              v45 = (_QWORD *)*v45;
              v45[2] = v47;
              v46 = v45[1];
            }
            while ( !v46 );
            if ( v45 != (_QWORD *)v44 )
              *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v46;
          }
          if ( (*(_DWORD *)(v46 + 36) & 1) != 0 )
          {
            v48 = *(_QWORD *)(v46 + 16);
            if ( v48 )
              break;
          }
          v43 = 0LL;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, v41);
          v21 = v41 == v49;
          v41 = v49;
          if ( v21 )
            goto LABEL_90;
        }
        *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v48;
        *(_QWORD *)(v46 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_90:
          v61 = *(_QWORD *)(v46 + 16);
          v62 = *(_QWORD *)(v46 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v46 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v46 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v62, v43, v44);
          v46 = v61;
        }
        while ( v61 );
      }
    }
LABEL_25:
    v22 = NtCurrentTeb();
    v26 = (char *)v22->SchedulerSharedDataSlot;
    if ( v26 )
    {
      v27 = 0;
      v28 = (unsigned __int64)v24 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v27 < 8 )
      {
        v29 = &v26[8 * v27];
        v22 = (struct _TEB *)(*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL);
        if ( v22 == (struct _TEB *)v28 )
        {
          if ( v29 )
          {
            *v29 |= 2u;
            if ( v29[7] < 0 )
            {
              v88 = 0LL;
              v87 = (v29 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              LODWORD(v22) = NtSetInformationThread(
                               (HANDLE)0xFFFFFFFFFFFFFFFELL,
                               ThreadUpdateLockOwnership,
                               &v87,
                               0x10u);
            }
            *(_QWORD *)v29 = 0LL;
          }
          break;
        }
        ++v27;
      }
    }
    if ( v23 )
    {
      do
      {
        v30 = *(_QWORD *)v23;
        LODWORD(v22) = ZwAlertThreadByThreadId(*(HANDLE *)(v23 + 8));
        v23 = v30;
      }
      while ( v30 );
    }
  }
  else if ( v4 )
  {
    *((_QWORD *)&v89 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw(&a1[2]);
    v37 = a1[2].Value;
    do
    {
      v38 = v37;
      *(_QWORD *)&v89 = v37;
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], (signed __int64)&v89, v37);
    }
    while ( v37 != v38 );
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v22) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return (int)v22;
}
