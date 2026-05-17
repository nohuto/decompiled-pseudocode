/*
 * XREFs of TppCallbackEpilog @ 0x18003FD40
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180040250 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     ZwReleaseSemaphore @ 0x18015F080 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18015F340 (ZwReleaseMutant.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  unsigned int *v1; // rsi
  unsigned int v2; // eax
  int v3; // ecx
  __int64 v4; // r14
  char v5; // r15
  signed __int64 v6; // rdi
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // rbx
  volatile signed __int32 *v9; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v12; // zf
  signed __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r8
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  int v30; // eax
  unsigned __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+20h] [rbp-99h] BYREF
  __int128 v35; // [rsp+28h] [rbp-91h]
  unsigned int *v36; // [rsp+38h] [rbp-81h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-79h] BYREF

  v36 = a1;
  v1 = a1;
  v34 = 0;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  TppCallbackCheckThreadAfterCallback(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        v2 = v1[36];
        if ( !v2 )
        {
          *(_OWORD *)v1 = 0LL;
          *((_OWORD *)v1 + 1) = 0LL;
          *((_OWORD *)v1 + 2) = 0LL;
          *((_OWORD *)v1 + 3) = 0LL;
          *((_OWORD *)v1 + 4) = 0LL;
          *((_OWORD *)v1 + 5) = 0LL;
          *((_OWORD *)v1 + 6) = 0LL;
          *((_OWORD *)v1 + 7) = 0LL;
          *((_OWORD *)v1 + 8) = 0LL;
          return;
        }
        _BitScanForward((unsigned int *)&v3, v2);
        v1[36] = v2 ^ (1 << v3);
        if ( v3 != 9 )
          break;
        v18 = *((_QWORD *)v1 + 23);
        *((_QWORD *)v1 + 23) = 0LL;
        (*(void (**)(void))(*(_QWORD *)(v18 + 8) + 8LL))();
      }
      if ( v3 != 4 )
        break;
      v19 = *((_QWORD *)v1 + 16);
      v20 = v1[18];
      v21 = *((_QWORD *)v1 + 23);
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 420));
        _m_prefetchw((const void *)(v19 + 8));
        v28 = *(_QWORD *)(v19 + 8);
        *(_QWORD *)&v35 = v28;
        do
        {
          LODWORD(v35) = ((__int16)v28 - 1) ^ (((__int16)v28 - 1) ^ v28) & 0xFFFF0000;
          v29 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 8), v35, v28);
          *(_QWORD *)&v35 = v28;
        }
        while ( v29 != v28 );
        v25 = *(_QWORD *)(v19 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 144) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 144) + 420LL));
        v22 = *(_QWORD *)(v21 + 144);
        _m_prefetchw((const void *)(v22 + 8));
        v23 = *(_QWORD *)(v22 + 8);
        *(_QWORD *)&v35 = v23;
        do
        {
          LODWORD(v35) = ((__int16)v23 - 1) ^ (((__int16)v23 - 1) ^ v23) & 0xFFFF0000;
          v24 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8), v35, v23);
          *(_QWORD *)&v35 = v23;
        }
        while ( v24 != v23 );
        v25 = *(_QWORD *)(*(_QWORD *)(v21 + 144) + 56LL);
      }
      if ( v20 == 2 )
      {
        v34 = 0;
        NtSetInformationWorkerFactory(v25, 9LL, &v34, 4LL);
      }
    }
    if ( v3 != 6 )
      break;
    v4 = *((_QWORD *)v1 + 23);
    v35 = 0LL;
    v5 = 0;
    _m_prefetchw((const void *)(v4 + 56));
    v6 = *(_QWORD *)(v4 + 56);
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 64));
        v5 = 0;
      }
      v7 = (volatile signed __int32 **)0xF000000000000000LL;
      v8 = (v6 - 1) ^ (v6 ^ (v6 - 1)) & 0xF000000000000000uLL;
      if ( v6 < 0 && ((v6 - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 )
      {
        v9 = (volatile signed __int32 *)(v4 + 64);
        v8 &= ~0x8000000000000000uLL;
        v5 = 1;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          for ( i = 0; i < 8; ++i )
          {
            v7 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
            if ( !*v7 )
            {
              *v7 = v9;
              break;
            }
          }
        }
        if ( _interlockedbittestandset64(v9, 0LL) )
          RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v4 + 64), (__int64)v7);
      }
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 56), v8, v6);
      v12 = v6 == v13;
      v6 = v13;
    }
    while ( !v12 );
    v1 = v36;
    if ( v5 )
    {
      v14 = *(_QWORD **)(v4 + 72);
      *(_QWORD *)(v4 + 72) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 64));
      if ( v14 )
      {
        do
        {
          v17 = (_QWORD *)*v14;
          ZwAlertThreadByThreadId(v14[1], v15, v16);
          v14 = v17;
        }
        while ( v17 );
      }
    }
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(*((_QWORD *)v1 + 24));
      *((_QWORD *)v1 + 24) = 0LL;
      goto LABEL_2;
    case 1:
      v32 = ZwReleaseMutant(v1[38], 0LL);
      v27 = v32;
      if ( v32 >= 0 )
      {
        v1[38] = 0;
        goto LABEL_2;
      }
      v31 = v1[38];
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_41:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v31;
      ExceptionRecord.ExceptionInformation[3] = v27;
LABEL_42:
      ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)v1 + 11);
      ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)v1 + 12);
      memset_thunk_772440563353939046(v1, 0, 0x100uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v33 = ZwSetEvent(v1[37], 0LL);
      v27 = v33;
      if ( v33 < 0 )
      {
        v31 = v1[37];
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_41;
      }
      v1[37] = 0;
      goto LABEL_2;
    case 3:
      v30 = ZwReleaseSemaphore(v1[39], v1[40], 0LL);
      if ( v30 < 0 )
      {
        *(__m128i *)&ExceptionRecord.ExceptionInformation[2] = _mm_unpacklo_epi32(
                                                                 _mm_loadl_epi64((const __m128i *)(v1 + 39)),
                                                                 (__m128i)0LL);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v30;
        goto LABEL_42;
      }
      *(_QWORD *)(v1 + 39) = 0LL;
      goto LABEL_2;
    case 5:
      TppBarrierAdjust((signed __int64 *)(*((_QWORD *)v1 + 22) + 32LL), -1, 0);
      *((_QWORD *)v1 + 22) = 0LL;
      goto LABEL_2;
    case 7:
      v26 = LdrUnloadDll(*((_QWORD *)v1 + 25));
      v27 = v26;
      if ( v26 < 0 )
      {
        v31 = *((_QWORD *)v1 + 25);
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_41;
      }
      *((_QWORD *)v1 + 25) = 0LL;
      goto LABEL_2;
    case 8:
      LdrUnloadDll(*((_QWORD *)v1 + 21));
      *((_QWORD *)v1 + 21) = 0LL;
      goto LABEL_2;
    default:
      goto LABEL_2;
  }
}
