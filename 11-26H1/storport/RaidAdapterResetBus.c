/*
 * XREFs of RaidAdapterResetBus @ 0x1400349BC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitRequestTimeout @ 0x1400346C8 (RaidUnitRequestTimeout.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x140057444 (RaidAdapterStorageResetBusIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1400A6A10 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1400A8384 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x14000ECF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     StorGetOutstandingIoCount @ 0x14005C75C (StorGetOutstandingIoCount.c)
 *     RaCallMiniportResetBus @ 0x140060048 (RaCallMiniportResetBus.c)
 *     RaidAdapterSetPauseTimer @ 0x140068E50 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int OutstandingIoCount; // r13d
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v14; // rdx
  ULONGLONG v15; // rbx
  unsigned int v16; // r14d
  ULONGLONG v17; // rax
  int v18; // esi
  ULONGLONG v19; // r15
  int v20; // esi
  unsigned int v21; // ebx
  PSLIST_ENTRY v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rcx
  KIRQL v26; // bl
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  unsigned __int8 v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v35; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+50h] [rbp-B0h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38[18]; // [rsp+80h] [rbp-80h] BYREF

  memset(&v36, 0, sizeof(v36));
  SListHead = 0LL;
  if ( a2 >= *(_BYTE *)(a1 + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 324), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4728) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4736)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4728) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v36);
  *(_DWORD *)(a1 + 5152) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1, v10, v11);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  LOBYTE(v14) = a2;
  v15 = UnbiasedInterruptTime;
  v16 = RaCallMiniportResetBus(a1 + 376, v14);
  v17 = KeQueryUnbiasedInterruptTime();
  v18 = *(_DWORD *)(a1 + 5152);
  v19 = v17 - v15;
  v31 = v18;
  if ( *(int *)(a1 + 4728) > 1 )
  {
    v20 = 0;
    v21 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v22 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v22 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4736) + ((unsigned __int64)(HIDWORD(v22[1].Next) % v21) << 6)),
          v22);
        ++v20;
      }
    }
    while ( v20 < *(_DWORD *)(a1 + 4728) );
    v18 = v31;
  }
  RaidAdapterReleaseStartIoLock(a1, &v36);
  v23 = *(_DWORD *)(a1 + 600);
  if ( v23 )
  {
    v24 = v23 / 0xF4240 + 1;
    if ( v23 == 1000000 * (v23 / 0xF4240) )
      v24 = v23 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4200, a1 + 4264, v24);
  }
  else
  {
    v26 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v26);
  }
  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(v25, 0x400000000000LL) )
    {
      v38[5] = 16LL;
      v38[4] = a1 + 5128;
      v31 = *(_DWORD *)(a1 + 56);
      v38[6] = (__int64)&v31;
      v38[8] = (__int64)&v30;
      v38[10] = (__int64)&v32;
      v38[12] = (__int64)&v35;
      v38[14] = (__int64)&v33;
      v38[16] = (__int64)&v34;
      v38[7] = 4LL;
      v30 = a2;
      v38[9] = 1LL;
      v32 = v16;
      v38[11] = 4LL;
      v35 = v19;
      v38[13] = 8LL;
      v33 = OutstandingIoCount;
      v38[15] = 4LL;
      v34 = v18;
      v38[17] = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v27, (int)&dword_14015FE21, v28, v29, 9u, (__int64)v38);
    }
  }
  *(_DWORD *)(a1 + 324) = 0;
  return v16;
}
