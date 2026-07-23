/*
 * XREFs of NtCompressKey @ 0x140854EB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpIsWriteQueueActive @ 0x1404B6690 (CmpIsWriteQueueActive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  int v1; // edi
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  int v4; // r8d
  int v5; // r9d
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  PVOID Object; // [rsp+30h] [rbp-19h] BYREF
  __int128 v21; // [rsp+38h] [rbp-11h] BYREF
  __int64 v22; // [rsp+48h] [rbp-1h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  v22 = 0LL;
  v1 = (int)KeyHandle;
  Object = 0LL;
  v21 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v21);
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      LOBYTE(v5) = PreviousMode;
      v6 = v1 & 3;
      v7 = CmObReferenceObjectByHandle(v1, 131078, v4, v5, (__int64)&Object, 0LL);
      v10 = Object;
      v2 = v7;
      if ( v7 >= 0 )
      {
        if ( (unsigned __int8)CmpAcquireShutdownRundown(v9, v8) )
        {
          while ( 1 )
          {
            CmpLockRegistryExclusive(v11);
            v2 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
            if ( v2 < 0 )
              break;
            v13 = v10[1];
            v14 = *(_QWORD **)(v13 + 32);
            if ( *(_DWORD *)(v13 + 40) != *(_DWORD *)(v14[8] + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v15 = v14 + 527;
            if ( !CmpIsWriteQueueActive(v14 + 527) )
            {
              v15 = v14 + 525;
              if ( !CmpIsWriteQueueActive(v14 + 525) )
              {
                CmpAttachToRegistryProcess(&ApcState);
                v16 = *(_QWORD *)(v10[1] + 32LL);
                if ( v16 == CmpMasterHive || !*(_QWORD *)(v16 + 1544) || (*(_DWORD *)(v16 + 160) & 0x8003) != 0 )
                {
                  v2 = -1073741811;
                }
                else
                {
                  v17 = 0;
                  if ( v6 != 3 )
                    v17 = v6;
                  *(_QWORD *)(*(_QWORD *)(v16 + 64) + 168LL) = v17;
                  HvMarkBaseBlockDirty(v16);
                  v2 = 0;
                }
                CmpDetachFromRegistryProcess(&ApcState);
                break;
              }
            }
            HvLockHiveFlusherExclusive(v14);
            CmpWaitOnHiveWriteQueue(v14, v15);
          }
          CmpUnlockRegistry(v12);
          CmpReleaseShutdownRundown(v18);
        }
        else
        {
          v2 = -1073741431;
        }
      }
      if ( v10 )
        ObfDereferenceObject(v10);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v21);
  return v2;
}
