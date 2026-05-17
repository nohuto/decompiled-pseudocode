/*
 * XREFs of TppWorkerFindTask @ 0x18003D370
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppQueueRemoveHead @ 0x1800CB8F0 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x1800E22F0 (TppAreNodeWorkersSteadyState.c)
 *     TppETWWorkerNodeSwitch @ 0x1800E951C (TppETWWorkerNodeSwitch.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, volatile signed __int64 *a2, __int64 SchedulerSharedDataSlot)
{
  volatile signed __int64 *v3; // r9
  unsigned __int64 Number; // r14
  unsigned int v6; // r13d
  int Group; // esi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // edi
  unsigned int i; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r12d
  __int16 v16; // r15
  int v17; // eax
  volatile signed __int64 *v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rax
  _QWORD *k; // rdx
  __int64 v22; // r9
  volatile signed __int64 *v23; // rsi
  volatile signed __int32 *v24; // r15
  unsigned int m; // ecx
  __int64 v26; // r14
  volatile signed __int64 v27; // rax
  signed __int64 v28; // rax
  char *v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r15
  char *v32; // rsi
  unsigned int v33; // r8d
  __int64 v34; // rsi
  char v35; // r15
  int v36; // r14d
  int v37; // eax
  __int64 v39; // rcx
  signed __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rtt
  _QWORD *v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rax
  bool v47; // zf
  signed __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // r11
  unsigned __int16 j; // dx
  volatile signed __int64 *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  signed __int64 v57; // rax
  __int64 v58; // r11
  unsigned __int16 n; // dx
  __int64 v60; // rax
  unsigned int v61; // edi
  __int64 v62; // rsi
  _QWORD *v63; // r15
  unsigned int v64; // [rsp+30h] [rbp-89h]
  volatile signed __int64 *v65; // [rsp+38h] [rbp-81h] BYREF
  int v66; // [rsp+40h] [rbp-79h]
  int v67; // [rsp+44h] [rbp-75h] BYREF
  __int64 v68; // [rsp+48h] [rbp-71h]
  _QWORD *v69; // [rsp+50h] [rbp-69h]
  volatile signed __int64 *v70; // [rsp+58h] [rbp-61h]
  _QWORD *v71; // [rsp+60h] [rbp-59h]
  _DWORD v72[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v73; // [rsp+78h] [rbp-41h]
  __int128 v74; // [rsp+80h] [rbp-39h]
  __int64 v75; // [rsp+90h] [rbp-29h]
  int v76; // [rsp+98h] [rbp-21h]
  unsigned int v77; // [rsp+9Ch] [rbp-1Dh]
  __int16 v78; // [rsp+A0h] [rbp-19h]
  __int16 v79; // [rsp+A2h] [rbp-17h]
  int v80; // [rsp+A4h] [rbp-15h]
  int v81; // [rsp+A8h] [rbp-11h]
  int v82; // [rsp+ACh] [rbp-Dh]
  __int128 v83; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v84; // [rsp+C0h] [rbp+7h] BYREF

  v3 = a2;
  v71 = (_QWORD *)SchedulerSharedDataSlot;
  v65 = a2;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v8 = *(_DWORD *)(a1 + 440)) == 0 )
    v8 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v8 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive(a1 + 72, v9);
    v3 = v65;
  }
  v10 = 0;
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v12 + 16LL * (Group + TppMaximumGroups * i) + 8) == (_WORD)Group )
    {
      v13 = *(_QWORD *)(v12 + 16LL * (Group + TppMaximumGroups * i));
      if ( _bittest64(&v13, Number) )
      {
        v6 = i;
        break;
      }
    }
  }
  v14 = *((unsigned int *)v3 + 88);
  v15 = *((unsigned __int16 *)v3 + 181);
  v66 = 0xFFFF;
  v16 = -1;
  v17 = *(_DWORD *)(a1 + 428);
  v67 = 0;
  v84 = 0LL;
  if ( v6 == (_DWORD)v14 )
  {
    v18 = v65;
    if ( v17 == -1 && !*((_BYTE *)v65 + 360) )
    {
      *((_BYTE *)v65 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
  }
  else
  {
    if ( v17 == -1 )
    {
      if ( *((_BYTE *)v3 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
      else
        *((_BYTE *)v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
    v51 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << Number) & *(_QWORD *)(v51 + 16LL * (TppMaximumGroups * v6 + v15))) != 0 )
    {
      v16 = v15;
    }
    else
    {
      for ( j = 0; j < (unsigned int)TppMaximumGroups; ++j )
      {
        if ( j != (_WORD)v15 && ((1LL << Number) & *(_QWORD *)(v51 + 16LL * (TppMaximumGroups * v6 + j))) != 0 )
        {
          v16 = j;
          break;
        }
      }
    }
    v53 = v65;
    *((_DWORD *)v65 + 88) = v6;
    *((_WORD *)v53 + 181) = v16;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v54 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v54 = 2147353478LL;
    if ( *(_BYTE *)v54 )
    {
      v55 = *(_QWORD *)(a1 + 40);
      v72[0] = 0;
      v72[1] = 472449024;
      v73 = 0LL;
      v74 = 0LL;
      v82 = 0;
      v75 = a1;
      v76 = v14;
      v77 = v6;
      v78 = v15;
      v79 = v16;
      v80 = *(_DWORD *)(v55 + 4 * v14);
      v81 = *(_DWORD *)(v55 + 4LL * v6);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v56 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v56 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v56, 1026LL, 28LL, v72);
    }
    NtSetInformationThread(-2LL, 30LL, &v84, 16LL);
    LOWORD(v67) = v16;
    BYTE2(v67) = Number;
    NtSetInformationThread(-2LL, 33LL, &v67, 4LL);
    v18 = v65;
  }
  v19 = v6;
  v64 = v6;
  if ( *(_DWORD *)(a1 + 428) == -1 && *((_DWORD *)v18 + 89) >= 0x10u && !(unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    do
    {
LABEL_43:
      if ( *(_BYTE *)(a1 + 377) )
        return 0LL;
      v62 = 0LL;
      v63 = (_QWORD *)(a1 + 16);
LABEL_117:
      ;
    }
    while ( v62 > 2 );
    while ( 1 )
    {
      v26 = TppQueueRemoveHead(*v63 + 24LL * v19, k, SchedulerSharedDataSlot, v22);
      if ( v26 )
        break;
      v19 = v64 + 1;
      if ( v64 + 1 >= TppNumberNodes )
        v19 = 0;
      v64 = v19;
      if ( v19 == v6 )
      {
        ++v62;
        ++v63;
        goto LABEL_117;
      }
    }
  }
  else
  {
    v20 = 0LL;
    for ( k = (_QWORD *)(a1 + 16); ; k = v69 + 1 )
    {
      v69 = k;
      v22 = -1LL;
      v68 = v20;
      if ( v20 > 2 )
      {
        v19 = v6;
        goto LABEL_43;
      }
      v23 = (volatile signed __int64 *)(*k + 24LL * v6);
      v70 = v23;
      v24 = (volatile signed __int32 *)(v23 + 2);
      SchedulerSharedDataSlot = (__int64)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( m = 0; m < 8; ++m )
        {
          k = (_QWORD *)(SchedulerSharedDataSlot + 8LL * m);
          if ( !*k )
          {
            *k = v24;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v24, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v23 + 2, (__int64)k);
      v26 = *v23;
      if ( *(volatile signed __int64 **)(*v23 + 8) != v23
        || (v27 = *(_QWORD *)v26, *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26) )
      {
        __fastfail(3u);
      }
      *v23 = v27;
      *(_QWORD *)(v27 + 8) = v23;
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, 1LL);
      if ( v28 != 1 )
      {
        do
        {
          v39 = 3LL;
          v40 = v28 & 6;
          if ( v40 != 2 )
            v39 = -1LL;
          v41 = v28 + v39;
          v42 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v41, v28);
        }
        while ( v42 != v28 );
        if ( v40 == 2 )
        {
          v65 = v23 + 2;
          while ( 1 )
          {
            while ( (v41 & 1) != 0 )
            {
              v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v41 - 4, v41);
              v47 = v41 == v57;
              v41 = v57;
              if ( v47 )
                goto LABEL_24;
            }
            v43 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0uLL);
            v44 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v44 )
            {
              do
              {
                v45 = v43;
                v43 = (_QWORD *)*v43;
                v43[2] = v45;
                v44 = v43[1];
              }
              while ( !v44 );
              if ( v43 != (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0uLL) )
                *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v44;
            }
            if ( (*(_DWORD *)(v44 + 36) & 1) != 0 )
            {
              v46 = *(_QWORD *)(v44 + 16);
              if ( v46 )
                break;
            }
            SchedulerSharedDataSlot = 0LL;
            v65 = 0LL;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, 0LL, v41);
            v47 = v41 == v48;
            v41 = v48;
            if ( v47 )
              goto LABEL_61;
          }
          *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v46;
          *(_QWORD *)(v44 + 16) = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFBuLL);
          SchedulerSharedDataSlot = (__int64)v65;
          do
          {
LABEL_61:
            v49 = *(_QWORD *)(v44 + 16);
            v50 = *(_QWORD *)(v44 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v44 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v44 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v50, SchedulerSharedDataSlot, SchedulerSharedDataSlot);
            SchedulerSharedDataSlot = (__int64)v65;
            v44 = v49;
          }
          while ( v49 );
        }
      }
LABEL_24:
      v29 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v29 )
      {
        SchedulerSharedDataSlot = 0x7FFFFFFFFFFFFFFCLL;
        v30 = 0;
        v31 = (unsigned __int64)v24 & 0x7FFFFFFFFFFFFFFCLL;
        while ( v30 < 8 )
        {
          v32 = &v29[8 * v30];
          if ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) == v31 )
          {
            if ( v32 )
            {
              *v32 |= 2u;
              if ( v32[7] < 0 )
              {
                v83 = (unsigned __int64)((v32 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
                NtSetInformationThread(-2LL, 56LL, &v83, 16LL);
              }
              *(_QWORD *)v32 = 0LL;
            }
            break;
          }
          ++v30;
        }
      }
      if ( (volatile signed __int64 *)v26 != v70 && v26 )
        break;
      v20 = v68 + 1;
    }
  }
  v33 = v64;
  *v71 = v26 - 16;
  v34 = *((unsigned int *)v18 + 88);
  v35 = *(_BYTE *)(v26 - 16 + 12);
  v36 = *((unsigned __int16 *)v18 + 181);
  v37 = *(_DWORD *)(a1 + 428);
  LODWORD(v65) = 0;
  v83 = 0LL;
  if ( v64 == (_DWORD)v34 )
  {
    if ( v37 == -1 && !*((_BYTE *)v18 + 360) )
    {
      *((_BYTE *)v18 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v64));
    }
  }
  else
  {
    if ( v37 == -1 )
    {
      if ( *((_BYTE *)v18 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v34));
      else
        *((_BYTE *)v18 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v64));
    }
    v58 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << v35) & *(_QWORD *)(v58 + 16LL * (TppMaximumGroups * v64 + v36))) != 0 )
    {
      LOWORD(v66) = v36;
    }
    else
    {
      for ( n = 0; n < (unsigned int)TppMaximumGroups; ++n )
      {
        if ( n != (_WORD)v36 && ((1LL << v35) & *(_QWORD *)(v58 + 16LL * (TppMaximumGroups * v64 + n))) != 0 )
        {
          LOWORD(v66) = n;
          break;
        }
      }
    }
    *((_DWORD *)v18 + 88) = v64;
    *((_WORD *)v18 + 181) = v66;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v60 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v60 = 2147353478LL;
    if ( *(_BYTE *)v60 )
      TppETWWorkerNodeSwitch(a1, v34, v64, (unsigned __int16)v36, v66);
    NtSetInformationThread(-2LL, 30LL, &v83, 16LL);
    LOWORD(v65) = v66;
    BYTE2(v65) = v35;
    NtSetInformationThread(-2LL, 33LL, &v65, 4LL);
    v33 = v64;
  }
  if ( v33 == v6 )
  {
    v61 = *((_DWORD *)v18 + 89);
    if ( v61 < 0x10 )
      v10 = v61 + 1;
    else
      v10 = 16;
  }
  *((_DWORD *)v18 + 89) = v10;
  return 1LL;
}
