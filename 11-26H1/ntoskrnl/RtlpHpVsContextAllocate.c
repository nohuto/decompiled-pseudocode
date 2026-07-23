/*
 * XREFs of RtlpHpVsContextAllocate @ 0x14024B710
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14024C3B0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x14024C60C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14024C900 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsContextHandleContention @ 0x1403560AC (RtlpHpVsContextHandleContention.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 */

_BYTE *__fastcall RtlpHpVsContextAllocate(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  char v4; // al
  int v5; // r10d
  _BYTE *v7; // r15
  __int64 v8; // rdi
  unsigned int v9; // r10d
  unsigned __int16 *v10; // r13
  volatile signed __int32 *v11; // r12
  struct _KTHREAD *v12; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rax
  _BYTE *v16; // r9
  __int64 v17; // r8
  unsigned int v18; // edx
  _BYTE *v19; // rdi
  _BYTE *v20; // r10
  int v21; // ecx
  unsigned __int64 v22; // r10
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  struct _KTHREAD *v27; // rcx
  bool v28; // zf
  __int64 v29; // rbx
  unsigned __int16 *v30; // r8
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  unsigned int v36; // ebx
  __int16 v37; // cx
  unsigned int v39; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rcx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+28h] [rbp-80h]
  int v49; // [rsp+30h] [rbp-78h]
  __int64 v50; // [rsp+38h] [rbp-70h]
  unsigned int v51; // [rsp+40h] [rbp-68h]
  __int64 v52; // [rsp+48h] [rbp-60h]
  __int128 v53; // [rsp+50h] [rbp-58h] BYREF
  __int64 v54; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v56; // [rsp+B0h] [rbp+8h]
  unsigned int v57; // [rsp+B8h] [rbp+10h]

  v57 = a2;
  v4 = *((_BYTE *)a1 + 4);
  v5 = a3 + 2;
  if ( (_DWORD)a2 == a3 )
    v5 = a3;
  v7 = 0LL;
  LOBYTE(v8) = 0;
  LOWORD(v51) = 0;
  v49 = 0;
  v9 = (unsigned int)(v5 + 15) >> 4;
  LOBYTE(v50) = 0;
  v56 = v9 + (v4 & 1) + 1;
  HIWORD(v51) = v9 + (v4 & 1) + 1;
  v53 = 0LL;
  v54 = 0LL;
  v52 = (unsigned __int8)(a1[1] & KeGetCurrentThread()[1].SchedulerApcFill3[45]);
  v10 = &a1[32 * (unsigned __int64)a1[32 * *a1 + 2 * v52]];
  v11 = (volatile signed __int32 *)(v10 + 4);
  if ( (*((_BYTE *)a1 + 5) & 1) != 0 )
  {
    v12 = (struct _KTHREAD *)*((_QWORD *)&v53 + 1);
  }
  else
  {
    v12 = (struct _KTHREAD *)(v10 + 4);
    *((_QWORD *)&v53 + 1) = v10 + 4;
    if ( *((_BYTE *)a1 + 3) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      LOBYTE(v8) = CurrentIrql;
      LOBYTE(v50) = CurrentIrql;
      v54 = CurrentIrql;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10 + 4) )
        goto LABEL_10;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v41 = KeAbPreAcquire((struct _KTHREAD *)(v10 + 4), 0LL);
      if ( !_interlockedbittestandset64(v11, 0LL) )
      {
        if ( v41 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *(_BYTE *)(v41 + 33) |= 2u;
          else
            *(_BYTE *)(v41 + 10) = 1;
        }
        goto LABEL_10;
      }
      if ( v41 )
        KeAbPostReleaseEx((struct _KTHREAD *)(v10 + 4));
      KeLeaveGuardedRegion();
    }
    v28 = (*((_BYTE *)a1 + 5) & 1) == 0;
    v12 = 0LL;
    *((_QWORD *)&v53 + 1) = 0LL;
    v49 = 1;
    if ( v28 )
    {
      v28 = *((_BYTE *)a1 + 3) == 0;
      v42 = (struct _KTHREAD *)(v10 + 4);
      v12 = (struct _KTHREAD *)(v10 + 4);
      *((_QWORD *)&v53 + 1) = v10 + 4;
      if ( v28 )
      {
        v43 = KeGetCurrentThread();
        --v43->SpecialApcDisable;
        v44 = KeAbPreAcquire(v42, 0LL);
        v45 = v44;
        if ( _interlockedbittestandset64(v11, 0LL) )
          ExfAcquirePushLockExclusiveEx(v10 + 4, v44, v10 + 4);
        if ( v45 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *(_BYTE *)(v45 + 33) |= 2u;
          else
            *(_BYTE *)(v45 + 10) = 1;
        }
      }
      else
      {
        v8 = ExAcquireSpinLockExclusive(&v42->Header.Lock);
        LOBYTE(v50) = v8;
        v54 = v8;
      }
    }
  }
LABEL_10:
  while ( 1 )
  {
    v14 = (unsigned __int64 *)(v10 + 8);
    if ( (*((_QWORD *)v10 + 3) & 1) != 0 )
      v15 = *v14 ? *v14 ^ (unsigned __int64)v14 : 0LL;
    else
      v15 = *v14;
    v16 = 0LL;
    v17 = *((_QWORD *)v10 + 3) & 1LL;
    while ( v15 )
    {
      v18 = *(_DWORD *)&PspTlsContext.Timer.Processor ^ (v15 - 8) ^ *(_QWORD *)(v15 - 8);
      if ( v51 < v18 )
      {
        v24 = *(_QWORD *)v15;
        v16 = (_BYTE *)v15;
      }
      else
      {
        if ( v51 <= v18 )
        {
          v16 = (_BYTE *)v15;
          goto LABEL_17;
        }
        v24 = *(_QWORD *)(v15 + 8);
      }
      if ( (_DWORD)v17 && v24 )
        v15 ^= v24;
      else
        v15 = v24;
    }
    if ( v16 )
      break;
    if ( (*((_BYTE *)a1 + 5) & 1) == 0 )
    {
      if ( *((_BYTE *)a1 + 3) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          v12->Header.LockNV = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
        __writecr8((unsigned __int8)v8);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v12->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v12);
        KeAbPostRelease(v12);
        v27 = KeGetCurrentThread();
        v28 = v27->SpecialApcDisable++ == -1;
        if ( v28 && ($241382875694CED3D471BC5892DE3337 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
          KiCheckForKernelApcDelivery(v27, v25, v17, v26, v47, v48);
      }
      *((_QWORD *)&v53 + 1) = 0LL;
      v12 = 0LL;
    }
    v29 = RtlpHpVsSubsegmentCreate(a1, v56, v17);
    if ( !v29 )
      goto LABEL_60;
    if ( (*((_BYTE *)a1 + 5) & 1) == 0 )
    {
      v12 = (struct _KTHREAD *)(v10 + 4);
      *((_QWORD *)&v53 + 1) = v10 + 4;
      if ( *((_BYTE *)a1 + 3) )
      {
        v50 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10 + 2);
        v54 = v50;
      }
      else
      {
        v32 = KeGetCurrentThread();
        --v32->SpecialApcDisable;
        v33 = KeAbPreAcquire((struct _KTHREAD *)(v10 + 4), 0LL);
        v34 = v33;
        if ( _interlockedbittestandset64(v11, 0LL) )
          ExfAcquirePushLockExclusiveEx(v10 + 4, v33, v10 + 4);
        if ( v34 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *(_BYTE *)(v34 + 33) |= 2u;
          else
            *(_BYTE *)(v34 + 10) = 1;
        }
      }
    }
    v30 = v10 + 16;
    *(_WORD *)(v29 + 34) = (unsigned __int64)((char *)v10 - (char *)a1) >> 6;
    v31 = *((_QWORD *)v10 + 5) ^ (unsigned __int64)(v10 + 16);
    if ( (unsigned __int16 *)(*(_QWORD *)v31 ^ v31) != v10 + 16 )
      __fastfail(3u);
    *(_QWORD *)v29 = (unsigned __int64)v30 ^ v29;
    *(_QWORD *)(v29 + 8) = v29 ^ v31;
    *(_QWORD *)v31 = v29 ^ v31;
    *((_QWORD *)v10 + 5) = (unsigned __int64)(v10 + 16) ^ v29;
    if ( (a1[2] & 1) != 0 && ((v29 + 80) & 0xFFF) != 0 )
    {
      v46 = RtlpHpVsChunkAlignSplit((unsigned __int64)v30 ^ v29, v29, v29 + 48);
      if ( v46 )
        RtlpHpVsFreeChunkInsert(a1, v10, v29, v46);
    }
    RtlpHpVsFreeChunkInsert(a1, v10, v29, v29 + 48);
    LOBYTE(v8) = v50;
  }
LABEL_17:
  v19 = v16 - 8;
  v20 = v16 - 8;
  if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(HIWORD(*((_QWORD *)v16 - 1)) ^ ((unsigned __int64)(v16 - 8) >> 48)) )
  {
    v21 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ *v16 ^ (unsigned __int8)v19);
    goto LABEL_22;
  }
  if ( LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)v19) ^ WORD2(v19)) )
  {
    v20 -= 16
         * (LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)WORD2(*(_QWORD *)v19) ^ (unsigned __int64)WORD2(v19));
    if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v20) ^ HIWORD(*(_QWORD *)v20)) )
    {
      v21 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v20[8] ^ (unsigned __int8)v20);
      goto LABEL_22;
    }
    if ( LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(WORD2(v20) ^ HIDWORD(*(_QWORD *)v20)) )
    {
      v20 -= 16
           * (LOWORD(PspTlsContext.Timer.Period) ^ WORD2(v20) ^ (unsigned __int64)(unsigned __int16)WORD2(*(_QWORD *)v20));
      v21 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v20[8] ^ (unsigned __int8)v20);
      goto LABEL_22;
    }
  }
  v21 = 0;
LABEL_22:
  v22 = (unsigned __int64)&v20[-(v21 << 12)] & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v22 + 32) ^ *(_WORD *)(v22 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, *((_DWORD *)a1 + 2) ^ (unsigned int)a1, v22, (_DWORD)v16 - 8, 0LL, 0LL);
LABEL_27:
    if ( (*((_BYTE *)a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*((unsigned __int8 *)a1 + 3), &v53);
    goto LABEL_60;
  }
  if ( (a1[2] & 1) != 0 )
  {
    v23 = v56;
    if ( (((_WORD)v19 + 32) & 0xFFF) != 0 )
      v23 = v56 - 1;
  }
  else
  {
    v23 = v56;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit((_DWORD)a1, (_DWORD)v10, v22, (int)v16 - 8, v23, (__int64)&v53) )
    goto LABEL_27;
  if ( (*((_BYTE *)a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*((unsigned __int8 *)a1 + 3), &v53);
  v7 = v19 + 16;
  v39 = 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(v19) ^ WORD1(*(_QWORD *)v19)) - 16;
  if ( (a1[2] & 1) != 0 && ((unsigned __int64)(v19 + 32) & 0xFFF) == 0 )
  {
    v7 = v19 + 32;
    v39 = 16 * (*(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(v19) ^ WORD1(*(_QWORD *)v19)) - 32;
  }
  v35 = v39;
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v7, v39);
  if ( v57 < v39 )
  {
    *((_DWORD *)v19 + 2) |= 0x100u;
    v36 = v39 - v57;
    v7[v35 - 1] = 0;
    v37 = *(_WORD *)&v7[v35 - 2];
    if ( v36 == 1 )
      *(_WORD *)&v7[v35 - 2] = v37 | 0x8000;
    else
      *(_WORD *)&v7[v35 - 2] = v37 ^ (v36 ^ v37) & 0x1FFF;
  }
LABEL_60:
  if ( v49 && (unsigned int)*((unsigned __int8 *)a1 + 2) + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v52);
  return v7;
}
