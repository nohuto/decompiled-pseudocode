/*
 * XREFs of TppBarrierAdjust @ 0x18002D290
 * Callers:
 *     TppWorkWait @ 0x18002B5F0 (TppWorkWait.c)
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     TppWorkCancelPendingCallbacks @ 0x180054160 (TppWorkCancelPendingCallbacks.c)
 *     TppCancelWait @ 0x180067A40 (TppCancelWait.c)
 *     TpWaitForTimer @ 0x180068120 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
 *     TpWaitForAlpcCompletion @ 0x1800C97B0 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x1800C9890 (TpWaitForJobNotification.c)
 *     TpStartAsyncIoOperation @ 0x1800D9120 (TpStartAsyncIoOperation.c)
 *     TpCancelAsyncIoOperation @ 0x1800E0250 (TpCancelAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800E9E80 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800EA000 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForIoCompletion @ 0x1800ED3C0 (TpWaitForIoCompletion.c)
 *     TppWorkUnposted @ 0x1801107C0 (TppWorkUnposted.c)
 *     TppIopCancelPendingCallbacks @ 0x1801590C0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

struct _TEB *__fastcall TppBarrierAdjust(signed __int64 *a1, int a2, int a3)
{
  __int64 v3; // r12
  char v4; // r15
  char v6; // r14
  signed __int64 v8; // rdi
  __int64 v9; // rdx
  volatile signed __int64 *v10; // rbp
  signed __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rbp
  unsigned int k; // ecx
  char *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbx
  void *v19; // r9
  unsigned int m; // ecx
  bool v21; // zf
  struct _TEB *result; // rax
  _QWORD *v23; // rbx
  volatile signed __int64 *v24; // rsi
  signed __int64 v25; // rax
  char *v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rsi
  char *v29; // rdi
  _QWORD *v30; // rdi
  volatile signed __int64 *v31; // rbp
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
  volatile signed __int64 *v43; // rbp
  _QWORD *v44; // r9
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rax
  signed __int64 v48; // rax
  __int64 v49; // rcx
  signed __int64 v50; // rdx
  signed __int64 v51; // rcx
  signed __int64 v52; // rtt
  signed __int64 *v53; // r14
  unsigned __int64 v54; // r8
  _QWORD *v55; // r9
  __int64 v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rax
  signed __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rcx
  signed __int64 v64; // rax
  signed __int64 v65; // rax
  signed __int64 v66; // r8
  signed __int64 v67; // rtt
  _QWORD *v68; // rcx
  __int64 i; // rdx
  __int64 v70; // r8
  signed __int64 v71; // rdx
  __int64 v72; // rcx
  signed __int64 v73; // rcx
  signed __int64 v74; // rtt
  signed __int64 *v75; // r15
  _QWORD *v76; // r8
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rax
  signed __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rcx
  signed __int64 v83; // rax
  __int64 v84; // [rsp+20h] [rbp-58h] BYREF
  __int64 v85; // [rsp+28h] [rbp-50h]
  __int64 v86; // [rsp+30h] [rbp-48h] BYREF
  __int64 v87; // [rsp+38h] [rbp-40h]
  __int128 v88; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  v4 = 0;
  v88 = 0LL;
  v6 = 0;
  _m_prefetchw(a1);
  v8 = *a1;
  do
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !v6 )
    {
      if ( !v4 )
        goto LABEL_15;
      v31 = a1 + 1;
      v32 = _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL);
      if ( v32 == 17 )
        goto LABEL_41;
      if ( (v32 & 1) == 0 )
        RtlRaiseStatus(3221226084LL);
      while ( (v32 & 2) == 0 )
      {
        v66 = 0LL;
        if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v66 = v32 - 16;
        v67 = v32;
        v32 = _InterlockedCompareExchange64(v31, v66, v32);
        if ( v67 == v32 )
          goto LABEL_41;
      }
      if ( (v32 & 8) != 0 )
      {
        v68 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( i = *(_QWORD *)((v32 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v68[1] )
          v68 = (_QWORD *)*v68;
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
                    v87 = 0LL;
                    v86 = (v36 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                    NtSetInformationThread(-2LL, 56LL, &v86, 16LL, v84, v85);
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
        v70 = -9LL;
      }
      else
      {
        v70 = -1LL;
      }
      do
      {
        v71 = v32 & 6;
        if ( v71 == 2 )
          v72 = v70 + 4;
        else
          v72 = v70;
        v73 = v32 + v72;
        v74 = v32;
        v32 = _InterlockedCompareExchange64(v31, v73, v32);
      }
      while ( v74 != v32 );
      if ( v71 == 2 )
      {
        v75 = a1 + 1;
        while ( 1 )
        {
          while ( (v73 & 1) != 0 )
          {
            v83 = _InterlockedCompareExchange64(v31, v73 - 4, v73);
            v21 = v73 == v83;
            v73 = v83;
            if ( v21 )
              goto LABEL_41;
          }
          v76 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0uLL);
          v77 = *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v77 )
          {
            do
            {
              v78 = v76;
              v76 = (_QWORD *)*v76;
              v76[2] = v78;
              v77 = v76[1];
            }
            while ( !v77 );
            if ( v76 != (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v77;
          }
          if ( (*(_DWORD *)(v77 + 36) & 1) != 0 )
          {
            v79 = *(_QWORD *)(v77 + 16);
            if ( v79 )
              break;
          }
          v75 = 0LL;
          v80 = _InterlockedCompareExchange64(v31, 0LL, v73);
          v21 = v73 == v80;
          v73 = v80;
          if ( v21 )
            goto LABEL_130;
        }
        *(_QWORD *)((v73 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v79;
        *(_QWORD *)(v77 + 16) = 0LL;
        _InterlockedAnd64(v31, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_130:
          v81 = *(_QWORD *)(v77 + 16);
          v82 = *(_QWORD *)(v77 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v77 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v77 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v82, v75, v76);
          v77 = v81;
        }
        while ( v81 );
      }
      goto LABEL_41;
    }
    v10 = a1 + 1;
    v11 = _InterlockedCompareExchange64(a1 + 1, 0LL, 1LL);
    if ( v11 != 1 )
    {
      do
      {
        v49 = 3LL;
        v50 = v11 & 6;
        if ( v50 != 2 )
          v49 = -1LL;
        v51 = v11 + v49;
        v52 = v11;
        v11 = _InterlockedCompareExchange64(v10, v51, v11);
      }
      while ( v52 != v11 );
      if ( v50 == 2 )
      {
        v53 = a1 + 1;
        while ( 1 )
        {
          while ( (v51 & 1) != 0 )
          {
            v65 = _InterlockedCompareExchange64(v10, v51 - 4, v51);
            v21 = v51 == v65;
            v51 = v65;
            if ( v21 )
              goto LABEL_4;
          }
          v54 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
          v55 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0uLL);
          v56 = *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v56 )
          {
            do
            {
              v57 = v55;
              v55 = (_QWORD *)*v55;
              v55[2] = v57;
              v56 = v55[1];
            }
            while ( !v56 );
            if ( v55 != (_QWORD *)v54 )
              *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v56;
          }
          if ( (*(_DWORD *)(v56 + 36) & 1) != 0 )
          {
            v58 = *(_QWORD *)(v56 + 16);
            if ( v58 )
              break;
          }
          v53 = 0LL;
          v59 = _InterlockedCompareExchange64(v10, 0LL, v51);
          v21 = v51 == v59;
          v51 = v59;
          if ( v21 )
            goto LABEL_96;
        }
        *(_QWORD *)((v51 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v58;
        *(_QWORD *)(v56 + 16) = 0LL;
        _InterlockedAnd64(v10, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_96:
          v62 = *(_QWORD *)(v56 + 16);
          v63 = *(_QWORD *)(v56 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v56 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v56 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v63, v53, v54);
          v56 = v62;
        }
        while ( v62 );
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
              v85 = 0LL;
              v84 = (v15 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))NtSetInformationThread)(
                -2LL,
                56LL,
                &v84,
                16LL);
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
    v16 = (v8 + v3) & 0xFFFFFFFFFFFFFFFLL;
    v17 = 0xF000000000000000uLL;
    v18 = (v8 + v3) ^ (v8 ^ (v8 + v3)) & 0xF000000000000000uLL;
    if ( v8 >= 0 || v16 )
    {
      if ( a3 && v16 )
      {
        v18 |= 0x8000000000000000uLL;
        v4 = 1;
        RtlAcquireSRWLockShared(a1 + 1);
      }
    }
    else
    {
      v17 = (unsigned __int64)(a1 + 1);
      v18 &= ~0x8000000000000000uLL;
      v6 = 1;
      v19 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v19 )
      {
        for ( m = 0; m < 8; ++m )
        {
          v9 = (__int64)v19 + 8 * m;
          if ( !*(_QWORD *)v9 )
          {
            *(_QWORD *)v9 = v17;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(a1 + 1, v9);
    }
    result = (struct _TEB *)_InterlockedCompareExchange64(a1, v18, v8);
    v21 = v8 == (_QWORD)result;
    v8 = (signed __int64)result;
  }
  while ( !v21 );
  if ( v6 )
  {
    v23 = (_QWORD *)a1[2];
    a1[2] = 0LL;
    v24 = a1 + 1;
    v25 = _InterlockedCompareExchange64(v24, 0LL, 1LL);
    if ( v25 != 1 )
    {
      v17 = -1LL;
      do
      {
        v39 = 3LL;
        v40 = v25 & 6;
        if ( v40 != 2 )
          v39 = -1LL;
        v41 = v25 + v39;
        v42 = v25;
        v25 = _InterlockedCompareExchange64(v24, v41, v25);
      }
      while ( v42 != v25 );
      if ( v40 == 2 )
      {
        v43 = v24;
        while ( 1 )
        {
          while ( (v41 & 1) != 0 )
          {
            v64 = _InterlockedCompareExchange64(v24, v41 - 4, v41);
            v21 = v41 == v64;
            v41 = v64;
            if ( v21 )
              goto LABEL_25;
          }
          v17 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
          v44 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0uLL);
          v45 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v45 )
          {
            do
            {
              v46 = v44;
              v44 = (_QWORD *)*v44;
              v44[2] = v46;
              v45 = v44[1];
            }
            while ( !v45 );
            if ( v44 != (_QWORD *)v17 )
              *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
          }
          if ( (*(_DWORD *)(v45 + 36) & 1) != 0 )
          {
            v47 = *(_QWORD *)(v45 + 16);
            if ( v47 )
              break;
          }
          v43 = 0LL;
          v48 = _InterlockedCompareExchange64(v24, 0LL, v41);
          v21 = v41 == v48;
          v41 = v48;
          if ( v21 )
            goto LABEL_91;
        }
        *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v47;
        *(_QWORD *)(v45 + 16) = 0LL;
        _InterlockedAnd64(v24, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_91:
          v60 = *(_QWORD *)(v45 + 16);
          v61 = *(_QWORD *)(v45 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v45 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v45 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v61, v43, v17);
          v45 = v60;
        }
        while ( v60 );
      }
    }
LABEL_25:
    result = NtCurrentTeb();
    v26 = (char *)result->SchedulerSharedDataSlot;
    if ( v26 )
    {
      v17 = 0x7FFFFFFFFFFFFFFCLL;
      v27 = 0;
      v28 = (unsigned __int64)v24 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v27 < 8 )
      {
        v29 = &v26[8 * v27];
        result = (struct _TEB *)(*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL);
        if ( result == (struct _TEB *)v28 )
        {
          if ( v29 )
          {
            *v29 |= 2u;
            if ( v29[7] < 0 )
            {
              v87 = 0LL;
              v86 = (v29 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, &v86, 16LL, v84, v85);
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
        v30 = (_QWORD *)*v23;
        result = (struct _TEB *)ZwAlertThreadByThreadId(v23[1], v26, v17);
        v23 = v30;
      }
      while ( v30 );
    }
  }
  else if ( v4 )
  {
    *((_QWORD *)&v88 + 1) = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw(a1 + 2);
    v37 = a1[2];
    do
    {
      v38 = v37;
      *(_QWORD *)&v88 = v37;
      v37 = _InterlockedCompareExchange64(a1 + 2, (signed __int64)&v88, v37);
    }
    while ( v37 != v38 );
    RtlReleaseSRWLockShared(a1 + 1);
    return (struct _TEB *)NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
