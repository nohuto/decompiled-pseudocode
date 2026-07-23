/*
 * XREFs of KeStartThread @ 0x140201AAC
 * Callers:
 *     KiStartPrcbThread @ 0x1405EEF90 (KiStartPrcbThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KeFindBiasedSetBitGroupMask @ 0x1402005D0 (KeFindBiasedSetBitGroupMask.c)
 *     KeComputeGroupMask @ 0x140200A08 (KeComputeGroupMask.c)
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x140201100 (KeSelectInitialIdealProcessorForThread.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402018E4 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KiInitializeForegroundBoostThread @ 0x140202D64 (KiInitializeForegroundBoostThread.c)
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiFreezeSingleThread @ 0x14020908C (KiFreezeSingleThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14022BCC0 (KiUpdateNodeAffinitizedFlag.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     KiExtendProcessAffinity @ 0x1405FBEA8 (KiExtendProcessAffinity.c)
 *     EtwTraceThreadSchedulingGroup @ 0x1406C8CBC (EtwTraceThreadSchedulingGroup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, struct _KAFFINITY_EX *a2, unsigned int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  unsigned __int64 v7; // rdi
  char v8; // al
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  _QWORD *v11; // r15
  __int64 v12; // r13
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  unsigned __int16 Count; // dx
  unsigned __int16 i; // cx
  unsigned __int16 *v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // r10
  struct _KAFFINITY_EX *v24; // r11
  unsigned __int16 j; // dx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  struct _KSCHEDULING_GROUP *v29; // rdx
  __int64 v30; // rdx
  __int64 result; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  char v34; // [rsp+30h] [rbp-D0h] BYREF
  char v35; // [rsp+31h] [rbp-CFh]
  __int128 v36; // [rsp+38h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v39; // [rsp+70h] [rbp-90h] BYREF

  v34 = 0;
  memset_0(&v39.8, 0, sizeof(v39.8));
  *(_QWORD *)&v39.Count = 2097153LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(&v39.8, 0, sizeof(v39.8));
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 184);
  v35 = 0;
  v36 = 0LL;
  KiAcquireProcessLockExclusive(v7, &v34);
  KiAdjustProcessIdealProcessorSetsForThreadCreation(v7);
  *(_DWORD *)(a1 + 120) ^= ((unsigned __int8)*(_DWORD *)(a1 + 120) ^ (unsigned __int8)(4 * *(_DWORD *)(v7 + 136))) & 8;
  v8 = *(_BYTE *)(v7 + 144);
  *(_BYTE *)(a1 + 563) = v8;
  *(_BYTE *)(a1 + 195) = v8;
  *(_BYTE *)(a1 + 795) = 32;
  if ( a2 )
  {
    Count = a2->Count;
    for ( i = 0; i < Count; ++i )
    {
      if ( a2->Bitmap[i] )
      {
        v21 = *(unsigned __int16 **)(v7 + 80);
        v22 = *v21;
        if ( Count >= (unsigned __int16)v22 )
        {
          v23 = *v21;
          v24 = a2;
          v22 = Count;
        }
        else
        {
          v23 = a2->Count;
          v24 = *(struct _KAFFINITY_EX **)(v7 + 80);
        }
        for ( j = 0; j < v23; ++j )
        {
          v26 = a2->Bitmap[j];
          if ( (v26 & *(_QWORD *)&v21[4 * j + 4]) != v26 )
          {
LABEL_32:
            KiExtendProcessAffinity(v7, a2, v21, v22);
            v35 = 1;
            goto LABEL_28;
          }
        }
        if ( v24 != (struct _KAFFINITY_EX *)v21 )
        {
          while ( j < (unsigned __int16)v22 )
          {
            if ( a2->Bitmap[j] )
              goto LABEL_32;
            ++j;
          }
        }
LABEL_28:
        CurrentThread = *(unsigned __int16 *)(v7 + 416);
        if ( (unsigned __int16)CurrentThread >= a2->Count || !a2->Bitmap[CurrentThread] )
        {
          v38 = 0LL;
          KeComputeGroupMask(&a2->Count, &v38);
          v28 = ExGenRandom(1, v27);
          LOWORD(CurrentThread) = KeFindBiasedSetBitGroupMask((unsigned __int64 *)&v38, v28);
          WORD4(v36) = CurrentThread;
          goto LABEL_5;
        }
        goto LABEL_4;
      }
    }
  }
  RtlpCopyAffinityEx(&v39, v39.Size, *(struct _KAFFINITY_EX **)(v7 + 80));
  a2 = &v39;
  if ( v7 == *(_QWORD *)(CurrentThread + 544) )
    LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
  else
    LOWORD(CurrentThread) = *(_WORD *)(v7 + 416);
LABEL_4:
  WORD4(v36) = CurrentThread;
LABEL_5:
  if ( (unsigned __int16)CurrentThread >= a2->Count )
    v9 = 0LL;
  else
    v9 = a2->Bitmap[(unsigned __int16)CurrentThread];
  *(_QWORD *)&v36 = v9;
  RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 552), *(_WORD *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v10 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v10 = (unsigned __int16)KeSelectInitialIdealProcessorForThread(v7, (__int64)&v36);
  }
  *(_DWORD *)(a1 + 196) = v10;
  v11 = (_QWORD *)(v7 + 48);
  *(_DWORD *)(a1 + 588) = v10;
  v12 = KiProcessorBlock[v10];
  if ( (_QWORD *)*v11 == v11 && (_UNKNOWN *)v7 != &unk_140FC9F40 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v32 = (_QWORD *)qword_140F26B68;
    v33 = (_QWORD *)(v7 + 272);
    if ( *(__int64 **)qword_140F26B68 != &qword_140F26B60 )
      goto LABEL_13;
    *(_QWORD *)(v7 + 280) = qword_140F26B68;
    *v33 = &qword_140F26B60;
    *v32 = v33;
    qword_140F26B68 = v7 + 272;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  v13 = *(_DWORD *)(a1 + 120) ^ ((unsigned __int16)*(_DWORD *)(a1 + 120) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v7 + 136) << 6)) & 0x100;
  *(_DWORD *)(a1 + 120) = v13;
  v14 = *(unsigned __int8 *)(v7 + 145);
  *(_BYTE *)(a1 + 651) = v14;
  v15 = (unsigned int)(KiCyclesPerClockQuantum * v14);
  if ( (v13 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v15;
  KiAcquireKobjectLockSafe(v7);
  v17 = *(_QWORD **)(v7 + 56);
  v18 = (_QWORD *)(a1 + 760);
  if ( (_QWORD *)*v17 != v11 )
LABEL_13:
    __fastfail(3u);
  *v18 = v11;
  *(_QWORD *)(a1 + 768) = v17;
  *v17 = v18;
  *(_QWORD *)(v7 + 56) = v18;
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  if ( *(_DWORD *)(v7 + 336) )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, 0LL);
  if ( (*(_DWORD *)(v7 + 136) & 8) != 0 )
  {
    LOBYTE(v16) = 1;
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, v16);
  }
  v29 = *(struct _KSCHEDULING_GROUP **)(v7 + 304);
  if ( v29 )
    KiSetThreadSchedulingGroup((struct _KTHREAD *)a1, v29);
  KiUpdateSharedReadyQueueAffinityThread(v12, a1);
  if ( *(_QWORD *)(v7 + 400) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  KiInitializeForegroundBoostThread((struct _KTHREAD *)a1);
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = *(_DWORD *)(v7 + 68);
  if ( dword_140FBF424 < (unsigned int)KiHgsPlusConfiguration )
    *(_BYTE *)(a1 + 517) = dword_140FBF424;
  LOBYTE(v30) = v34;
  result = KiReleaseProcessLockExclusive(v7, v30);
  if ( v35 )
  {
    KiUpdateProcessAvailableCpuState(v7, 0LL);
    result = KiNotifyAvailableCpusChangeProcess(v7);
  }
  if ( _bittest((const signed __int32 *)&xmmword_140FC0C10, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v10);
  if ( _bittest((const signed __int32 *)&xmmword_140FC0C10, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v10);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    result = EtwTraceThreadAffinity(a1, (unsigned __int16)CurrentThread, 0, 0, (__int64)a2, 1334);
  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    result = KiCpuPartitionCheckAffinitization(v7, a1, a2, 0LL);
  if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
    result = EtwTraceThreadSchedulingGroup(a1, 0LL, *(_QWORD *)(a1 + 104));
  _InterlockedAdd((volatile signed __int32 *)(v7 + 264), 8u);
  return result;
}
