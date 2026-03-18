/*
 * XREFs of SshpDereferenceBlocker @ 0x14049BA90
 * Callers:
 *     SleepstudyHelperDestroyBlocker @ 0x14049BA60 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1404B0B20 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A89960 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpPurgeBlockersWorker @ 0x140AAD230 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140ADF00C (SshNotifySystemSessionChange.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x1402564B8 (SshpBlockerActiveDereference.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpWorkItemQueue @ 0x14049BC60 (SshpWorkItemQueue.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140905BD0 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140AAD4BC (SshpUnlinkBlockerFromLibrary.c)
 *     SshpFreeBlockerEntry @ 0x140AAD54C (SshpFreeBlockerEntry.c)
 */

void __fastcall SshpDereferenceBlocker(PKSPIN_LOCK SpinLock, int a2, char a3)
{
  KIRQL v6; // al
  KIRQL v7; // di
  int v9; // edx
  int v10; // ecx
  char v11; // si
  KSPIN_LOCK v12; // rcx
  KSPIN_LOCK *v13; // r14
  volatile signed __int64 *v14; // rsi
  volatile signed __int64 *v15; // rdi
  KIRQL v16; // al
  int v17; // r15d
  KSPIN_LOCK v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx

  while ( 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v7 = v6;
    if ( !a2 )
      break;
LABEL_8:
    v10 = *((_DWORD *)SpinLock + 4);
    v11 = 0;
    *((_DWORD *)SpinLock + 4) = v10 - 1;
    if ( v10 == 1 )
    {
      *((_DWORD *)SpinLock + 4) = 1;
      if ( !a3 || v7 )
      {
        *((_DWORD *)SpinLock + 2) |= 8u;
        SshpWorkItemQueue(&SshpPurgeBlockersWorkItem);
      }
      else
      {
        v11 = 1;
      }
    }
    KeReleaseSpinLock(SpinLock, v7);
    if ( v11 )
    {
      v12 = SpinLock[38];
      v13 = (KSPIN_LOCK *)SpinLock[37];
      v14 = (volatile signed __int64 *)(*(_QWORD *)(v12 + 32) + 16LL);
      v15 = (volatile signed __int64 *)(&SshpBlockerCollections.Header.Lock + 12 * *(int *)(v12 + 40));
      CmpVolumeManagerLockContextListExclusive(v14);
      v16 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v17 = *((_DWORD *)SpinLock + 4);
      KeReleaseSpinLock(SpinLock, v16);
      if ( v17 == 1 )
        SshpUnlinkBlockerFromLibrary(SpinLock);
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((unsigned __int64)v14);
      if ( v17 == 1 )
      {
        CmpVolumeManagerLockContextListExclusive(v15);
        v18 = SpinLock[38] + 16;
        v19 = *(_QWORD *)v18;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 || (v20 = *(_QWORD **)(SpinLock[38] + 24), *v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v15);
        KeAbPostRelease((unsigned __int64)v15);
        SshpFreeBlockerEntry(SpinLock);
        SpinLock = v13;
        if ( v13 )
          continue;
      }
    }
    return;
  }
  if ( (*((_DWORD *)SpinLock + 3))-- == 1 )
  {
    v9 = *((_DWORD *)SpinLock + 5) - 1;
    if ( *((int *)SpinLock + 6) <= 0 )
      v9 = *((_DWORD *)SpinLock + 5);
    if ( v9 )
      SshpBlockerActiveDereference((__int64)SpinLock, v9);
    a2 = 1;
    goto LABEL_8;
  }
  KeReleaseSpinLock(SpinLock, v6);
}
