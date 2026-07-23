/*
 * XREFs of NtAreMappedFilesTheSame @ 0x140A06AE0
 * Callers:
 *     DifNtAreMappedFilesTheSameWrapper @ 0x140671720 (DifNtAreMappedFilesTheSameWrapper.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiDereferenceVad @ 0x140414DB0 (MiDereferenceVad.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiVadIsMetadataBitmap @ 0x140A06A94 (MiVadIsMetadataBitmap.c)
 */

NTSTATUS __cdecl NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rax
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  ULONG_PTR v10; // rbp
  struct _KLOCK_ENTRIES *v11; // r9
  void *v12; // rdx
  LegacyAutoBoost *v13; // rbx
  signed __int64 *v14; // r14
  __int64 *v15; // r13
  __int64 *v16; // r15
  __int64 v17; // r13
  __int64 v18; // r15
  int v19; // ebx
  NTSTATUS v20; // edi
  ULONG_PTR v21; // rax
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  struct _KLOCK_ENTRIES *v29; // r9
  void *v30; // rdx
  LegacyAutoBoost *v31; // rbx
  int v32; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx((unsigned __int64)File1MappedAsAnImage, 2LL, &v32);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx((unsigned __int64)File2MappedAsFile, 2LL, &v32);
  v10 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6, v8, v9);
    MiUnlockAndDereferenceVadShared(v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared(v10);
    return 0;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v6) || (unsigned int)MiVadIsMetadataBitmap(v10) )
  {
    MiUnlockAndDereferenceVadShared(v10);
    MiLockVadShared((__int64)CurrentThread, v6, v25, v26);
    MiUnlockAndDereferenceVadShared(v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVadShared((__int64)CurrentThread, v10);
      MiLockVadShared((__int64)CurrentThread, v6, v27, v28);
      v14 = (signed __int64 *)(v10 + 40);
      v31 = (LegacyAutoBoost *)KeAbPreAcquire(v10 + 40, 0LL, 0LL, v29);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 40), 0, v31, (struct _KTHREAD *)(v10 + 40));
      if ( v31 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v31, v30);
        else
          *((_BYTE *)v31 + 10) = 1;
      }
    }
    else
    {
      v13 = (LegacyAutoBoost *)KeAbPreAcquire(v6 + 40, 0LL, 0LL, v11);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 40), 0, v13, (struct _KTHREAD *)(v6 + 40));
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v12);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      v14 = (signed __int64 *)(v10 + 40);
    }
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v10) )
    {
      v20 = -1073741503;
      v19 = -1073741503;
    }
    else if ( (MiReadVadFlags(v6) & 0x80000) == 0
           && (MiReadVadFlags(v10) & 0x80000) == 0
           && (v15 = *(__int64 **)(v6 + 80)) != 0LL
           && (v16 = *(__int64 **)(v10 + 80)) != 0LL
           && (v17 = *v15) != 0
           && (v18 = *v16) != 0
           && *(_QWORD *)(v17 + 64)
           && *(_QWORD *)(v18 + 64) )
    {
      v21 = MiReferenceControlAreaFile(v18);
      v20 = -1073741612;
      v19 = -1073741612;
      if ( v17 == *(_QWORD *)(*(_QWORD *)(v21 + 40) + 16LL) )
      {
        v20 = 0;
        v19 = 0;
      }
      MiDereferenceControlAreaFile(v18, v21);
    }
    else
    {
      v19 = -1073741800;
      v20 = -1073741800;
    }
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v14);
      v20 = v19;
    }
    KeAbPostRelease((unsigned __int64)v14);
    MiUnlockAndDereferenceVadShared(v6);
    MiLockVadShared((__int64)CurrentThread, v10, v22, v23);
    MiUnlockAndDereferenceVadShared(v10);
    return v20;
  }
}
