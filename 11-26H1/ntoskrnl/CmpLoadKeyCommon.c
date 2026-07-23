/*
 * XREFs of CmpLoadKeyCommon @ 0x140467F14
 * Callers:
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmpJoinClassOfTrust @ 0x140468664 (CmpJoinClassOfTrust.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     TmEnableCallbacks @ 0x1405369B0 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpSetGlobalQuotaAllowed @ 0x140857774 (CmpSetGlobalQuotaAllowed.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpTrimHive @ 0x1408BDDEC (CmpTrimHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x140AFEEF0 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpAddToHiveFileList @ 0x140B06E90 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        __int64 a1,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r13
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  ULONG_PTR v21; // rdi
  ULONG_PTR *v22; // r12
  struct _KTHREAD *Thread; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  PRKEVENT Event; // [rsp+78h] [rbp-41h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)(a1 + 160) |= 0x20u;
  v11 = 0LL;
  Event = a6;
  v36 = a8;
  BugCheckParameter2 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_QWORD *)(a1 + 4176) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v25 = *(_DWORD *)(a1 + 4120) | 0x20;
    *(_DWORD *)(a1 + 4120) = v25;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(a1 + 4120) = v25 | 0x40;
  }
  *(_DWORD *)(a1 + 4120) |= 1u;
  LOCK_HIVE_LOAD();
  LOBYTE(v16) = 1;
  CmpLockRegistryFreezeAware(v16);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v20 = -1073741444;
      v33 = 16;
      goto LABEL_16;
    }
    LOBYTE(v28) = a7;
    v26 = CmpJoinClassOfTrust(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v28);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 32;
      goto LABEL_35;
    }
    v26 = CmpVEAddHiveToSIDMappingTable(a1, a2);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 48;
LABEL_35:
      v27 = v26;
      goto LABEL_36;
    }
  }
  if ( a5 )
  {
    v26 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 64;
      goto LABEL_35;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v20 = -1073741811;
      v33 = 80;
LABEL_16:
      v27 = v20;
LABEL_36:
      SetFailureLocation(a11, 0, 29, v27, v33);
LABEL_42:
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive((PVOID)a1);
      CmpDetachFromRegistryProcess(&ApcState);
      goto LABEL_31;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v17) = a9;
  v18 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          a1,
          v17,
          512,
          v15 != 0,
          Event,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2,
          0,
          a11);
  v20 = v18;
  if ( v18 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v18, 96);
    LOBYTE(v32) = 1;
    CmpLockRegistryFreezeAware(v32);
    goto LABEL_42;
  }
  v21 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v22 = v36;
    *v36 = v21;
  }
  else
  {
    v22 = v36;
  }
  LOBYTE(v19) = 1;
  CmpLockRegistryFreezeAware(v19);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(a1 + 2944));
    *v22 = *(_QWORD *)(a1 + 2944);
  }
  CmpLockHiveListExclusive();
  Thread = PspSiloMonitorLock.WaitBlock[2].Thread;
  v24 = (_QWORD *)(a1 + 1608);
  if ( *(struct _KTHREAD **)PspSiloMonitorLock.WaitBlock[2].Thread != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
    __fastfail(3u);
  *v24 = &PspSiloMonitorLock.WaitBlockFill11[112];
  *(_QWORD *)(a1 + 1616) = Thread;
  *(_QWORD *)&Thread->Header.Lock = v24;
  PspSiloMonitorLock.WaitBlock[2].Thread = (struct _KTHREAD *)(a1 + 1608);
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(&ApcState);
  CmpRecheckHiveVolumePolicy(a1);
  CmpDetachFromRegistryProcess(&ApcState);
  CmpDereferenceKeyControlBlockUnsafe(v21);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v29) = a10;
    CmpInitCmRM(a1, v29);
    *(_DWORD *)(a1 + 4120) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpFlushHive(a1, 4LL);
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( !v15 )
    CmpAddToHiveFileList(a1);
  v30 = *(_QWORD *)(a1 + 4160);
  if ( v30 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v30 + 56), CmKtmNotification, *(PVOID *)(a1 + 4160));
    CmRmFinalizeRecovery(*(_QWORD *)(a1 + 4160));
  }
  CmpTrimHive(a1);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(a1 + 160) &= ~0x20u;
  *(_QWORD *)(a1 + 4176) = 0LL;
  UNLOCK_HIVE_LOAD();
  v20 = 0;
LABEL_31:
  if ( !CmpProfileLoaded && !CmpContextListLock.ApcStateFill[16] )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v20;
}
