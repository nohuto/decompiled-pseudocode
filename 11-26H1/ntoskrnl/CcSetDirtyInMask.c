/*
 * XREFs of CcSetDirtyInMask @ 0x14039F350
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     CcReleaseByteRangeFromWrite @ 0x1404668F0 (CcReleaseByteRangeFromWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcFindBitmapRangeToDirty @ 0x14039FA80 (CcFindBitmapRangeToDirty.c)
 *     CcChargeDirtyPages @ 0x14039FBB0 (CcChargeDirtyPages.c)
 *     CcAllocateBitmap @ 0x14039FDB0 (CcAllocateBitmap.c)
 *     CcAllocateInitializeMbcb @ 0x1403A08D8 (CcAllocateInitializeMbcb.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // r14
  signed __int64 v9; // rbp
  _BYTE *v10; // rsi
  _BYTE *v11; // r15
  int v12; // r15d
  __int64 v13; // r13
  __int64 BitmapRangeToDirty; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 *v20; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  int v24; // ebx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rdx
  _OWORD *v30; // rax
  __int64 v31; // rax
  __int64 **v32; // rdx
  __int64 *v33; // rcx
  _BYTE *v34; // rbx
  __int64 InitializeMbcb; // rax
  _BYTE *v36; // rbx
  __int64 *v37; // rdx
  __int64 **v38; // rcx
  int v39; // eax
  int v40; // [rsp+30h] [rbp-78h]
  __int64 v41; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v42; // [rsp+40h] [rbp-68h]
  _BYTE *v43; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF

  v4 = *a2;
  v6 = 0LL;
  v40 = 0;
  v41 = 0LL;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v4 ^ (a3 + v4 - 1)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xD02uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)(a1 + 556) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (*(_DWORD *)(a1 + 152) & 0x40000000) == 0 || a3 + *a2 > *(_QWORD *)(a1 + 48) )
  {
    v8 = *a2 >> 12;
    v9 = (a3 + *a2 - 1) >> 12;
    if ( *(_QWORD *)(a1 + 32) / 4096LL <= v9 )
      KeBugCheckEx(0x34u, 0xD2BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v10 = *(_BYTE **)(a1 + 536);
    v43 = v10;
    if ( CcEnablePerVolumeLazyWriter )
    {
      v42 = *(_BYTE **)(a1 + 600);
      v11 = v42;
    }
    else
    {
      v11 = 0LL;
      v42 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 152) & 0x40000000) == 0 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
        {
          if ( (int)CcAllocateBitmap(&v41) < 0 )
          {
LABEL_77:
            v6 = v41;
            v12 = v40;
LABEL_78:
            if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10 + 96, &LockHandle);
              *(_DWORD *)(a1 + 152) |= 0x20000u;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            if ( !v12 )
            {
LABEL_46:
              if ( v6 )
              {
                ++dword_140E1101C;
                if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_140E11010 )
                {
                  ++dword_140E11020;
                  guard_dispatch_icall_no_overrides(v6, v15, v16);
                }
                else
                {
                  RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, (PSLIST_ENTRY)v6);
                }
              }
              return;
            }
LABEL_45:
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
            goto LABEL_46;
          }
          v6 = v41;
        }
        v12 = 1;
        v40 = 1;
        ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
        v13 = *(_QWORD *)(a1 + 168);
        if ( !v13 )
        {
          InitializeMbcb = CcAllocateInitializeMbcb();
          v13 = InitializeMbcb;
          if ( !InitializeMbcb )
            goto LABEL_78;
          *(_QWORD *)(a1 + 168) = InitializeMbcb;
        }
        if ( v8 == v9 && v8 == *(_QWORD *)(v13 + 40) )
          goto LABEL_42;
        if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v13 == 761 )
        {
          BitmapRangeToDirty = CcFindBitmapRangeToDirty(v13, v8, &v41);
          v17 = BitmapRangeToDirty;
          if ( !BitmapRangeToDirty )
            goto LABEL_77;
          v18 = *(_QWORD *)(BitmapRangeToDirty + 16);
          v19 = (unsigned int)v18;
          if ( v8 < v18 + *(unsigned int *)(BitmapRangeToDirty + 24) )
            *(_DWORD *)(BitmapRangeToDirty + 24) = v8 - v18;
          if ( v9 > v18 + *(unsigned int *)(BitmapRangeToDirty + 28) )
            *(_DWORD *)(BitmapRangeToDirty + 28) = v9 - v18;
          v20 = (unsigned __int64 *)(v10 + 768);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = v20;
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v18) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
          }
          LockHandle.OldIrql = CurrentIrql;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            v22 = _InterlockedExchange64((volatile __int64 *)v20, (__int64)&LockHandle);
            if ( v22 )
              KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v22, v19);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v20);
          }
          if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
          {
            if ( CcEnablePerVolumeLazyWriter )
            {
              v34 = v42;
              if ( !v42[1172] )
              {
                if ( !v42[985] )
                {
                  if ( !v42[984] )
                    KeBugCheckEx(0x34u, 0x7C9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
                  KiSetTimerEx((_DWORD)v42 + 920, CcFirstDelay, 0, 0, 0LL);
                }
                if ( !v34[1172] )
                  v34[985] = 1;
              }
            }
            else
            {
              v36 = v43;
              if ( !v43[1292] )
              {
                if ( !v43[1049] )
                {
                  if ( !v43[1048] )
                    KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
                  KiSetTimerEx((_DWORD)v43 + 984, CcFirstDelay, 0, 0, 0LL);
                }
                if ( !v36[1292] )
                  v36[1049] = 1;
              }
            }
            CcInsertIntoDirtySharedCacheMapList(a1);
            *(_QWORD *)(v13 + 32) = v8;
          }
          v23 = (_DWORD *)(*(_QWORD *)(v17 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v17 + 16)) >> 5));
          v24 = 1 << v8;
          if ( v8 <= v9 )
          {
            v25 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              if ( (*v23 & v24) == 0 )
              {
                *v23 |= v24;
                ++v7;
              }
              v24 *= 2;
              if ( !v24 )
              {
                ++v23;
                v24 = 1;
              }
              --v25;
            }
            while ( v25 );
          }
          CcChargeDirtyPages(a1, v13, v17, v7);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v7 )
          {
            CurrentThread = a4;
            if ( !a4 )
            {
              CurrentThread = KeGetCurrentThread();
              a4 = CurrentThread;
            }
            v27 = CurrentThread->Process[3].Padding[4];
            if ( v27 )
            {
              if ( v7 << 12 )
                _InterlockedAdd64((volatile signed __int64 *)(v27 + 8), v7 << 12);
              _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
            }
          }
          v10 = v43;
          v28 = v24 == 0;
          v6 = v41;
          if ( !v28 )
          {
            *(_QWORD *)(v13 + 40) = v9;
LABEL_42:
            v11 = v42;
            goto LABEL_43;
          }
        }
        else
        {
          memset_0((void *)v6, 0, 0x400uLL);
          if ( *(_DWORD *)(v13 + 80) )
          {
            v30 = *(_OWORD **)(v13 + 88);
            *(_OWORD *)v6 = *v30;
            *(_OWORD *)(v6 + 16) = v30[1];
            *(_OWORD *)(v6 + 32) = v30[2];
            *(_OWORD *)(v6 + 48) = v30[3];
            *(_OWORD *)(v6 + 64) = v30[4];
            *(_OWORD *)(v6 + 80) = v30[5];
            memset_0(*(void **)(v13 + 88), 0, 0x60uLL);
          }
          *(_QWORD *)(v13 + 88) = v6;
          v31 = v13 + 16;
          v32 = *(__int64 ***)(v13 + 24);
          v33 = (__int64 *)(v13 + 96);
          v6 = 0LL;
          v41 = 0LL;
          if ( *v32 != (__int64 *)(v13 + 16) )
            goto LABEL_55;
          *(_QWORD *)(v13 + 104) = v32;
          *v33 = v31;
          *v32 = v33;
          v37 = (__int64 *)(v13 + 144);
          *(_QWORD *)(v13 + 24) = v33;
          *(_QWORD *)(v13 + 112) = 0x7FFFFFFFFFFFFFFFLL;
          *(_DWORD *)(v13 + 120) = -1;
          v38 = *(__int64 ***)(v13 + 24);
          if ( *v38 != (__int64 *)v31 )
LABEL_55:
            __fastfail(3u);
          *(_QWORD *)(v13 + 152) = v38;
          *v37 = v31;
          *v38 = v37;
          *(_QWORD *)(v13 + 24) = v37;
          *(_QWORD *)(v13 + 160) = 0x7FFFFFFFFFFFFFFFLL;
          *(_DWORD *)(v13 + 168) = -1;
          *(_WORD *)v13 = 761;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
          v40 = 0;
        }
      }
    }
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
LABEL_43:
    v29 = *a2 + a3;
    if ( v29 > *(_QWORD *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 48) = v29;
      if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10 + 96, &LockHandle);
        v39 = *(_DWORD *)(a1 + 152);
        if ( (v39 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v39 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(a1);
        CcScheduleLazyWriteScan(v10, v11, 0LL, 0LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    goto LABEL_45;
  }
}
