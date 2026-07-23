/*
 * XREFs of CmSaveKey @ 0x140A7EF8C
 * Callers:
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404FB8E4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpTraceHiveSaveStart @ 0x140779A34 (CmpTraceHiveSaveStart.c)
 *     CmpSaveKeyByFileCopy @ 0x140854570 (CmpSaveKeyByFileCopy.c)
 *     CmpTraceHiveSaveFileCopied @ 0x14085B988 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x14085B9F8 (CmpTraceHiveSaveTreeCopied.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     CmpCreateTemporaryHive @ 0x140A7FC0C (CmpCreateTemporaryHive.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     CmpTraceHiveSaveStop @ 0x140B4E098 (CmpTraceHiveSaveStop.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // r14
  __int64 PrivilegeCount; // rdx
  __int64 v25; // r9
  __int16 v26; // bx
  char *v27; // r12
  PPRIVILEGE_SET *v28; // r13
  signed __int64 v29; // r14
  __int64 v30; // rsi
  PPRIVILEGE_SET *v31; // rax
  char *v32; // r15
  ULONG_PTR v33; // rcx
  __int64 CellFlat; // rax
  int v35; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  char v41; // [rsp+32h] [rbp-CEh]
  unsigned int v43; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+48h] [rbp-B8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+58h] [rbp-A8h]
  int v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int16 v50; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v51[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  UUID v53; // [rsp+E0h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+F0h] [rbp-10h] BYREF

  v47 = a3;
  v48 = a2;
  v45 = 0LL;
  WORD1(v45) = -1;
  Uuid = 0LL;
  v53 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  memset_0(&v50, 0, 0x50uLL);
  v5 = v51;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v5);
    v5 = (_OWORD *)(v6 + 32);
  }
  while ( v7 != v8 );
  v9 = 0;
  v43 = -1;
  v10 = 0;
  v41 = 0;
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
    v16 = ExUuidCreate(&v53);
    started = v16;
    if ( v16 != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( v16 < 0 )
    goto LABEL_10;
  Interval.QuadPart = CmpCreateTemporaryHive(&Uuid, &v53);
  v13 = Interval;
  if ( !Interval.QuadPart )
  {
    started = -1073741670;
    goto LABEL_10;
  }
  CmpLockRegistry(v18, v17, v19, v20);
  v23 = *(_QWORD *)(a1 + 8);
  v49 = v23;
  v11 = 1;
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v45, v23);
  if ( started < 0 )
  {
LABEL_47:
    v10 = 0;
    goto LABEL_10;
  }
  CmpLockKcbStackShared((__int64)&v45);
  v9 = 1;
  if ( *(_QWORD *)(v23 + 32) == CmpMasterHive )
  {
    started = -1073741790;
    goto LABEL_47;
  }
  CmpTraceHiveSaveStart(v23);
  v41 = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 || (started = CmpStartKeyNodeStack((__int64)&v50, *(_WORD *)(v23 + 66) + 1), started < 0) )
  {
    v10 = 0;
  }
  else
  {
    CmpLockKcbStackFlusherLocksExclusive((__int64)&v45);
    v26 = WORD1(v45);
    if ( (SWORD1(v45) & 0x8000u) == 0 )
    {
      v27 = (char *)&v51[2 * SWORD1(v45)];
      v28 = &Privileges[SWORD1(v45) - 1];
      v29 = (char *)Privileges[1] - ((char *)&v45 + 8);
      v30 = 32 * ((__int16)(WORD1(v45) - 2) - (__int64)SWORD1(v45)) - (_QWORD)v51;
      do
      {
        if ( (unsigned __int16)v26 >= 2u )
        {
          v31 = (PPRIVILEGE_SET *)((char *)v28 + v29 - 16);
          v32 = &v27[v30 + v52];
        }
        else
        {
          v31 = v28;
          v32 = v27;
        }
        PrivilegeCount = (*v31)[2].PrivilegeCount;
        if ( (_DWORD)PrivilegeCount != -1 )
        {
          v33 = *(_QWORD *)&(*v31)[1].Privilege[0].Luid.HighPart;
          *(_QWORD *)v32 = v33;
          *((_DWORD *)v32 + 2) = PrivilegeCount;
          if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v33, PrivilegeCount, (unsigned int *)v32 + 6);
          else
            CellFlat = HvpGetCellPaged(v33, PrivilegeCount);
          *((_QWORD *)v32 + 2) = CellFlat;
        }
        v27 -= 32;
        --v28;
        --v26;
      }
      while ( v26 >= 0 );
      v13 = Interval;
      v23 = v49;
      v12 = 0LL;
      v11 = 1;
    }
    LOBYTE(v25) = a4;
    started = CmpDoAccessCheckOnLayeredSubtree(0LL, PrivilegeCount, (__int64)&v50, v25, 131097, 3);
    if ( started < 0 )
      goto LABEL_40;
    v12 = *(_QWORD *)(v23 + 32);
    if ( (*(_DWORD *)(v12 + 160) & 2) != 0 && *(_DWORD *)(v12 + 104) && *(_QWORD *)(v12 + 1544) )
    {
      if ( *(_WORD *)(v23 + 66) )
      {
        CmpLogUnsupportedOperation(25LL);
        started = -1073741822;
LABEL_40:
        v10 = 0;
LABEL_41:
        CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v45);
        v9 = 1;
        goto LABEL_10;
      }
      v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 1640));
      if ( !v10 )
      {
        started = -1073741444;
        goto LABEL_41;
      }
      CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v45);
      CmpUnlockKcbStack((__int64)&v45);
      CmpUnlockRegistry(v39);
      v11 = 0;
      started = CmpSaveKeyByFileCopy(v12, v48);
      if ( started >= 0 )
        CmpTraceHiveSaveFileCopied();
      v9 = 0;
    }
    else
    {
      v35 = v47;
      *(_DWORD *)(*(_QWORD *)(v13.QuadPart + 64) + 24LL) = v47;
      *(_DWORD *)(v13.QuadPart + 220) = v35;
      started = CmpCopyMergeOfLayeredKeyNode(&v50, v13.QuadPart, 0xFFFFFFFF, 1, 0, &v43);
      if ( started < 0 )
        goto LABEL_40;
      CmpTraceHiveSaveTreeCopied();
      *(_DWORD *)(*(_QWORD *)(v13.QuadPart + 64) + 36LL) = v43;
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v50, v50);
      *(LARGE_INTEGER *)EntryAtLayerHeight = v13;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v37;
      v38 = (*(_BYTE *)(v13.QuadPart + 140) & 1) != 0
          ? HvpGetCellFlat(v13.QuadPart, v37, (unsigned int *)(EntryAtLayerHeight + 24))
          : HvpGetCellPaged(v13.QuadPart, v37);
      *(_QWORD *)(EntryAtLayerHeight + 16) = v38;
      started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, &v50);
      if ( started < 0 )
        goto LABEL_40;
      started = CmpPromoteSubtree(0LL, &v50);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v45);
      CmpCleanupKeyNodeStack((__int64)&v50);
      CmpInitializeKeyNodeStack((char *)&v50);
      CmpUnlockKcbStack((__int64)&v45);
      CmpUnlockRegistry(v40);
      *(_QWORD *)(v13.QuadPart + 1560) = v48;
      v11 = 0;
      started = HvWriteExternal(v13.QuadPart);
      v10 = 0;
      v9 = 0;
      if ( started >= 0 )
        started = 0;
    }
  }
LABEL_10:
  CmpCleanupKeyNodeStack((__int64)&v50);
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v45);
  if ( v11 )
    CmpUnlockRegistry(v21);
  if ( v10 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 1640));
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v13.QuadPart )
  {
    *(_QWORD *)(v13.QuadPart + 1560) = 0LL;
    CmpDestroyHive((LARGE_INTEGER)v13.QuadPart);
  }
  if ( v41 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
