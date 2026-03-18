/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1402E1B68
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140456270 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205688 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14043B310 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14043B8E0 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14043B900 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14043BA34 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x140447AE0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x140495E24 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140495FA8 (PerfLogExecutiveResourceAcquire.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  LegacyAutoBoost *CurrentThread; // rsi
  int v5; // r14d
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al
  int ThreadResourceHint; // eax
  int v11; // edx
  __int64 EmptyEntry; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // [rsp+28h] [rbp-29h]
  __int64 v26; // [rsp+30h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v28[16]; // [rsp+58h] [rbp+7h] BYREF
  LegacyAutoBoost *v29; // [rsp+68h] [rbp+17h]
  __int16 v30; // [rsp+70h] [rbp+1Fh]
  char v31; // [rsp+72h] [rbp+21h]
  int v32; // [rsp+74h] [rbp+23h]
  _QWORD v33[4]; // [rsp+78h] [rbp+27h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v28, 0, 0x40uLL);
  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x90E4u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  while ( *(_DWORD *)(a1 + 64) )
  {
    if ( *(char *)(a1 + 26) < 0 && *(LegacyAutoBoost **)(a1 + 48) == CurrentThread )
    {
      v14 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
      *(_DWORD *)(a1 + 56) = v14;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90E8u);
      __incgsdword(0x90A4u);
      if ( !v5 )
        return 1;
      v15 = 65585LL;
LABEL_13:
      v16 = v14 >> 3;
      goto LABEL_14;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(
                             CurrentThread,
                             *(unsigned int *)(a1 + 76),
                             v6,
                             v7,
                             v25,
                             v26,
                             LockHandle.LockQueue.Next);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     (_DWORD)CurrentThread,
                     (unsigned int)&LockHandle,
                     1,
                     v11 != 0,
                     ThreadResourceHint);
    }
    v13 = EmptyEntry;
    if ( EmptyEntry )
    {
      if ( *(LegacyAutoBoost **)EmptyEntry == CurrentThread )
      {
        v14 = *(_DWORD *)(EmptyEntry + 8) & 7 | ((*(_DWORD *)(EmptyEntry + 8) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(EmptyEntry + 8) = v14;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90F0u);
        __incgsdword(0x90A4u);
        if ( v5 )
        {
          v15 = 65617LL;
          goto LABEL_13;
        }
        return 1;
      }
      if ( *(char *)(a1 + 26) >= 0 )
      {
        v17 = *(_DWORD *)(a1 + 64) + 1;
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = v17;
        *(_QWORD *)v13 = CurrentThread;
        *(_DWORD *)(v13 + 8) = *(_DWORD *)(v13 + 8) & 7 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_22;
      }
      if ( !a2 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90F8u);
        return a2;
      }
      *(_QWORD *)EmptyEntry = CurrentThread;
      *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
      v22 = *(_DWORD *)(a1 + 72) + 1;
      v29 = CurrentThread;
      *(_DWORD *)(a1 + 72) = v22;
      v33[1] = v33;
      v33[0] = v33;
      v30 = 1;
      v31 = 6;
      v32 = 0;
      v33[2] = 0LL;
      RtlInsertHeadCircularList(a1 + 32, v28);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90F4u);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
      ExpApplyPrewaitBoost(a1, v23, v24);
      ExpWaitForResource((_DWORD *)a1, (__int64)v28, 0x10244u);
LABEL_22:
      v21 = ExpGetThreadResourceHint(CurrentThread, v18, v19, v20, v25, v26, LockHandle.LockQueue.Next);
      ExpBoostIoAfterAcquire(a1, CurrentThread, v21);
      __incgsdword(0x90ECu);
      __incgsdword(0x90A4u);
      if ( !v5 )
        return 1;
      v16 = 1LL;
      v15 = 65601LL;
LABEL_14:
      PerfLogExecutiveResourceAcquire(v15, a1, v16, *(unsigned int *)(a1 + 68));
      return 1;
    }
  }
  v8 = ExpTryAcquireResourceShared(a1);
  *(_QWORD *)(a1 + 48) = CurrentThread;
  a2 = v8;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90ECu);
  __incgsdword(0x90A4u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return a2;
}
