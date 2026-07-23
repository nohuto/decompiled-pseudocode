/*
 * XREFs of RtlpHpVsSlotAllocate @ 0x14024BEE0
 * Callers:
 *     RtlpHpVsContextMultiAlloc @ 0x1404610A8 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14024C3B0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x14024C60C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14024C900 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

_QWORD *__fastcall RtlpHpVsSlotAllocate(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 *v5; // rax
  unsigned int v6; // r10d
  unsigned int v7; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  _BYTE *v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edx
  _QWORD *v15; // rbx
  _BYTE *v16; // r10
  int v17; // ecx
  unsigned __int64 v18; // r10
  unsigned __int64 v20; // rcx
  struct _KTHREAD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r9
  struct _KTHREAD *CurrentThread; // rcx
  bool v25; // zf
  __int64 v26; // rbx
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rdx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rsi
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = (unsigned __int64 *)(a2 + 16);
  v6 = a4;
  v7 = a3;
  v10 = 0LL;
  while ( 2 )
  {
    if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
    {
      if ( *v5 )
        v11 = *v5 ^ (unsigned __int64)v5;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = *v5;
    }
    v12 = 0LL;
    v13 = *(_QWORD *)(a2 + 24) & 1LL;
    while ( v11 )
    {
      v14 = *(_DWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v11 - 8) ^ (v11 - 8);
      if ( v6 < v14 )
      {
        v20 = *(_QWORD *)v11;
        v12 = (_BYTE *)v11;
      }
      else
      {
        if ( v6 <= v14 )
        {
          v12 = (_BYTE *)v11;
          goto LABEL_9;
        }
        v20 = *(_QWORD *)(v11 + 8);
      }
      if ( (_DWORD)v13 && v20 )
        v11 ^= v20;
      else
        v11 = v20;
    }
    if ( v12 )
    {
LABEL_9:
      v15 = v12 - 8;
      v16 = v12 - 8;
      if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(((unsigned __int64)(v12 - 8) >> 48) ^ HIWORD(*((_QWORD *)v12 - 1))) )
      {
        v17 = (unsigned __int8)(*v12 ^ LOBYTE(PspTlsContext.Timer.Processor) ^ (unsigned __int8)v15);
      }
      else
      {
        if ( !(LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(WORD2(v15) ^ HIDWORD(*v15))) )
          goto LABEL_62;
        v16 -= 16 * (LOWORD(PspTlsContext.Timer.Period) ^ WORD2(v15) ^ (unsigned __int64)(unsigned __int16)WORD2(*v15));
        if ( BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(HIWORD(*(_QWORD *)v16) ^ BYTE6(v16)) )
        {
          v17 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v16[8] ^ (unsigned __int8)v16);
          goto LABEL_14;
        }
        if ( !(LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)(HIDWORD(*(_QWORD *)v16) ^ WORD2(v16))) )
        {
LABEL_62:
          v17 = 0;
          goto LABEL_14;
        }
        v16 -= 16
             * (LOWORD(PspTlsContext.Timer.Period) ^ (unsigned __int16)WORD2(*(_QWORD *)v16) ^ (unsigned __int64)WORD2(v16));
        v17 = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v16[8] ^ (unsigned __int8)v16);
      }
LABEL_14:
      v18 = (unsigned __int64)&v16[-(v17 << 12)] & 0xFFFFFFFFFFFFF000uLL;
      if ( (((unsigned __int16)(*(_WORD *)(v18 + 32) ^ *(_WORD *)(v18 + 36)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        RtlpLogHeapFailure(18, *(_DWORD *)(a1 + 8) ^ a1, v18, (_DWORD)v12 - 8, 0LL, 0LL);
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((unsigned __int64)(v15 + 4) & 0xFFF) != 0 )
          --v7;
        if ( (unsigned int)RtlpHpVsChunkSplit(a1, a2, v18, (int)v12 - 8, v7, a5) )
          return v15;
      }
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a5);
      return (_QWORD *)v10;
    }
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      v21 = *(struct _KTHREAD **)(a5 + 8);
      if ( *(_BYTE *)(a1 + 3) )
      {
        v33 = *(unsigned __int8 *)(a5 + 16);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          v21->Header.LockNV = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
        __writecr8(v33);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v21->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v21);
        KeAbPostRelease(v21);
        CurrentThread = KeGetCurrentThread();
        v25 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v25
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(CurrentThread, v22, v13, v23, v36, v37);
        }
      }
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    v26 = RtlpHpVsSubsegmentCreate(a1, v7, v13);
    if ( v26 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        v25 = *(_BYTE *)(a1 + 3) == 0;
        *(_QWORD *)(a5 + 8) = a2 + 8;
        v27 = (struct _KTHREAD *)(a2 + 8);
        if ( v25 )
        {
          v29 = KeGetCurrentThread();
          --v29->SpecialApcDisable;
          v30 = KeAbPreAcquire(v27, 0LL);
          v32 = (AutoBoost *)v30;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 8), 0LL) )
            ExfAcquirePushLockExclusiveEx(a2 + 8, v30, a2 + 8);
          if ( v32 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
            {
              AutoBoost::KiAbpPostAcquire(v32, v31);
              v7 = a3;
              goto LABEL_39;
            }
            *((_BYTE *)v32 + 10) = 1;
          }
          v7 = a3;
        }
        else
        {
          *(_QWORD *)(a5 + 16) = ExAcquireSpinLockExclusive(&v27->Header.Lock);
        }
      }
LABEL_39:
      *(_WORD *)(v26 + 34) = (unsigned __int64)(a2 - a1) >> 6;
      v28 = *(_QWORD *)(a2 + 40) ^ (a2 + 32);
      if ( (*(_QWORD *)v28 ^ v28) != a2 + 32 )
        __fastfail(3u);
      v34 = v26 ^ (a2 + 32);
      *(_QWORD *)v26 = v34;
      *(_QWORD *)(v26 + 8) = v26 ^ v28;
      *(_QWORD *)v28 = v26 ^ v28;
      *(_QWORD *)(a2 + 40) = v34;
      if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v26 + 80) & 0xFFF) != 0 )
      {
        v35 = RtlpHpVsChunkAlignSplit(v34, v26, v26 + 48);
        if ( v35 )
          RtlpHpVsFreeChunkInsert(a1, a2, v26, v35);
      }
      RtlpHpVsFreeChunkInsert(a1, a2, v26, v26 + 48);
      v6 = a4;
      v5 = (unsigned __int64 *)(a2 + 16);
      continue;
    }
    return (_QWORD *)v10;
  }
}
