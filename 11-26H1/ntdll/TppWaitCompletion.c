/*
 * XREFs of TppWaitCompletion @ 0x18002BB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180067DD0 (TppETWTimerCancelled.c)
 *     TppPHExtractMin @ 0x1800689E0 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180068BA0 (TppUpdateSubQueueTimer.c)
 *     TppSetupNextWait @ 0x1800C9CF0 (TppSetupNextWait.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWaitCompletion(__int64 a1, __int64 i, __int64 a3)
{
  volatile signed __int64 *v3; // rsi
  _QWORD *SchedulerSharedDataSlot; // r8
  char v7; // al
  __int64 v8; // rbp
  bool v9; // di
  int v10; // edi
  signed int v11; // edi
  char v12; // al
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 **v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // r9
  __int64 v25; // rax
  __int64 *v26; // r11
  __int64 *v27; // rax
  __int64 **v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  signed __int64 v34; // rax
  signed __int64 v35; // rdx
  _QWORD v36[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (volatile signed __int64 *)(a3 + 240);
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
    RtlpAcquireSRWLockExclusiveContended(v3, i);
  v7 = *(_BYTE *)(a3 + 354);
  v8 = *(_QWORD *)(a3 + 144) + 112LL;
  v9 = (v7 & 2) != 0;
  if ( (v7 & 1) == 0 )
  {
    *(_QWORD *)(a3 + 328) = 0LL;
LABEL_8:
    v10 = 1;
    goto LABEL_9;
  }
  v14 = 8LL;
  if ( (v7 & 2) == 0 )
    v14 = 128LL;
  v15 = v8 + v14;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    TppETWTimerCancelled(v15, a3);
  RtlAcquireSRWLockExclusive(v8);
  if ( !*(_BYTE *)(a3 + 352) )
  {
    RtlReleaseSRWLockExclusive(v8, v17);
    *(_BYTE *)(a3 + 354) |= 4u;
    v36[1] = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw((const void *)(a3 + 336));
    v34 = *(_QWORD *)(a3 + 336);
    do
    {
      v35 = v34;
      v36[0] = v34;
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 336), (signed __int64)v36, v34);
    }
    while ( v34 != v35 );
    RtlReleaseSRWLockExclusive(v3, v35);
    NtWaitForAlertByThreadId(a3 + 336, 0LL);
    RtlAcquireSRWLockExclusive(v3);
    goto LABEL_8;
  }
  v18 = *(_QWORD *)(v15 + 16);
  v19 = (__int64 *)(a3 + 248);
  if ( a3 + 248 != v18 )
  {
    v20 = (__int64 *)*v19;
    if ( *(__int64 **)(*v19 + 8) != v19 )
      goto LABEL_28;
    v21 = *(__int64 ***)(a3 + 256);
    if ( *v21 != v19
      || (*v21 = v20,
          v20[1] = (__int64)v21,
          v22 = (_QWORD *)(a3 + 264),
          *(_QWORD *)(a3 + 256) = a3 + 248,
          *v19 = (__int64)v19,
          v23 = *(_QWORD *)(a3 + 264),
          v24 = *(_QWORD **)(v15 + 16),
          *(_QWORD *)(v23 + 8) != a3 + 264) )
    {
LABEL_28:
      __fastfail(3u);
    }
    v24[1] = v22;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    *v22 = v24;
    v18 = a3 + 248;
    *(_QWORD *)(v15 + 16) = v19;
  }
  *(_QWORD *)(v18 + 32) = 0LL;
  TppPHExtractMin(v15 + 16);
  v25 = *(_QWORD *)(v15 + 8);
  v26 = (__int64 *)(a3 + 288);
  if ( a3 + 288 != v25 )
  {
    v27 = (__int64 *)*v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
      goto LABEL_28;
    v28 = *(__int64 ***)(a3 + 296);
    if ( *v28 != v26 )
      goto LABEL_28;
    *v28 = v27;
    v27[1] = (__int64)v28;
    v29 = (_QWORD *)(a3 + 304);
    *(_QWORD *)(a3 + 296) = a3 + 288;
    *v26 = (__int64)v26;
    v30 = *(_QWORD *)(a3 + 304);
    v31 = *(_QWORD **)(v15 + 8);
    if ( *(_QWORD *)(v30 + 8) != a3 + 304 )
      goto LABEL_28;
    v31[1] = v29;
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
    *v29 = v31;
    v25 = a3 + 288;
    *(_QWORD *)(v15 + 8) = v26;
  }
  *(_QWORD *)(v25 + 32) = 0LL;
  TppPHExtractMin(v15 + 8);
  TppUpdateSubQueueTimer(v15, v9);
  *(_BYTE *)(a3 + 352) = 0;
  RtlReleaseSRWLockExclusive(v8, v32);
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
    v33 = a3 + 384;
    if ( (v12 & 2) == 0 )
      v33 = 0LL;
    v11 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), v33);
  }
  *(_BYTE *)(a3 + 464) = 0;
  if ( v11 <= 0 )
  {
    RtlReleaseSRWLockExclusive(v3, i);
    if ( v11 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v11) == -v11 )
      (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)a3, v11);
    RtlReleaseSRWLockExclusive(v3, i);
  }
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
