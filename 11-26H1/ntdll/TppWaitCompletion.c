/*
 * XREFs of TppWaitCompletion @ 0x180016C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180088220 (TppETWTimerCancelled.c)
 *     TppPHExtractMin @ 0x180088E30 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180088FF0 (TppUpdateSubQueueTimer.c)
 *     TppSetupNextWait @ 0x1800C7470 (TppSetupNextWait.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWaitCompletion(__int64 a1, unsigned __int64 i, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  _QWORD *SchedulerSharedDataSlot; // r8
  char v7; // al
  _RTL_SRWLOCK *v8; // rbp
  bool v9; // di
  int v10; // edi
  signed int v11; // edi
  char v12; // al
  __int64 v14; // r15
  _RTL_SRWLOCK *v15; // r15
  __int64 v16; // rcx
  unsigned __int64 Value; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // r8
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  _QWORD v34[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( !SchedulerSharedDataSlot[(unsigned int)i] )
      {
        SchedulerSharedDataSlot[(unsigned int)i] = v3;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v3, i);
  v7 = *(_BYTE *)(a3 + 354);
  v8 = (_RTL_SRWLOCK *)(*(_QWORD *)(a3 + 144) + 112LL);
  v9 = (v7 & 2) != 0;
  if ( (v7 & 1) == 0 )
  {
    *(_QWORD *)(a3 + 328) = 0LL;
LABEL_8:
    v10 = 1;
    goto LABEL_9;
  }
  v14 = 1LL;
  if ( (v7 & 2) == 0 )
    v14 = 16LL;
  v15 = &v8[v14];
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    TppETWTimerCancelled(v15, a3);
  RtlAcquireSRWLockExclusive(v8);
  if ( !*(_BYTE *)(a3 + 352) )
  {
    RtlReleaseSRWLockExclusive(v8);
    *(_BYTE *)(a3 + 354) |= 4u;
    v34[1] = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw((const void *)(a3 + 336));
    v32 = *(_QWORD *)(a3 + 336);
    do
    {
      v33 = v32;
      v34[0] = v32;
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 336), (signed __int64)v34, v32);
    }
    while ( v32 != v33 );
    RtlReleaseSRWLockExclusive(v3);
    NtWaitForAlertByThreadId((PVOID)(a3 + 336), 0LL);
    RtlAcquireSRWLockExclusive(v3);
    goto LABEL_8;
  }
  Value = v15[2].Value;
  v18 = a3 + 248;
  if ( a3 + 248 != Value )
  {
    v19 = *(_QWORD *)v18;
    if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 )
      goto LABEL_28;
    v20 = *(_QWORD **)(a3 + 256);
    if ( *v20 != v18
      || (*v20 = v19,
          *(_QWORD *)(v19 + 8) = v20,
          v21 = (_QWORD *)(a3 + 264),
          *(_QWORD *)(a3 + 256) = a3 + 248,
          *(_QWORD *)v18 = v18,
          v22 = *(_QWORD *)(a3 + 264),
          v23 = (_QWORD *)v15[2].Value,
          *(_QWORD *)(v22 + 8) != a3 + 264) )
    {
LABEL_28:
      __fastfail(3u);
    }
    v23[1] = v21;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *v21 = v23;
    Value = a3 + 248;
    v15[2].Value = v18;
  }
  *(_QWORD *)(Value + 32) = 0LL;
  TppPHExtractMin(&v15[2]);
  v24 = v15[1].Value;
  v25 = a3 + 288;
  if ( a3 + 288 != v24 )
  {
    v26 = *(_QWORD *)v25;
    if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
      goto LABEL_28;
    v27 = *(_QWORD **)(a3 + 296);
    if ( *v27 != v25 )
      goto LABEL_28;
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    v28 = (_QWORD *)(a3 + 304);
    *(_QWORD *)(a3 + 296) = a3 + 288;
    *(_QWORD *)v25 = v25;
    v29 = *(_QWORD *)(a3 + 304);
    v30 = (_QWORD *)v15[1].Value;
    if ( *(_QWORD *)(v29 + 8) != a3 + 304 )
      goto LABEL_28;
    v30[1] = v28;
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    *v28 = v30;
    v24 = a3 + 288;
    v15[1].Value = v25;
  }
  *(_QWORD *)(v24 + 32) = 0LL;
  TppPHExtractMin(&v15[1]);
  TppUpdateSubQueueTimer(v15, v9);
  *(_BYTE *)(a3 + 352) = 0;
  RtlReleaseSRWLockExclusive(v8);
  *(_DWORD *)(a3 + 348) = 0;
  v10 = 0;
  *(_QWORD *)(a3 + 328) = 0LL;
  *(_BYTE *)(a3 + 354) = 0;
LABEL_9:
  v11 = v10 - 1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL);
  v12 = *(_BYTE *)(a3 + 464);
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v31 = a3 + 384;
    if ( (v12 & 2) == 0 )
      v31 = 0LL;
    v11 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), v31);
  }
  *(_BYTE *)(a3 + 464) = 0;
  if ( v11 <= 0 )
  {
    RtlReleaseSRWLockExclusive(v3);
    if ( v11 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v11) == -v11 )
      (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)a3, v11);
    RtlReleaseSRWLockExclusive(v3);
  }
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
