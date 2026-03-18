/*
 * XREFs of CmSaveKey @ 0x140A7626C
 * Callers:
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404F39FC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140502014 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpTraceHiveSaveStart @ 0x140776B8C (CmpTraceHiveSaveStart.c)
 *     CmpSaveKeyByFileCopy @ 0x14084E260 (CmpSaveKeyByFileCopy.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1408555F0 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x140855660 (CmpTraceHiveSaveTreeCopied.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStack @ 0x140981CC8 (CmpStartKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140982128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14098335C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpLockKcbStackShared @ 0x140984C50 (CmpLockKcbStackShared.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     CmpCreateTemporaryHive @ 0x140A76EEC (CmpCreateTemporaryHive.c)
 *     HvWriteExternal @ 0x140AAA58C (HvWriteExternal.c)
 *     CmpTraceHiveSaveStop @ 0x140B4C308 (CmpTraceHiveSaveStop.c)
 *     CmpLogUnsupportedOperation @ 0x140B5C1B8 (CmpLogUnsupportedOperation.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, char a4)
{
  _OWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r12
  BOOLEAN v10; // r14
  char v11; // r13
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rdi
  NTSTATUS v14; // eax
  int started; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // r14
  __int64 PrivilegeCount; // rdx
  __int64 v22; // r9
  __int16 v23; // bx
  char *v24; // r12
  PPRIVILEGE_SET *v25; // r13
  signed __int64 v26; // r14
  __int64 v27; // rsi
  PPRIVILEGE_SET *v28; // rax
  char *v29; // r15
  ULONG_PTR v30; // rcx
  __int64 CellFlat; // rax
  int v32; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38; // [rsp+32h] [rbp-CEh]
  unsigned int v40; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v42; // [rsp+48h] [rbp-B8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int16 v47; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v48[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-28h]
  UUID v50; // [rsp+E0h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+F0h] [rbp-10h] BYREF

  v44 = a3;
  v45 = a2;
  v42 = 0LL;
  WORD1(v42) = -1;
  Uuid = 0LL;
  v50 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  memset_0(&v47, 0, 0x50uLL);
  v5 = v48;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v5);
    v5 = (_OWORD *)(v6 + 32);
  }
  while ( v7 != v8 );
  v9 = 0;
  v40 = -1;
  v10 = 0;
  v38 = 0;
  v11 = 0;
  v12 = 0LL;
  v13.QuadPart = 0LL;
  while ( 1 )
  {
    v14 = ExUuidCreate(&Uuid);
    started = v14;
    if ( v14 != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( v14 < 0 )
    goto LABEL_10;
  while ( 1 )
  {
    v16 = ExUuidCreate(&v50);
    started = v16;
    if ( v16 != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( v16 < 0 )
    goto LABEL_10;
  Interval.QuadPart = CmpCreateTemporaryHive(&Uuid, &v50);
  v13 = Interval;
  if ( !Interval.QuadPart )
  {
    started = -1073741670;
    goto LABEL_10;
  }
  CmpLockRegistry(v17);
  v20 = *(_QWORD *)(a1 + 8);
  v46 = v20;
  v11 = 1;
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v42, v20);
  if ( started < 0 )
  {
LABEL_47:
    v10 = 0;
    goto LABEL_10;
  }
  CmpLockKcbStackShared((__int64)&v42);
  v9 = 1;
  if ( *(_QWORD *)(v20 + 32) == CmpMasterHive )
  {
    started = -1073741790;
    goto LABEL_47;
  }
  CmpTraceHiveSaveStart(v20);
  v38 = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 || (started = CmpStartKeyNodeStack((__int64)&v47, *(_WORD *)(v20 + 66) + 1), started < 0) )
  {
    v10 = 0;
  }
  else
  {
    CmpLockKcbStackFlusherLocksExclusive((__int64)&v42);
    v23 = WORD1(v42);
    if ( (SWORD1(v42) & 0x8000u) == 0 )
    {
      v24 = (char *)&v48[2 * SWORD1(v42)];
      v25 = &Privileges[SWORD1(v42) - 1];
      v26 = (char *)Privileges[1] - ((char *)&v42 + 8);
      v27 = 32 * ((__int16)(WORD1(v42) - 2) - (__int64)SWORD1(v42)) - (_QWORD)v48;
      do
      {
        if ( (unsigned __int16)v23 >= 2u )
        {
          v28 = (PPRIVILEGE_SET *)((char *)v25 + v26 - 16);
          v29 = &v24[v27 + v49];
        }
        else
        {
          v28 = v25;
          v29 = v24;
        }
        PrivilegeCount = (*v28)[2].PrivilegeCount;
        if ( (_DWORD)PrivilegeCount != -1 )
        {
          v30 = *(_QWORD *)&(*v28)[1].Privilege[0].Luid.HighPart;
          *(_QWORD *)v29 = v30;
          *((_DWORD *)v29 + 2) = PrivilegeCount;
          if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v30, PrivilegeCount, (unsigned int *)v29 + 6);
          else
            CellFlat = HvpGetCellPaged(v30, PrivilegeCount);
          *((_QWORD *)v29 + 2) = CellFlat;
        }
        v24 -= 32;
        --v25;
        --v23;
      }
      while ( v23 >= 0 );
      v13 = Interval;
      v20 = v46;
      v12 = 0LL;
      v11 = 1;
    }
    LOBYTE(v22) = a4;
    started = CmpDoAccessCheckOnLayeredSubtree(0LL, PrivilegeCount, (__int64)&v47, v22, 131097, 3);
    if ( started < 0 )
      goto LABEL_40;
    v12 = *(_QWORD *)(v20 + 32);
    if ( (*(_DWORD *)(v12 + 160) & 2) != 0 && *(_DWORD *)(v12 + 104) && *(_QWORD *)(v12 + 1544) )
    {
      if ( *(_WORD *)(v20 + 66) )
      {
        CmpLogUnsupportedOperation(25LL);
        started = -1073741822;
LABEL_40:
        v10 = 0;
LABEL_41:
        CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v42);
        v9 = 1;
        goto LABEL_10;
      }
      v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 1640));
      if ( !v10 )
      {
        started = -1073741444;
        goto LABEL_41;
      }
      CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v42);
      CmpUnlockKcbStack((__int64)&v42);
      CmpUnlockRegistry(v36);
      v11 = 0;
      started = CmpSaveKeyByFileCopy(v12, v45);
      if ( started >= 0 )
        CmpTraceHiveSaveFileCopied();
      v9 = 0;
    }
    else
    {
      v32 = v44;
      *(_DWORD *)(*(_QWORD *)(v13.QuadPart + 64) + 24LL) = v44;
      *(_DWORD *)(v13.QuadPart + 220) = v32;
      started = CmpCopyMergeOfLayeredKeyNode(&v47, v13.QuadPart, 0xFFFFFFFF, 1, 0, &v40);
      if ( started < 0 )
        goto LABEL_40;
      CmpTraceHiveSaveTreeCopied();
      *(_DWORD *)(*(_QWORD *)(v13.QuadPart + 64) + 36LL) = v40;
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v47, v47);
      *(LARGE_INTEGER *)EntryAtLayerHeight = v13;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v34;
      v35 = (*(_BYTE *)(v13.QuadPart + 140) & 1) != 0
          ? HvpGetCellFlat(v13.QuadPart, v34, (unsigned int *)(EntryAtLayerHeight + 24))
          : HvpGetCellPaged(v13.QuadPart, v34);
      *(_QWORD *)(EntryAtLayerHeight + 16) = v35;
      started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, &v47);
      if ( started < 0 )
        goto LABEL_40;
      started = CmpPromoteSubtree(0LL, &v47);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v42);
      CmpCleanupKeyNodeStack((__int64)&v47);
      CmpInitializeKeyNodeStack((char *)&v47);
      CmpUnlockKcbStack((__int64)&v42);
      CmpUnlockRegistry(v37);
      *(_QWORD *)(v13.QuadPart + 1560) = v45;
      v11 = 0;
      started = HvWriteExternal(v13.QuadPart);
      v10 = 0;
      v9 = 0;
      if ( started >= 0 )
        started = 0;
    }
  }
LABEL_10:
  CmpCleanupKeyNodeStack((__int64)&v47);
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v42);
  if ( v11 )
    CmpUnlockRegistry(v18);
  if ( v10 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 1640));
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v13.QuadPart )
  {
    *(_QWORD *)(v13.QuadPart + 1560) = 0LL;
    CmpDestroyHive((LARGE_INTEGER)v13.QuadPart);
  }
  if ( v38 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
