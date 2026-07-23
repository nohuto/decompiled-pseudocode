/*
 * XREFs of TppWorkerFindTask @ 0x1800278E0
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppQueueRemoveHead @ 0x1800C9060 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x1800DFDF0 (TppAreNodeWorkersSteadyState.c)
 *     TppETWWorkerNodeSwitch @ 0x1800E872C (TppETWWorkerNodeSwitch.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, volatile signed __int64 *a2, __int64 SchedulerSharedDataSlot)
{
  volatile signed __int64 *v3; // r9
  unsigned __int64 Number; // r14
  unsigned int v6; // r13d
  int Group; // esi
  int v8; // eax
  int v9; // edi
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r12d
  __int16 v15; // r15
  int v16; // eax
  volatile signed __int64 *v17; // r12
  unsigned int v18; // r14d
  __int64 v19; // rax
  _QWORD *k; // rdx
  __int64 v21; // r9
  volatile signed __int64 *v22; // rsi
  volatile signed __int32 *v23; // r15
  unsigned int m; // ecx
  __int64 v25; // r14
  volatile signed __int64 v26; // rax
  signed __int64 v27; // rax
  char *v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // r15
  char *v31; // rsi
  unsigned int v32; // r8d
  __int64 v33; // rsi
  char v34; // r15
  int v35; // r14d
  int v36; // eax
  __int64 v38; // rcx
  signed __int64 v39; // rdx
  signed __int64 v40; // rcx
  signed __int64 v41; // rtt
  _QWORD *v42; // r8
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rax
  bool v46; // zf
  signed __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r11
  unsigned __int16 j; // dx
  volatile signed __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  signed __int64 v56; // rax
  __int64 v57; // r11
  unsigned __int16 n; // dx
  __int64 v59; // rax
  unsigned int v60; // edi
  __int64 v61; // rsi
  _QWORD *v62; // r15
  unsigned int v63; // [rsp+30h] [rbp-89h]
  volatile signed __int64 *v64; // [rsp+38h] [rbp-81h] BYREF
  int v65; // [rsp+40h] [rbp-79h]
  int v66; // [rsp+44h] [rbp-75h] BYREF
  __int64 v67; // [rsp+48h] [rbp-71h]
  _QWORD *v68; // [rsp+50h] [rbp-69h]
  volatile signed __int64 *v69; // [rsp+58h] [rbp-61h]
  _QWORD *v70; // [rsp+60h] [rbp-59h]
  _DWORD Fields[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v72; // [rsp+78h] [rbp-41h]
  __int128 v73; // [rsp+80h] [rbp-39h]
  __int64 v74; // [rsp+90h] [rbp-29h]
  int v75; // [rsp+98h] [rbp-21h]
  unsigned int v76; // [rsp+9Ch] [rbp-1Dh]
  __int16 v77; // [rsp+A0h] [rbp-19h]
  __int16 v78; // [rsp+A2h] [rbp-17h]
  int v79; // [rsp+A4h] [rbp-15h]
  int v80; // [rsp+A8h] [rbp-11h]
  int v81; // [rsp+ACh] [rbp-Dh]
  __int128 ThreadInformation; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v83; // [rsp+C0h] [rbp+7h] BYREF

  v3 = a2;
  v70 = (_QWORD *)SchedulerSharedDataSlot;
  v64 = a2;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v8 = *(_DWORD *)(a1 + 440)) == 0 )
    v8 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v8 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    v3 = v64;
  }
  v9 = 0;
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    v11 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v11 + 16LL * (Group + TppMaximumGroups * i) + 8) == (_WORD)Group )
    {
      v12 = *(_QWORD *)(v11 + 16LL * (Group + TppMaximumGroups * i));
      if ( _bittest64(&v12, Number) )
      {
        v6 = i;
        break;
      }
    }
  }
  v13 = *((unsigned int *)v3 + 88);
  v14 = *((unsigned __int16 *)v3 + 181);
  v65 = 0xFFFF;
  v15 = -1;
  v16 = *(_DWORD *)(a1 + 428);
  v66 = 0;
  v83 = 0LL;
  if ( v6 == (_DWORD)v13 )
  {
    v17 = v64;
    if ( v16 == -1 && !*((_BYTE *)v64 + 360) )
    {
      *((_BYTE *)v64 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
  }
  else
  {
    if ( v16 == -1 )
    {
      if ( *((_BYTE *)v3 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v13));
      else
        *((_BYTE *)v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
    v50 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << Number) & *(_QWORD *)(v50 + 16LL * (TppMaximumGroups * v6 + v14))) != 0 )
    {
      v15 = v14;
    }
    else
    {
      for ( j = 0; j < (unsigned int)TppMaximumGroups; ++j )
      {
        if ( j != (_WORD)v14 && ((1LL << Number) & *(_QWORD *)(v50 + 16LL * (TppMaximumGroups * v6 + j))) != 0 )
        {
          v15 = j;
          break;
        }
      }
    }
    v52 = v64;
    *((_DWORD *)v64 + 88) = v6;
    *((_WORD *)v52 + 181) = v15;
    if ( RtlGetCurrentServiceSessionId() )
      v53 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v53 = 2147353478LL;
    if ( *(_BYTE *)v53 )
    {
      v54 = *(_QWORD *)(a1 + 40);
      Fields[0] = 0;
      Fields[1] = 472449024;
      v72 = 0LL;
      v73 = 0LL;
      v81 = 0;
      v74 = a1;
      v75 = v13;
      v76 = v6;
      v77 = v14;
      v78 = v15;
      v79 = *(_DWORD *)(v54 + 4 * v13);
      v80 = *(_DWORD *)(v54 + 4LL * v6);
      if ( RtlGetCurrentServiceSessionId() )
        v55 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v55 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v55, 0x402u, 0x1Cu, Fields);
    }
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &v83, 0x10u);
    LOWORD(v66) = v15;
    BYTE2(v66) = Number;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v66, 4u);
    v17 = v64;
  }
  v18 = v6;
  v63 = v6;
  if ( *(_DWORD *)(a1 + 428) == -1 && *((_DWORD *)v17 + 89) >= 0x10u && !(unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    do
    {
LABEL_43:
      if ( *(_BYTE *)(a1 + 377) )
        return 0LL;
      v61 = 0LL;
      v62 = (_QWORD *)(a1 + 16);
LABEL_117:
      ;
    }
    while ( v61 > 2 );
    while ( 1 )
    {
      v25 = TppQueueRemoveHead(*v62 + 24LL * v18, k, SchedulerSharedDataSlot, v21);
      if ( v25 )
        break;
      v18 = v63 + 1;
      if ( v63 + 1 >= TppNumberNodes )
        v18 = 0;
      v63 = v18;
      if ( v18 == v6 )
      {
        ++v61;
        ++v62;
        goto LABEL_117;
      }
    }
  }
  else
  {
    v19 = 0LL;
    for ( k = (_QWORD *)(a1 + 16); ; k = v68 + 1 )
    {
      v68 = k;
      v21 = -1LL;
      v67 = v19;
      if ( v19 > 2 )
      {
        v18 = v6;
        goto LABEL_43;
      }
      v22 = (volatile signed __int64 *)(*k + 24LL * v6);
      v69 = v22;
      v23 = (volatile signed __int32 *)(v22 + 2);
      SchedulerSharedDataSlot = (__int64)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( m = 0; m < 8; ++m )
        {
          k = (_QWORD *)(SchedulerSharedDataSlot + 8LL * m);
          if ( !*k )
          {
            *k = v23;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v23, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v22 + 2, (unsigned __int64)k);
      v25 = *v22;
      if ( *(volatile signed __int64 **)(*v22 + 8) != v22
        || (v26 = *(_QWORD *)v25, *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25) )
      {
        __fastfail(3u);
      }
      *v22 = v26;
      *(_QWORD *)(v26 + 8) = v22;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, 0LL, 1LL);
      if ( v27 != 1 )
      {
        do
        {
          v38 = 3LL;
          v39 = v27 & 6;
          if ( v39 != 2 )
            v38 = -1LL;
          v40 = v27 + v38;
          v41 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v40, v27);
        }
        while ( v41 != v27 );
        if ( v39 == 2 )
        {
          v64 = v22 + 2;
          while ( 1 )
          {
            while ( (v40 & 1) != 0 )
            {
              v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v40 - 4, v40);
              v46 = v40 == v56;
              v40 = v56;
              if ( v46 )
                goto LABEL_24;
            }
            v42 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0uLL);
            v43 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v43 )
            {
              do
              {
                v44 = v42;
                v42 = (_QWORD *)*v42;
                v42[2] = v44;
                v43 = v42[1];
              }
              while ( !v43 );
              if ( v42 != (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0uLL) )
                *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
            }
            if ( (*(_DWORD *)(v43 + 36) & 1) != 0 )
            {
              v45 = *(_QWORD *)(v43 + 16);
              if ( v45 )
                break;
            }
            SchedulerSharedDataSlot = 0LL;
            v64 = 0LL;
            v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, 0LL, v40);
            v46 = v40 == v47;
            v40 = v47;
            if ( v46 )
              goto LABEL_61;
          }
          *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
          *(_QWORD *)(v43 + 16) = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFBuLL);
          SchedulerSharedDataSlot = (__int64)v64;
          do
          {
LABEL_61:
            v48 = *(_QWORD *)(v43 + 16);
            v49 = *(_QWORD *)(v43 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v43 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v43 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v49, SchedulerSharedDataSlot, SchedulerSharedDataSlot);
            SchedulerSharedDataSlot = (__int64)v64;
            v43 = v48;
          }
          while ( v48 );
        }
      }
LABEL_24:
      v28 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v28 )
      {
        SchedulerSharedDataSlot = 0x7FFFFFFFFFFFFFFCLL;
        v29 = 0;
        v30 = (unsigned __int64)v23 & 0x7FFFFFFFFFFFFFFCLL;
        while ( v29 < 8 )
        {
          v31 = &v28[8 * v29];
          if ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) == v30 )
          {
            if ( v31 )
            {
              *v31 |= 2u;
              if ( v31[7] < 0 )
              {
                ThreadInformation = (unsigned __int64)((v31 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
                NtSetInformationThread(
                  (HANDLE)0xFFFFFFFFFFFFFFFELL,
                  ThreadUpdateLockOwnership,
                  &ThreadInformation,
                  0x10u);
              }
              *(_QWORD *)v31 = 0LL;
            }
            break;
          }
          ++v29;
        }
      }
      if ( (volatile signed __int64 *)v25 != v69 && v25 )
        break;
      v19 = v67 + 1;
    }
  }
  v32 = v63;
  *v70 = v25 - 16;
  v33 = *((unsigned int *)v17 + 88);
  v34 = *(_BYTE *)(v25 - 16 + 12);
  v35 = *((unsigned __int16 *)v17 + 181);
  v36 = *(_DWORD *)(a1 + 428);
  LODWORD(v64) = 0;
  ThreadInformation = 0LL;
  if ( v63 == (_DWORD)v33 )
  {
    if ( v36 == -1 && !*((_BYTE *)v17 + 360) )
    {
      *((_BYTE *)v17 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v63));
    }
  }
  else
  {
    if ( v36 == -1 )
    {
      if ( *((_BYTE *)v17 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v33));
      else
        *((_BYTE *)v17 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v63));
    }
    v57 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << v34) & *(_QWORD *)(v57 + 16LL * (TppMaximumGroups * v63 + v35))) != 0 )
    {
      LOWORD(v65) = v35;
    }
    else
    {
      for ( n = 0; n < (unsigned int)TppMaximumGroups; ++n )
      {
        if ( n != (_WORD)v35 && ((1LL << v34) & *(_QWORD *)(v57 + 16LL * (TppMaximumGroups * v63 + n))) != 0 )
        {
          LOWORD(v65) = n;
          break;
        }
      }
    }
    *((_DWORD *)v17 + 88) = v63;
    *((_WORD *)v17 + 181) = v65;
    if ( RtlGetCurrentServiceSessionId() )
      v59 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v59 = 2147353478LL;
    if ( *(_BYTE *)v59 )
      TppETWWorkerNodeSwitch(a1, v33, v63, (unsigned __int16)v35, v65);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
    LOWORD(v64) = v65;
    BYTE2(v64) = v34;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v64, 4u);
    v32 = v63;
  }
  if ( v32 == v6 )
  {
    v60 = *((_DWORD *)v17 + 89);
    if ( v60 < 0x10 )
      v9 = v60 + 1;
    else
      v9 = 16;
  }
  *((_DWORD *)v17 + 89) = v9;
  return 1LL;
}
