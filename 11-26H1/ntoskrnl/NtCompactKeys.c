/*
 * XREFs of NtCompactKeys @ 0x140854C00
 * Callers:
 *     DifNtCompactKeysWrapper @ 0x140672CB0 (DifNtCompactKeysWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  ULONG v5; // r15d
  char v6; // r14
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  KPROCESSOR_MODE PreviousMode; // r14
  char v10; // al
  size_t v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  ULONG i; // r14d
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rax
  PVOID *v19; // rdi
  __int64 v20; // r14
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]
  char v25; // [rsp+B8h] [rbp+20h]

  v23 = 0LL;
  v24 = 0LL;
  TransientPoolWithQuota = 0LL;
  v5 = 0;
  v6 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v23);
  v8 = CmCheckNoTxContext();
  if ( v8 < 0 )
  {
    v10 = 0;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v8 = -1073741727;
LABEL_4:
      v10 = 0;
      v6 = 0;
      goto LABEL_41;
    }
    if ( !Count )
    {
      v8 = 0;
LABEL_7:
      v10 = 0;
      v6 = 0;
      goto LABEL_41;
    }
    if ( Count >= 0x1FFFFFFF )
    {
      v8 = -1073741811;
      goto LABEL_4;
    }
    v11 = 8 * Count;
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    if ( !TransientPoolWithQuota )
    {
      v8 = -1073741670;
      goto LABEL_7;
    }
    if ( PreviousMode )
    {
      if ( 8 * Count && ((unsigned __int8)KeyArray & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(TransientPoolWithQuota, KeyArray, v11);
    }
    else
    {
      RtlCopyVolatileMemory(TransientPoolWithQuota, KeyArray, v11);
    }
    while ( v5 < Count )
    {
      LOBYTE(v14) = PreviousMode;
      v8 = CmObReferenceObjectByHandle(
             *((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + v5),
             131078,
             v13,
             v14,
             (__int64)TransientPoolWithQuota + 8 * v5,
             0LL);
      if ( v8 < 0 )
      {
        v10 = 0;
        v6 = 0;
        goto LABEL_41;
      }
      ++v5;
    }
    v6 = CmpAcquireShutdownRundown(v7, v12);
    v25 = v6;
    if ( v6 )
    {
      CmpLockRegistryExclusive(v7);
      v22 = 0LL;
      for ( i = 0; i < Count; ++i )
      {
        v16 = *((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + i);
        v8 = CmpPerformKeyBodyDeletionCheck(v16, 0LL);
        if ( v8 < 0 )
          goto LABEL_36;
        if ( i )
        {
          v17 = v22;
        }
        else
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL);
          v22 = v17;
        }
        v18 = *(_QWORD *)(v16 + 8);
        if ( v17 != *(_QWORD *)(v18 + 32) || (v7 = *(unsigned __int16 *)(v18 + 186), (v7 & 4) != 0) || (v7 & 0x10) != 0 )
        {
          v8 = -1073741811;
          goto LABEL_36;
        }
        if ( *(_WORD *)(v18 + 66) )
        {
          v8 = -1073741822;
LABEL_36:
          v10 = 1;
          goto LABEL_37;
        }
      }
      v8 = 0;
      CmpUnlockRegistry(v7);
      CmpLogUnsupportedOperation(7LL);
      v10 = 0;
LABEL_37:
      v6 = v25;
    }
    else
    {
      v8 = -1073741431;
      v10 = 0;
    }
  }
LABEL_41:
  if ( v10 )
    CmpUnlockRegistry(v7);
  if ( v6 )
    CmpReleaseShutdownRundown(v7);
  if ( TransientPoolWithQuota )
  {
    if ( v5 )
    {
      v19 = (PVOID *)TransientPoolWithQuota;
      v20 = v5;
      do
      {
        ObfDereferenceObject(*v19++);
        --v20;
      }
      while ( v20 );
    }
    CmSiFreeMemory(TransientPoolWithQuota);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v23);
  return v8;
}
