/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140AD1A90
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1404D037C (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

_KAFFINITY_EX *__fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  char v2; // si
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  char UnloadRundown; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-80h] BYREF
  int v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v22);
  v2 = 0;
  v3 = 0;
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F) + 1062) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD(v5, v4, v6, v7);
    CmpLockRegistryFreezeAware(1);
    v10 = *((_DWORD *)P + 40);
    v3 = 6;
    v21 = 6;
    if ( (v10 & 0x40) != 0 )
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F) + 1062) = 23;
    }
    else if ( *((_BYTE *)P + 2952) )
    {
      v11 = *((_QWORD *)P + 368);
      if ( (*((_DWORD *)P + 1030) & 0x20) != 0 )
      {
        v2 = 1;
        ++LODWORD(CmpKeyLockTracker.Timer.Dpc);
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v11) )
      {
        v12 = *((_QWORD *)P + 368);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F) + 1062) = 30;
        CmpAttachToRegistryProcess(&ApcState);
        CmpCompleteUnloadKey(v12, v13, &v21);
        CmpDetachFromRegistryProcess(&ApcState);
        CmpLockRegistry(v15, v14, v16, v17);
        CmpDereferenceKeyControlBlock(v12);
        CmpUnlockRegistry(v18);
        v3 = v21;
      }
      else if ( v2 )
      {
        CmpDecrementAppHiveUnloadCount();
      }
    }
    else
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F) + 1062) = 25;
    }
  }
  else
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F;
    *((_DWORD *)P + (unsigned int)v9 + 1062) = 24;
  }
  *((_DWORD *)P + 1202) = 0;
  if ( (v3 & 2) != 0 )
    CmpUnlockRegistry(v9);
  _InterlockedOr(v20, 0);
  if ( *((_QWORD *)P + 602) )
    ExfUnblockPushLock((volatile __int64 *)P + 602, 0LL);
  if ( (v3 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpDereferenceHive((char *)P);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v22);
}
