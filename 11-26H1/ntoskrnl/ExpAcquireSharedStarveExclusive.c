/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1402C3C28
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x14025F880 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14042DBC0 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14042E190 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14042E1B0 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14042E2E4 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  LegacyAutoBoost *CurrentThread; // rsi
  int v5; // r14d
  char v6; // al
  int ThreadResourceHint; // eax
  int v9; // edx
  __int64 EmptyEntry; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v22[16]; // [rsp+58h] [rbp+7h] BYREF
  LegacyAutoBoost *v23; // [rsp+68h] [rbp+17h]
  __int16 v24; // [rsp+70h] [rbp+1Fh]
  char v25; // [rsp+72h] [rbp+21h]
  int v26; // [rsp+74h] [rbp+23h]
  _QWORD v27[4]; // [rsp+78h] [rbp+27h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v22, 0, 0x40uLL);
  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x90E4u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  while ( *(_DWORD *)(a1 + 64) )
  {
    if ( *(char *)(a1 + 26) < 0 && *(LegacyAutoBoost **)(a1 + 48) == CurrentThread )
    {
      v12 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
      *(_DWORD *)(a1 + 56) = v12;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90E8u);
      __incgsdword(0x90A4u);
      if ( !v5 )
        return 1;
      v13 = 65585LL;
LABEL_13:
      v14 = v12 >> 3;
      goto LABEL_14;
    }
    if ( *(char *)(a1 + 26) < 0 )
    {
      EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, *(unsigned int *)(a1 + 76));
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     (_DWORD)CurrentThread,
                     (unsigned int)&LockHandle,
                     1,
                     v9 != 0,
                     ThreadResourceHint);
    }
    v11 = EmptyEntry;
    if ( EmptyEntry )
    {
      if ( *(LegacyAutoBoost **)EmptyEntry == CurrentThread )
      {
        v12 = *(_DWORD *)(EmptyEntry + 8) & 7 | ((*(_DWORD *)(EmptyEntry + 8) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(EmptyEntry + 8) = v12;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90F0u);
        __incgsdword(0x90A4u);
        if ( v5 )
        {
          v13 = 65617LL;
          goto LABEL_13;
        }
        return 1;
      }
      if ( *(char *)(a1 + 26) >= 0 )
      {
        v15 = *(_DWORD *)(a1 + 64) + 1;
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = v15;
        *(_QWORD *)v11 = CurrentThread;
        *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 8) & 7 | 8;
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
      v18 = *(_DWORD *)(a1 + 72) + 1;
      v23 = CurrentThread;
      *(_DWORD *)(a1 + 72) = v18;
      v27[1] = v27;
      v27[0] = v27;
      v24 = 1;
      v25 = 6;
      v26 = 0;
      v27[2] = 0LL;
      RtlInsertHeadCircularList(a1 + 32, v22);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90F4u);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
      ExpApplyPrewaitBoost(a1, v19, v20);
      ExpWaitForResource((_DWORD *)a1, (__int64)v22, 0x10244u);
LABEL_22:
      v17 = ExpGetThreadResourceHint(CurrentThread, v16);
      ExpBoostIoAfterAcquire(a1, CurrentThread, v17);
      __incgsdword(0x90ECu);
      __incgsdword(0x90A4u);
      if ( !v5 )
        return 1;
      v14 = 1LL;
      v13 = 65601LL;
LABEL_14:
      PerfLogExecutiveResourceAcquire(v13, a1, v14, *(unsigned int *)(a1 + 68));
      return 1;
    }
  }
  v6 = ExpTryAcquireResourceShared(a1);
  *(_QWORD *)(a1 + 48) = CurrentThread;
  a2 = v6;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90ECu);
  __incgsdword(0x90A4u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return a2;
}
