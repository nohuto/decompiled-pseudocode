/*
 * XREFs of RaUnitAddToPendingList @ 0x140033130
 * Callers:
 *     RaidUnitClaimIrp @ 0x140014BFC (RaidUnitClaimIrp.c)
 * Callees:
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidUnitReenablePendingTimer @ 0x1400337B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaUnitAddToPendingList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rax
  ULONGLONG UnbiasedInterruptTime; // r15
  _DWORD *v12; // r12
  KSPIN_LOCK **v13; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  KSPIN_LOCK *v15; // rbx
  int v16; // r14d
  KSPIN_LOCK **v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r14d
  struct _PROCESSOR_NUMBER v22; // ecx
  char v23; // bp
  __int64 v24; // rsi
  ULONG v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  KSPIN_LOCK *i; // rdx
  KSPIN_LOCK v30; // rcx
  KSPIN_LOCK *v31; // rax
  KSPIN_LOCK **v32; // rbx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v5 = 96LL;
  if ( *(_BYTE *)(v4 + 2) != 40 )
    v5 = 48LL;
  v6 = *(_QWORD *)(v5 + v4);
  v7 = 40LL;
  v8 = *(_QWORD *)(v6 + 168);
  if ( *(_BYTE *)(v8 + 2) != 40 )
    v7 = 20LL;
  v9 = *(_DWORD *)(v7 + v8);
  if ( !*(_BYTE *)(a1 + 3368) && v9 <= 2 )
    v9 = 3;
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 && *(_QWORD *)(v10 + 4960) || (**(_DWORD **)(a1 + 560) & 1) != 0 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  *(_BYTE *)(v6 + 16) |= 2u;
  v12 = *(_DWORD **)(a1 + 560);
  v13 = (KSPIN_LOCK **)(v6 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  ProcNumber = 0;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
  v15 = (KSPIN_LOCK *)&v12[16 * (ProcessorIndexFromNumber % v12[2]) + 16];
  if ( v9 - 1 > 0xFFFFFFFC )
    v9 = 10;
  *(_DWORD *)(v6 + 84) = ProcessorIndexFromNumber % v12[2];
  v16 = 2 * v9;
  *(_QWORD *)(v6 + 88) = UnbiasedInterruptTime;
  *(_DWORD *)(v6 + 80) = v16;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v15 + 5, &LockHandle);
  v17 = (KSPIN_LOCK **)v15[1];
  if ( *v17 != v15 )
    goto LABEL_23;
  *v13 = v15;
  *(_QWORD *)(v6 + 56) = v17;
  *v17 = (KSPIN_LOCK *)v13;
  v15[1] = (KSPIN_LOCK)v13;
  v18 = *((_DWORD *)v15 + 12);
  if ( v18 == -1 || v18 == -2 )
    *((_DWORD *)v15 + 12) = v16;
  if ( (*v12 & 1) != 0 )
  {
    for ( i = (KSPIN_LOCK *)v15[3]; i != v15 + 2; i = (KSPIN_LOCK *)i[1] )
    {
      if ( *(_QWORD *)(v6 + 88) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v6 + 80)) >= i[3] + (unsigned int)(5000000 * *((_DWORD *)i + 4)) )
      {
        *(_QWORD *)(v6 + 64) = *i;
        *(_QWORD *)(*i + 8) = v6 + 64;
        *i = v6 + 64;
        *(_DWORD *)(v6 + 96) |= 1u;
        *(_QWORD *)(v6 + 72) = i;
        goto LABEL_16;
      }
    }
    v30 = v15[2];
    v31 = (KSPIN_LOCK *)(v6 + 64);
    v32 = (KSPIN_LOCK **)(v15 + 2);
    if ( *(KSPIN_LOCK ***)(v30 + 8) == v32 )
    {
      *v31 = v30;
      *(_QWORD *)(v6 + 72) = v32;
      *(_QWORD *)(v30 + 8) = v31;
      *v32 = v31;
      *(_DWORD *)(v6 + 96) |= 1u;
      goto LABEL_16;
    }
LABEL_23:
    __fastfail(3u);
  }
  *(_DWORD *)(v6 + 96) &= ~1u;
LABEL_16:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    LockHandle.LockQueue = 0LL;
    IoGetActivityIdIrp(a2, &LockHandle);
    if ( byte_140173442 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v27, v26, (__int64)&LockHandle, v28, 3);
  }
  if ( (unsigned __int8)RaidUnitIsRegisteredForIdleDetection(a1) || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5024LL) )
  {
    v21 = 1;
    v22 = (struct _PROCESSOR_NUMBER)1;
    if ( (*(_DWORD *)(a1 + 512) & 4) == 0 )
    {
      v22 = (struct _PROCESSOR_NUMBER)(unsigned __int8)_interlockedbittestandset(
                                                         (volatile signed __int32 *)(a1 + 512),
                                                         2u);
      ProcNumber = v22;
    }
    if ( *(_BYTE *)(a1 + 3396) )
    {
      v23 = *(_BYTE *)(a1 + 3368);
      v24 = 500LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( !v23 )
        v24 = 2000LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
      v25 = 50;
      if ( !v23 )
        v25 = 300;
      KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)(-10000 * v24), v24, v25, (PKDPC)(a1 + 1120));
      if ( !v23 )
        v21 = 4;
      *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL) = v21;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 504), 0xDu);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_BYTE *)(a1 + 3396) = 0;
    }
    else if ( !*(_DWORD *)&v22 )
    {
      RaidUnitReenablePendingTimer(a1, 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 3396) )
  {
    LOBYTE(v19) = 1;
    RaidUnitReenablePendingTimer(v20, v19);
    *(_BYTE *)(a1 + 3396) = 0;
  }
}
