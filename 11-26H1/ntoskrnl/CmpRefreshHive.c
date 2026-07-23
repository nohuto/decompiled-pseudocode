/*
 * XREFs of CmpRefreshHive @ 0x140854058
 * Callers:
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSwapHiveStorage @ 0x1408625F4 (CmpSwapHiveStorage.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCleanUpKCBCacheTable @ 0x1408B6020 (CmpCleanUpKCBCacheTable.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpRebuildKcbCache @ 0x1408C31A8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  BOOLEAN v2; // r15
  char v3; // r14
  struct _PRIVILEGE_SET *Pool; // r12
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rsi
  int Hive; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  ULONG_PTR v15; // rbx
  __int64 v16; // rdx
  __int64 CellFlat; // rax
  __int64 v18; // rsi
  __int64 CellPaged; // rax
  __int64 v20; // r13
  int v21; // eax
  int v22; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-49h] BYREF
  __int64 v24; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-39h] BYREF
  ULONG_PTR v26; // [rsp+90h] [rbp-29h]
  __int128 v27; // [rsp+98h] [rbp-21h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-1h]
  BOOLEAN v31; // [rsp+128h] [rbp+6Fh]
  char v32; // [rsp+130h] [rbp+77h]
  char UnloadRundown; // [rsp+138h] [rbp+7Fh]

  v24 = 0LL;
  v25[0] = 0LL;
  v28 = 0LL;
  v2 = 0;
  v3 = 0;
  v29 = 0LL;
  v32 = 0;
  Pool = 0LL;
  v27 = 0LL;
  BugCheckParameter3 = 0LL;
  HvpGetCellContextInitialize(&v24);
  HvpGetCellContextInitialize(v25);
  CmpInitializeDelayDerefContext(&v27);
  v5 = *(_QWORD *)(a1 + 8);
  v26 = v5;
  v6 = *(_QWORD *)(v5 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  v7 = (struct _EX_RUNDOWN_REF *)(v6 + 1640);
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_11;
  }
  v31 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1640));
  if ( !v31 )
  {
    v7 = (struct _EX_RUNDOWN_REF *)(v6 + 1640);
    Hive = -1073740763;
    v2 = 0;
    goto LABEL_11;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v3 = 1;
  CmpLockRegistry();
  CmpLockKcbShared(v5);
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v6 + 2952) != 1 )
  {
    if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
      goto LABEL_25;
    HvLockHiveFlusherShared(v6);
    HvLockHiveWriter(v6);
    if ( *(_DWORD *)(v6 + 912) )
    {
      Hive = -1073741823;
      HvUnlockHiveWriter(v6);
      HvUnlockHiveFlusherShared(v6);
      goto LABEL_8;
    }
    HvUnlockHiveWriter(v6);
    HvUnlockHiveFlusherShared(v6);
    if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
    {
LABEL_25:
      Hive = -1073741811;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v6 + 2928) )
    {
      Hive = -1073741823;
      goto LABEL_8;
    }
    CmpUnlockKcb(v5);
    CmpUnlockRegistry(v11);
    v32 = 0;
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    if ( !Pool )
    {
      Hive = -1073741670;
      goto LABEL_9;
    }
    *(_QWORD *)&v28 = *(_QWORD *)(v6 + 1544);
    v12 = *(_DWORD *)(v6 + 168);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v13 = 1;
        *((_QWORD *)&v28 + 1) = *(_QWORD *)(v6 + 1552);
      }
      else
      {
        v13 = 2;
        *((_QWORD *)&v28 + 1) = *(_QWORD *)(v6 + 1576);
        *(_QWORD *)&v29 = *(_QWORD *)(v6 + 1584);
      }
    }
    else
    {
      v13 = 0;
    }
    Hive = CmpCreateHive(
             (unsigned int)&BugCheckParameter3,
             2,
             *(_DWORD *)(v6 + 160),
             v13,
             0LL,
             (__int64)&v28,
             0LL,
             (*(_DWORD *)(v6 + 4120) & 0x10000) != 0 ? 18415650 : 18415682,
             0LL,
             0LL,
             0LL,
             0LL,
             (__int64)Pool);
    v7 = (struct _EX_RUNDOWN_REF *)(v6 + 1640);
    if ( Hive < 0 )
      goto LABEL_10;
    CmpLockRegistryExclusive(v14);
    v32 = 1;
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive < 0 )
      goto LABEL_10;
    if ( *(_BYTE *)(v6 + 2952) == 1 )
    {
      Hive = -1073741431;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v6 + 160) & 2) != 0 )
    {
      if ( *(_DWORD *)(v6 + 912) )
        goto LABEL_45;
      if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
        goto LABEL_43;
      if ( *(_DWORD *)(v6 + 2928) )
      {
LABEL_45:
        Hive = -1073741823;
        goto LABEL_10;
      }
      v15 = BugCheckParameter3;
      v16 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
      if ( (_DWORD)v16 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v16, v25);
        }
        else
        {
          CellFlat = HvpGetCellPaged(BugCheckParameter3);
          v15 = BugCheckParameter3;
        }
        v18 = CellFlat;
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        {
          CellPaged = HvpGetCellFlat(v6, *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL), &v24);
        }
        else
        {
          CellPaged = HvpGetCellPaged(v6);
          v15 = BugCheckParameter3;
        }
        v20 = CellPaged;
        Hive = HvpMarkCellDirty(v15, *(unsigned int *)(*(_QWORD *)(v15 + 64) + 36LL));
        if ( Hive < 0 )
        {
          v32 = 1;
          if ( v20 )
          {
            if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v6, &v24);
            else
              HvpReleaseCellPaged(v6, &v24);
            v32 = 1;
          }
          if ( v18 )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v25);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v25);
          }
        }
        else
        {
          v21 = *(_DWORD *)(v20 + 16);
          *(_WORD *)(v18 + 2) |= 0xCu;
          *(_DWORD *)(v18 + 16) = v21;
          if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v6, &v24);
          else
            HvpReleaseCellPaged(v6, &v24);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v25);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v25);
          CmpCleanUpKCBCacheTable(v6);
          LOBYTE(v22) = 1;
          CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v6, &v27, 0LL, v22);
          CmpFlushNotifiesOnKeyBodyList(v26, 0LL, &v27);
          CmpSwapHiveStorage(v6, BugCheckParameter3);
          CmpRebuildKcbCache(v26);
          ++*(_DWORD *)(v6 + 212);
          Hive = 0;
        }
        goto LABEL_9;
      }
    }
LABEL_43:
    Hive = -1073741811;
    goto LABEL_10;
  }
  Hive = -1073741431;
LABEL_8:
  CmpUnlockKcb(v5);
  v32 = 1;
LABEL_9:
  v7 = (struct _EX_RUNDOWN_REF *)(v6 + 1640);
LABEL_10:
  v2 = v31;
LABEL_11:
  CmpDrainDelayDerefContext((_QWORD **)&v27);
  if ( v32 )
    CmpUnlockRegistry(v9);
  if ( v3 )
    CmpFinishBeingActiveFlusherAndReconciler(v6);
  if ( v2 )
    ExReleaseRundownProtection_0(v7);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3 )
    CmpDestroyHive((PVOID)BugCheckParameter3);
  if ( Pool )
    CmSiFreeMemory(Pool);
  return (unsigned int)Hive;
}
