/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140AD4630
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1404D6BAC (CmpDecrementAppHiveUnloadCount.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C58CD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C58F14 (CmpReleaseHiveLoadUnloadRundown.c)
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
  __int64 v14; // rcx
  __int64 v15; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-80h] BYREF
  int v18; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v19);
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
    v18 = 6;
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
        ++*(_DWORD *)&CmpKeyLockTracker.Timer.Processor;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v11) )
      {
        v12 = *((_QWORD *)P + 368);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1061, 1u) & 0x7F) + 1062) = 30;
        CmpAttachToRegistryProcess(&ApcState);
        CmpCompleteUnloadKey(v12, v13, &v18);
        CmpDetachFromRegistryProcess(&ApcState);
        CmpLockRegistry(v14);
        CmpDereferenceKeyControlBlock(v12);
        CmpUnlockRegistry(v15);
        v3 = v18;
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
  _InterlockedOr(v17, 0);
  if ( *((_QWORD *)P + 602) )
    ExfUnblockPushLock((volatile __int64 *)P + 602, 0LL);
  if ( (v3 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpDereferenceHive((char *)P);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v19);
}
