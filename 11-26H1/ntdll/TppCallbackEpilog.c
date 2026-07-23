/*
 * XREFs of TppCallbackEpilog @ 0x18002A2B0
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     ZwReleaseSemaphore @ 0x18015EF80 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18015F240 (ZwReleaseMutant.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  unsigned int *v1; // rsi
  unsigned int v2; // eax
  int v3; // ecx
  _RTL_SRWLOCK *v4; // r14
  char v5; // r15
  signed __int64 Value; // rdi
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // rbx
  volatile signed __int32 *v9; // r8
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // r9
  __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  void *v23; // rcx
  NTSTATUS v24; // eax
  unsigned __int64 v25; // rcx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  NTSTATUS v28; // eax
  unsigned __int64 v29; // rax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  int WorkerFactoryInformation; // [rsp+20h] [rbp-99h] BYREF
  __int128 v33; // [rsp+28h] [rbp-91h]
  unsigned int *v34; // [rsp+38h] [rbp-81h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-79h] BYREF

  v34 = a1;
  v1 = a1;
  WorkerFactoryInformation = 0;
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
        v16 = *((_QWORD *)v1 + 23);
        *((_QWORD *)v1 + 23) = 0LL;
        (*(void (**)(void))(*(_QWORD *)(v16 + 8) + 8LL))();
      }
      if ( v3 != 4 )
        break;
      v17 = *((_QWORD *)v1 + 16);
      v18 = v1[18];
      v19 = *((_QWORD *)v1 + 23);
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 416));
        _InterlockedDecrement((volatile signed __int32 *)(v17 + 420));
        _m_prefetchw((const void *)(v17 + 8));
        v26 = *(_QWORD *)(v17 + 8);
        *(_QWORD *)&v33 = v26;
        do
        {
          LODWORD(v33) = ((__int16)v26 - 1) ^ (((__int16)v26 - 1) ^ v26) & 0xFFFF0000;
          v27 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 8), v33, v26);
          *(_QWORD *)&v33 = v26;
        }
        while ( v27 != v26 );
        v23 = *(void **)(v17 + 56);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 144) + 416LL));
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 144) + 420LL));
        v20 = *(_QWORD *)(v19 + 144);
        _m_prefetchw((const void *)(v20 + 8));
        v21 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)&v33 = v21;
        do
        {
          LODWORD(v33) = ((__int16)v21 - 1) ^ (((__int16)v21 - 1) ^ v21) & 0xFFFF0000;
          v22 = v21;
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v33, v21);
          *(_QWORD *)&v33 = v21;
        }
        while ( v22 != v21 );
        v23 = *(void **)(*(_QWORD *)(v19 + 144) + 56LL);
      }
      if ( v18 == 2 )
      {
        WorkerFactoryInformation = 0;
        NtSetInformationWorkerFactory(v23, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
      }
    }
    if ( v3 != 6 )
      break;
    v4 = (_RTL_SRWLOCK *)*((_QWORD *)v1 + 23);
    v33 = 0LL;
    v5 = 0;
    _m_prefetchw(&v4[7]);
    Value = v4[7].Value;
    do
    {
      if ( v5 )
      {
        RtlReleaseSRWLockExclusive(v4 + 8);
        v5 = 0;
      }
      v7 = (volatile signed __int32 **)0xF000000000000000LL;
      v8 = (Value - 1) ^ (Value ^ (Value - 1)) & 0xF000000000000000uLL;
      if ( Value < 0 && ((Value - 1) & 0xFFFFFFFFFFFFFFFLL) == 0 )
      {
        v9 = (volatile signed __int32 *)&v4[8];
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
          RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&v4[8], (unsigned __int64)v7);
      }
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&v4[7], v8, Value);
      v12 = Value == v13;
      Value = v13;
    }
    while ( !v12 );
    v1 = v34;
    if ( v5 )
    {
      v14 = v4[9].Value;
      v4[9].Value = 0LL;
      RtlReleaseSRWLockExclusive(v4 + 8);
      if ( v14 )
      {
        do
        {
          v15 = *(_QWORD *)v14;
          ZwAlertThreadByThreadId(*(HANDLE *)(v14 + 8));
          v14 = v15;
        }
        while ( v15 );
      }
    }
  }
  switch ( v3 )
  {
    case 0:
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v1 + 24));
      *((_QWORD *)v1 + 24) = 0LL;
      goto LABEL_2;
    case 1:
      v30 = ZwReleaseMutant((HANDLE)v1[38], 0LL);
      v25 = v30;
      if ( v30 >= 0 )
      {
        v1[38] = 0;
        goto LABEL_2;
      }
      v29 = v1[38];
      ExceptionRecord.ExceptionCode = -1073740019;
LABEL_41:
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[2] = v29;
      ExceptionRecord.ExceptionInformation[3] = v25;
LABEL_42:
      ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)v1 + 11);
      ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)v1 + 12);
      memset_thunk_772440563353939046(v1, 0, 0x100uLL);
      RtlRaiseException(&ExceptionRecord);
      return;
    case 2:
      v31 = ZwSetEvent((HANDLE)v1[37], 0LL);
      v25 = v31;
      if ( v31 < 0 )
      {
        v29 = v1[37];
        ExceptionRecord.ExceptionCode = -1073740021;
        goto LABEL_41;
      }
      v1[37] = 0;
      goto LABEL_2;
    case 3:
      v28 = ZwReleaseSemaphore((HANDLE)v1[39], v1[40], 0LL);
      if ( v28 < 0 )
      {
        *(__m128i *)&ExceptionRecord.ExceptionInformation[2] = _mm_unpacklo_epi32(
                                                                 _mm_loadl_epi64((const __m128i *)(v1 + 39)),
                                                                 (__m128i)0LL);
        ExceptionRecord.ExceptionCode = -1073740020;
        ExceptionRecord.NumberParameters = 5;
        ExceptionRecord.ExceptionInformation[4] = v28;
        goto LABEL_42;
      }
      *(_QWORD *)(v1 + 39) = 0LL;
      goto LABEL_2;
    case 5:
      TppBarrierAdjust((_RTL_SRWLOCK *)(*((_QWORD *)v1 + 22) + 32LL), -1, 0);
      *((_QWORD *)v1 + 22) = 0LL;
      goto LABEL_2;
    case 7:
      v24 = LdrUnloadDll(*((PVOID *)v1 + 25));
      v25 = v24;
      if ( v24 < 0 )
      {
        v29 = *((_QWORD *)v1 + 25);
        ExceptionRecord.ExceptionCode = -1073740018;
        goto LABEL_41;
      }
      *((_QWORD *)v1 + 25) = 0LL;
      goto LABEL_2;
    case 8:
      LdrUnloadDll(*((PVOID *)v1 + 21));
      *((_QWORD *)v1 + 21) = 0LL;
      goto LABEL_2;
    default:
      goto LABEL_2;
  }
}
