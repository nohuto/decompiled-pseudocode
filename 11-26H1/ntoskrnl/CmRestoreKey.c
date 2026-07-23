/*
 * XREFs of CmRestoreKey @ 0x140947D24
 * Callers:
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1408651EC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408B5DE8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     CmpCheckKeyAccess @ 0x140946BA0 (CmpCheckKeyAccess.c)
 *     CmpTraceHiveRestoreStop @ 0x140948ABC (CmpTraceHiveRestoreStop.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140948B48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmpTraceHiveRestoreStart @ 0x140948C88 (CmpTraceHiveRestoreStart.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x140948F38 (CmpDeleteTree.c)
 *     CmpRetryBackOff @ 0x140B3E90C (CmpRetryBackOff.c)
 *     CmpInvalidateSubtree @ 0x140B494F4 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C5ED4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r12
  char v7; // si
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rdi
  int HiveVolatile; // ebx
  unsigned int v11; // ebx
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 CellFlat; // rax
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned int v20; // ebx
  size_t v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r9
  unsigned int v30; // r15d
  __int64 CellPaged; // rax
  unsigned int v32; // r12d
  unsigned int v33; // r15d
  __int64 v34; // rax
  bool v35; // zf
  unsigned int v36; // esi
  _WORD *v37; // rax
  _WORD *v38; // rcx
  unsigned int v39; // eax
  unsigned int *v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rax
  _WORD *v43; // rsi
  unsigned int i; // eax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // eax
  ULONG_PTR v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // ecx
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v55; // r15
  int v56; // ecx
  int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // esi
  __int16 v60; // ax
  struct _PRIVILEGE_SET *v61; // rsi
  PPRIVILEGE_SET v62; // r14
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  int v69; // esi
  unsigned int j; // eax
  unsigned int v71; // r12d
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // [rsp+28h] [rbp-D8h]
  char v77; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+74h] [rbp-8Ch] BYREF
  int v79; // [rsp+7Ch] [rbp-84h]
  unsigned int v80; // [rsp+80h] [rbp-80h]
  unsigned int v81; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v82[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v83[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v86; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v87; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-48h]
  unsigned int v89[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v91; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v92; // [rsp+DCh] [rbp-24h]
  __int64 v93; // [rsp+E0h] [rbp-20h] BYREF
  _WORD *v94; // [rsp+E8h] [rbp-18h]
  __int128 v95; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v96; // [rsp+100h] [rbp+0h] BYREF
  __int128 v97; // [rsp+110h] [rbp+10h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+120h] [rbp+20h]
  __int64 v99[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v100; // [rsp+140h] [rbp+40h]
  _BYTE v101[432]; // [rsp+150h] [rbp+50h] BYREF

  v92 = a3;
  v94 = 0LL;
  v89[0] = -1;
  v88 = 0LL;
  v93 = 0LL;
  v89[1] = 0;
  v85 = 0xFFFFFFFFLL;
  v82[0] = -1;
  v6 = 0LL;
  v82[1] = 0;
  v83[0] = -1;
  v83[1] = 0;
  v87 = 0LL;
  v79 = 0;
  *(_OWORD *)v99 = 0LL;
  v100 = 0LL;
  v95 = 0LL;
  memset_0(v101, 0, sizeof(v101));
  v81 = 0;
  v96 = 0LL;
  v90 = 0LL;
  CmpInitializeDelayDerefContext(&v96);
  v91 = -1;
  v7 = 0;
  BugCheckParameter3 = -1LL;
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    HiveVolatile = -1073741790;
    goto LABEL_104;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 2) != 0 && (a3 & 0xFFFFFFFD) != 0 || a1[7] || a1[8] )
  {
    HiveVolatile = -1073741811;
    goto LABEL_104;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile((__int64)a1, a2);
    goto LABEL_104;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive((__int64)a1);
    goto LABEL_104;
  }
  v99[0] = a2;
  *((_QWORD *)&v95 + 1) = &v95;
  *(_QWORD *)&v95 = &v95;
  HiveVolatile = CmpCreateHive(&v87, 2u, 0x8000, 0, 0LL, v99, 0LL, 18415617, 0LL, 0LL, 0LL, 0LL, (__int64)v101);
  if ( HiveVolatile < 0 )
    goto LABEL_104;
  CmpLockRegistryFreezeAware(0);
  v7 = 1;
  CmpLockKcbShared(v8);
  v11 = *(_DWORD *)(v8 + 40);
  v12 = 1;
  v80 = v11;
  if ( *(_WORD *)(v8 + 66) )
  {
    CmpLogUnsupportedOperation(17LL);
    HiveVolatile = -1073741822;
    goto LABEL_206;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    HiveVolatile = -1073741535;
    goto LABEL_206;
  }
  if ( *(_BYTE *)(v8 + 65) == 1 || v9 == CmpMasterHive )
  {
    HiveVolatile = -1073741790;
    goto LABEL_206;
  }
  if ( *(_BYTE *)(v9 + 2952) == 1 )
  {
    HiveVolatile = -1073741431;
    goto LABEL_206;
  }
  HvLockHiveFlusherShared(v9, v13, v14, v15);
  v77 = 1;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v9, v11, v82);
  else
    CellFlat = HvpGetCellPaged(v9, v11);
  v84 = CellFlat;
  if ( !CellFlat )
  {
    HiveVolatile = -1073741670;
    goto LABEL_158;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
    v17 = -1;
  else
    v17 = *(_DWORD *)(CellFlat + 16);
  v18 = *(_QWORD *)(v87 + 64);
  v86 = v11 >> 31;
  HiveVolatile = CmpCopyKeyPartial(
                   v87,
                   *(unsigned int *)(v18 + 36),
                   v9,
                   v17,
                   6,
                   v76,
                   v11 >> 31,
                   (unsigned int *)&BugCheckParameter3);
  if ( HiveVolatile < 0 )
    goto LABEL_158;
  v19 = v84;
  HiveVolatile = HvReallocateCell(
                   v9,
                   (unsigned int)BugCheckParameter3,
                   (unsigned int)*(unsigned __int16 *)(v84 + 72) + 76,
                   1,
                   &v91,
                   &v93,
                   &v85);
  v88 = v93;
  if ( HiveVolatile < 0 )
    goto LABEL_179;
  v20 = v91;
  v21 = *(unsigned __int16 *)(v19 + 72);
  LODWORD(BugCheckParameter3) = v91;
  memmove((void *)(v93 + 76), (const void *)(v19 + 76), v21);
  v22 = v88;
  *(_WORD *)(v88 + 72) = *(_WORD *)(v19 + 72);
  if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
    *(_WORD *)(v22 + 2) |= 0x20u;
  else
    *(_WORD *)(v22 + 2) &= ~0x20u;
  HiveVolatile = CmpCopySyncTree(v87, *(_DWORD *)(*(_QWORD *)(v87 + 64) + 36LL), v9, v20, 2, 0);
  if ( HiveVolatile < 0 )
  {
LABEL_179:
    v71 = BugCheckParameter3;
    v12 = v77;
    if ( (unsigned __int8)CmpDeleteTree(v9) )
      CmpFreeKeyByCell(v9, v71, 0);
    if ( !v77 )
    {
LABEL_205:
      v6 = v84;
      if ( !v12 )
        goto LABEL_104;
LABEL_206:
      CmpUnlockKcb(v8);
      goto LABEL_104;
    }
LABEL_158:
    HvUnlockHiveFlusherShared(v9);
    goto LABEL_205;
  }
  HvUnlockHiveFlusherShared(v9);
  v77 = 0;
  CmpUnlockKcb(v8);
  CmpUnlockRegistry(v23);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, (__int64)v82);
  else
    HvpReleaseCellPaged(v9, v82);
  v84 = 0LL;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, (__int64)&v85);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&v85);
  v88 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v25 = v92;
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v24) )
    {
LABEL_177:
      HiveVolatile = -1073741431;
      goto LABEL_178;
    }
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      goto LABEL_164;
    if ( v80 != *(_DWORD *)(v8 + 40) )
    {
      HiveVolatile = -1073741444;
      goto LABEL_178;
    }
    if ( (*(_DWORD *)(v8 + 8) & 0x40000) != 0 )
    {
      HiveVolatile = -1073740763;
      goto LABEL_178;
    }
    if ( *(_BYTE *)(v9 + 2952) == 1 )
      goto LABEL_177;
    if ( v17 != -1 )
    {
      HiveVolatile = CmpCheckKeyAccess(v9, v17);
      if ( HiveVolatile < 0 )
        goto LABEL_178;
    }
    HiveVolatile = CmpCheckKeyAccess(v9, v80);
    if ( HiveVolatile < 0 )
      goto LABEL_178;
    LOBYTE(v26) = 1;
    v28 = CmpTryAcquireKcbIXLocks(v8, v26, v27, (__int64)&v90);
    HiveVolatile = v28;
    if ( v28 != -1073741267 )
      break;
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7, v29, v90);
    CmpUnlockRegistry(v72);
    HiveVolatile = CmpAbortRollbackPacket(&v90, 0LL);
    if ( HiveVolatile < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_178;
    }
LABEL_188:
    CmpCleanupRollbackPacket((__int64)&v90);
    v90 = 0LL;
    CmpRetryBackOff(&v81);
    CmpLockRegistryFreezeAware(1);
  }
  if ( v28 < 0 )
    goto LABEL_178;
  HiveVolatile = CmpDoAccessCheckOnSubtree(v9, 2);
  if ( HiveVolatile < 0 )
    goto LABEL_178;
  if ( (v25 & 8) != 0 )
  {
    v68 = CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 0, (__int64)&v90);
    v69 = v68;
    HiveVolatile = v68;
    if ( v68 != -1073741267 && v68 < 0 )
      goto LABEL_178;
    v73 = CmpPrepareForSubtreeInvalidation(v8, 0, (__int64)&v90);
    HiveVolatile = v73;
    if ( v73 != -1073741267 )
    {
      if ( v73 < 0 )
        goto LABEL_178;
      if ( v69 != -1073741267 )
      {
        CmpInvalidateAllHigherLayerKcbs(v8, 1, 0, (int)&v96);
        CmpInvalidateSubtree(v8, 1, 0, (unsigned int)&v96, 0LL);
        CmpDrainDelayDerefContext((_QWORD **)&v96);
        goto LABEL_41;
      }
    }
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 7, v74, v90);
    CmpUnlockRegistry(v75);
    v7 = 0;
    HiveVolatile = CmpAbortRollbackPacket(&v90, 0LL);
    if ( HiveVolatile < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_179;
    }
    goto LABEL_188;
  }
  CmpCleanUpHigherLayerKcbCaches(v8);
  if ( CmpDoesKeyHaveOpenSubkeys(v8) || *(_QWORD *)v8 != 1LL )
  {
LABEL_164:
    HiveVolatile = -1073741535;
LABEL_178:
    v7 = 1;
    goto LABEL_179;
  }
LABEL_41:
  v30 = BugCheckParameter3;
  HiveVolatile = HvpMarkCellDirty(v9, BugCheckParameter3, 0);
  v7 = 1;
  if ( HiveVolatile < 0 )
    goto LABEL_179;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v9, v80, (unsigned int *)&v85);
  else
    CellPaged = HvpGetCellPaged(v9, v80);
  v88 = CellPaged;
  if ( !CellPaged )
    goto LABEL_165;
  v32 = *(_DWORD *)(CellPaged + 16);
  if ( (*(_BYTE *)(CellPaged + 2) & 4) != 0 )
  {
    if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
      v66 = HvpGetCellFlat(CmpMasterHive, v32, v83);
    else
      v66 = HvpGetCellPaged(CmpMasterHive, v32);
    if ( v66 )
    {
      *(_DWORD *)(v66 + 28) = v30;
      if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
        HvpReleaseCellFlat(CmpMasterHive, (__int64)v83);
      else
        HvpReleaseCellPaged(CmpMasterHive, v83);
      v67 = (*(_BYTE *)(v9 + 140) & 1) != 0 ? HvpGetCellFlat(v9, v30, v82) : HvpGetCellPaged(v9, v30);
      v84 = v67;
      if ( v67 )
      {
        *(_DWORD *)(v67 + 16) = v32;
        *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v30;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, (__int64)v82);
        else
          HvpReleaseCellPaged(v9, v82);
        v84 = 0LL;
        goto LABEL_81;
      }
    }
    goto LABEL_165;
  }
  v33 = 0;
  HiveVolatile = HvpMarkCellDirty(v9, v32, 0);
  v7 = 1;
  if ( HiveVolatile < 0 )
    goto LABEL_179;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v34 = HvpGetCellFlat(v9, v32, v83);
  else
    v34 = HvpGetCellPaged(v9, v32);
  if ( !v34 )
  {
    HiveVolatile = -1073741670;
    goto LABEL_179;
  }
  v35 = (*(_BYTE *)(v9 + 140) & 1) == 0;
  v36 = *(_DWORD *)(v34 + 4LL * v86 + 28);
  v86 = v36;
  if ( v35 )
    HvpReleaseCellPaged(v9, v83);
  else
    HvpReleaseCellFlat(v9, (__int64)v83);
  v37 = (_WORD *)((*(_BYTE *)(v9 + 140) & 1) != 0 ? HvpGetCellFlat(v9, v36, v89) : HvpGetCellPaged(v9, v36));
  v94 = v37;
  v38 = v37;
  if ( !v37 )
    goto LABEL_165;
  if ( *v37 == 26994 )
  {
    v39 = (unsigned __int16)v37[1];
    v40 = (unsigned int *)(v38 + 2);
  }
  else
  {
    v39 = 1;
    v40 = &v86;
  }
  v81 = v39;
  while ( v33 < v39 )
  {
    v41 = v40[v33];
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      v42 = HvpGetCellFlat(v9, v41, (unsigned int *)&BugCheckParameter3 + 1);
    else
      v42 = HvpGetCellPaged(v9, v41);
    v43 = (_WORD *)v42;
    if ( !v42 )
      goto LABEL_165;
    HiveVolatile = HvpMarkCellDirty(v9, v40[v33], 0);
    if ( HiveVolatile < 0 )
    {
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v9, (__int64)&BugCheckParameter3 + 4);
      else
        HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter3 + 1);
      goto LABEL_178;
    }
    if ( *v43 == 26220 || *v43 == 26732 )
    {
      for ( i = 0; i < (unsigned __int16)v43[1]; ++i )
      {
        if ( *(_DWORD *)&v43[4 * i + 2] == v80 )
        {
          v30 = BugCheckParameter3;
          *(_DWORD *)&v43[4 * i + 2] = BugCheckParameter3;
LABEL_68:
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, (__int64)&BugCheckParameter3 + 4);
          else
            HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter3 + 1);
          goto LABEL_71;
        }
      }
    }
    else
    {
      for ( j = 0; j < (unsigned __int16)v43[1]; ++j )
      {
        if ( *(_DWORD *)&v43[2 * j + 2] == v80 )
        {
          v30 = BugCheckParameter3;
          *(_DWORD *)&v43[2 * j + 2] = BugCheckParameter3;
          goto LABEL_68;
        }
      }
    }
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)&BugCheckParameter3 + 4);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter3 + 1);
    v39 = v81;
    ++v33;
  }
  v30 = BugCheckParameter3;
LABEL_71:
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v45 = HvpGetCellFlat(v9, v32, v83);
  else
    v45 = HvpGetCellPaged(v9, v32);
  v46 = v45;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v47 = HvpGetCellFlat(v9, v30, v82);
  else
    v47 = HvpGetCellPaged(v9, v30);
  v48 = *(unsigned __int16 *)(v47 + 74);
  if ( *(_DWORD *)(v46 + 56) < v48 )
    *(_DWORD *)(v46 + 56) = v48;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, (__int64)v82);
  else
    HvpReleaseCellPaged(v9, v82);
  v35 = (*(_BYTE *)(v9 + 140) & 1) == 0;
  v84 = 0LL;
  if ( v35 )
    HvpReleaseCellPaged(v9, v83);
  else
    HvpReleaseCellFlat(v9, (__int64)v83);
LABEL_81:
  v35 = (*(_BYTE *)(v8 + 8) & 8) == 0;
  *(_DWORD *)(v8 + 40) = v30;
  if ( !v35 && (*(_DWORD *)(v8 + 184) & 0x400000) == 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(v8 + 104), (__int64)&v96);
    *(_WORD *)(v8 + 8) &= ~8u;
    *(_QWORD *)(v8 + 104) = 0LL;
  }
  v49 = *(_QWORD *)(v8 + 32);
  v50 = *(unsigned int *)(v8 + 40);
  HIDWORD(BugCheckParameter3) = -1;
  v79 = 0;
  v51 = (*(_BYTE *)(v49 + 140) & 1) != 0
      ? HvpGetCellFlat(v49, v50, (unsigned int *)&BugCheckParameter3 + 1)
      : HvpGetCellPaged(v49, v50);
  v52 = v51;
  if ( !v51 )
  {
LABEL_165:
    HiveVolatile = -1073741670;
    goto LABEL_178;
  }
  v53 = *(_DWORD *)(v51 + 40);
  *(_DWORD *)(v8 + 96) = *(_DWORD *)(v51 + 36);
  *(_DWORD *)(v8 + 100) = v53;
  *(_WORD *)(v8 + 186) = *(_WORD *)(v51 + 2);
  BugCheckParameter4 = *(unsigned int *)(v51 + 44);
  v81 = 0;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(v8 + 88) = 0LL;
  }
  else
  {
    v55 = *(_QWORD *)(v8 + 32);
    CmLockHiveSecurityShared(v55);
    if ( !CmpFindSecurityCellCacheIndex(v55, BugCheckParameter4, &v81) )
    {
      *(_QWORD *)(v8 + 88) = 0LL;
      KeBugCheckEx(0x51u, 4uLL, 1uLL, v8, BugCheckParameter4);
    }
    *(_QWORD *)(v8 + 88) = *(_QWORD *)(*(_QWORD *)(v55 + 1896) + 16LL * v81 + 8);
    CmUnlockHiveSecurity(v55);
  }
  CmpCleanUpSubKeyInfo(v8, 1);
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = *(_QWORD *)(v52 + 4);
  *(_WORD *)(v8 + 176) = *(_WORD *)(v52 + 52);
  *(_WORD *)(v8 + 178) = *(_WORD *)(v52 + 60);
  *(_DWORD *)(v8 + 180) = *(_DWORD *)(v52 + 64);
  v56 = *(_DWORD *)(v8 + 184) ^ ((unsigned __int8)*(_DWORD *)(v8 + 184) ^ (unsigned __int8)*(_WORD *)(v52 + 54)) & 0xF;
  *(_DWORD *)(v8 + 184) = v56;
  v57 = v56 ^ ((unsigned __int8)v56 ^ (unsigned __int8)*(_WORD *)(v52 + 54)) & 0xF0;
  v58 = *(_QWORD *)(v8 + 32);
  *(_DWORD *)(v8 + 184) = v57;
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(v52 + 55);
  if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v58, (__int64)&BugCheckParameter3 + 4);
  else
    HvpReleaseCellPaged(v58, (unsigned int *)&BugCheckParameter3 + 1);
  v59 = v80;
  *(_WORD *)(v8 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9) )
    CmpFreeKeyByCell(v9, v59, 0);
  v35 = (*(_DWORD *)(v8 + 184) & 0x40000) == 0;
  v97 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !v35 )
    v8 = *(_QWORD *)(v8 + 72);
  CmpStartKcbStackForTopLayerKcb((__int64)&v97, *(_QWORD *)(v8 + 72));
  v60 = WORD1(v97);
  v61 = Privileges[1];
  _mm_lfence();
  if ( v60 >= 2 )
    v62 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v97) - 2);
  else
    v62 = Privileges[SWORD1(v97) - 1];
  CmpReportNotifyHelper(
    (__int64)&v97,
    *(_QWORD *)&v62[1].Privilege[0].Luid.HighPart,
    0LL,
    (struct _KLOCK_ENTRIES *)1,
    &v95);
  if ( *(_QWORD *)&v62[1].Privilege[0].Luid.HighPart != CmpMasterHive )
    CmpReportNotifyHelper((__int64)&v97, CmpMasterHive, 0LL, (struct _KLOCK_ENTRIES *)1, &v95);
  if ( v61 )
    CmSiFreeMemory(v61);
  if ( !CmpProfileLoaded )
  {
    ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v96);
  CmpUnlockRegistry(v63);
  v7 = 0;
  CmpDestroyHive((_QWORD *)v87);
  v87 = 0LL;
  CmpSignalDeferredPosts((_QWORD **)&v95);
  v6 = v84;
LABEL_104:
  CmpDrainDelayDerefContext((_QWORD **)&v96);
  if ( v7 )
    CmpUnlockRegistry(v64);
  if ( v87 )
  {
    CmpDestroyHive((_QWORD *)v87);
    v87 = 0LL;
  }
  if ( v94 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)v89);
    else
      HvpReleaseCellPaged(v9, v89);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)v82);
    else
      HvpReleaseCellPaged(v9, v82);
  }
  if ( v88 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)&v85);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v85);
  }
  CmpCleanupRollbackPacket((__int64)&v90);
  CmpTraceHiveRestoreStop((unsigned int)HiveVolatile);
  return (unsigned int)HiveVolatile;
}
