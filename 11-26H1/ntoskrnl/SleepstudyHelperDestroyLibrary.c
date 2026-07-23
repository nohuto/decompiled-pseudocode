/*
 * XREFs of SleepstudyHelperDestroyLibrary @ 0x140616EC0
 * Callers:
 *     SleepstudyHelper_Uninitialize @ 0x1407EA2A0 (SleepstudyHelper_Uninitialize.c)
 *     SshpUninitialize @ 0x140CDD8F8 (SshpUninitialize.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x140257E48 (SshpBlockerActiveDereference.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpFreeDataEntry @ 0x1407E8E24 (SshpFreeDataEntry.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpCacheRemoveBlocker @ 0x140AAB5D8 (SshpCacheRemoveBlocker.c)
 *     SshpFreeBlockerEntry @ 0x140AAB60C (SshpFreeBlockerEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperDestroyLibrary(PVOID **P)
{
  unsigned int v1; // ebp
  PVOID *v3; // rcx
  PVOID *v4; // rax
  _QWORD *v5; // rsi
  PVOID *v6; // rdi
  PVOID *v7; // rax
  __int64 v8; // r14
  KIRQL v9; // al
  int v10; // edx
  KIRQL v11; // r15
  volatile signed __int64 *v12; // r14
  PVOID **v13; // rcx
  PVOID **v14; // rax

  v1 = 0;
  if ( P )
  {
    CmpVolumeManagerLockContextListExclusive(&SshpLibraryListLock);
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
LABEL_22:
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SshpLibraryListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SshpLibraryListLock);
    KeAbPostRelease((unsigned __int64)&SshpLibraryListLock);
    v5 = P + 19;
    while ( (_QWORD *)*v5 != v5 )
    {
      v6 = P[20];
      if ( *v6 != v5 )
        goto LABEL_22;
      v7 = (PVOID *)v6[1];
      if ( *v7 != v6 )
        goto LABEL_22;
      P[20] = v7;
      *v7 = v5;
      v8 = (__int64)v6[14];
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
      v10 = *(_DWORD *)(v8 + 20);
      v11 = v9;
      if ( v10 )
        SshpBlockerActiveDereference(v8, v10);
      KeReleaseSpinLock((PKSPIN_LOCK)v8, v11);
      SshpCacheRemoveBlocker(P, v6[14]);
      v12 = (volatile signed __int64 *)(&SshpBlockerCollections.Header.Lock + 12 * *((int *)v6 + 10));
      CmpVolumeManagerLockContextListExclusive(v12);
      v13 = (PVOID **)v6[2];
      if ( v13[1] != v6 + 2 )
        goto LABEL_22;
      v14 = (PVOID **)v6[3];
      if ( *v14 != v6 + 2 )
        goto LABEL_22;
      *v14 = (PVOID *)v13;
      v13[1] = (PVOID *)v14;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((unsigned __int64)v12);
      SshpFreeBlockerEntry((PKSPIN_LOCK)v6[14]);
    }
    while ( P[21] != (PVOID *)(P + 21) )
      SshpFreeDataEntry();
    ExFreePoolWithTag(P, *((_DWORD *)P + 6));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
