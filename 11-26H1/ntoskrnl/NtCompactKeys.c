/*
 * XREFs of NtCompactKeys @ 0x14084E8F0
 * Callers:
 *     DifNtCompactKeysWrapper @ 0x14066F0D0 (DifNtCompactKeysWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14097C910 (CmCheckNoTxContext.c)
 *     CmpLogUnsupportedOperation @ 0x140B5C1B8 (CmpLogUnsupportedOperation.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCompactKeys(unsigned int a1, void *a2)
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  unsigned int v5; // r15d
  char v6; // r14
  __int64 v7; // rcx
  int v8; // ebx
  KPROCESSOR_MODE PreviousMode; // r14
  char v10; // al
  size_t v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  unsigned int i; // r14d
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
    if ( !a1 )
    {
      v8 = 0;
LABEL_7:
      v10 = 0;
      v6 = 0;
      goto LABEL_41;
    }
    if ( a1 >= 0x1FFFFFFF )
    {
      v8 = -1073741811;
      goto LABEL_4;
    }
    v11 = 8 * a1;
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    if ( !TransientPoolWithQuota )
    {
      v8 = -1073741670;
      goto LABEL_7;
    }
    if ( PreviousMode )
    {
      if ( 8 * a1 && ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(TransientPoolWithQuota, a2, v11);
    }
    else
    {
      RtlCopyVolatileMemory(TransientPoolWithQuota, a2, v11);
    }
    while ( v5 < a1 )
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
      for ( i = 0; i < a1; ++i )
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
  return (unsigned int)v8;
}
