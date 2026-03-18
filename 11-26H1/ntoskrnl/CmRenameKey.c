/*
 * XREFs of CmRenameKey @ 0x140857A3C
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1404C83A0 (CmpDereferenceSecurityNode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpCheckKcbStackAccess @ 0x140772FB8 (CmpCheckKcbStackAccess.c)
 *     CmpInsertKeyHash @ 0x140859398 (CmpInsertKeyHash.c)
 *     CmpReferenceSecurityNode @ 0x14085B3C4 (CmpReferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14085ED00 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14085EEFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14085F08C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpMarkAllChildrenDirty @ 0x140860000 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14086016C (CmpUpdateParentForEachSon.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408AF9AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B10E4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpRemoveKeyHash @ 0x1408BA020 (CmpRemoveKeyHash.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotify @ 0x1408BAD14 (CmpReportNotify.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408BC430 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1408BCEC4 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1408BDBF0 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1408C1970 (CmpAddSubKeyToList.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1408C4A20 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408C5558 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     CmpHashUnicodeComponent @ 0x1408D1470 (CmpHashUnicodeComponent.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408DB7FC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408DD750 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408DD790 (CmpCopyName.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E08B8 (CmpCleanUpSubKeyInfo.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     CmpKeyEnumStackReset @ 0x140981794 (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140981988 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140981D5C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140982540 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpResetKeyNodeStack @ 0x1409830BC (CmpResetKeyNodeStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409E2770 (CmpFindKcbInHashEntryByName.c)
 *     CmpDuplicateIndex @ 0x140A2EFF4 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x140A2F40C (CmpMarkEntireIndexDirty.c)
 *     CmpFreeIndexByCell @ 0x140A2F4F0 (CmpFreeIndexByCell.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A2F9B0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCreateLayerLink @ 0x140A79A78 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140A79B08 (CmpAllocateLayerInfoForKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140A79B80 (CmpReferenceKeyControlBlock.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140AFD120 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2250C (CmpSearchForOpenSubKeys.c)
 *     CmpInvalidateSubtree @ 0x140B474C4 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140B4CB14 (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x140B5C1B8 (CmpLogUnsupportedOperation.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140B61DD8 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140B6237C (CmpSubtreeEnumeratorInitialize.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, unsigned __int16 *a2, char a3)
{
  char v3; // bl
  _QWORD *v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rcx
  int started; // r14d
  int v13; // eax
  __int64 v14; // rdx
  ULONG_PTR v15; // rbx
  int v16; // edx
  int v17; // r9d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // ebx
  __int64 v23; // r8
  int v24; // eax
  int v25; // edi
  int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v30; // r10
  ULONG_PTR v31; // r14
  __int64 v32; // r8
  ULONG_PTR v33; // r10
  __int16 i; // r9
  __int64 v35; // rax
  __int16 v36; // r9
  char v37; // r12
  __int64 v38; // r12
  __int16 v39; // r12
  __int64 KcbAtLayerHeight; // r13
  __int64 v41; // r9
  __int64 v42; // r8
  int SubKeyByNameWithStatus; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int16 j; // ax
  __int64 v49; // r13
  ULONG_PTR v50; // rax
  ULONG_PTR v51; // r14
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v56; // rdx
  ULONG_PTR v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rcx
  int k; // eax
  __int64 EntryAtLayerHeight; // rax
  unsigned __int16 *v64; // r14
  unsigned __int16 v65; // ax
  __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned int v68; // r14d
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // edx
  __int64 v72; // rax
  char v73; // cl
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rdx
  void *v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rdi
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  int v90; // [rsp+20h] [rbp-E0h]
  int v91; // [rsp+20h] [rbp-E0h]
  int v92; // [rsp+20h] [rbp-E0h]
  char v93; // [rsp+54h] [rbp-ACh]
  bool v94; // [rsp+56h] [rbp-AAh]
  char v95; // [rsp+60h] [rbp-A0h]
  __int64 v96; // [rsp+68h] [rbp-98h]
  __int16 v98; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+74h] [rbp-8Ch]
  unsigned int v100; // [rsp+80h] [rbp-80h]
  unsigned int v101; // [rsp+84h] [rbp-7Ch]
  __int64 v102; // [rsp+88h] [rbp-78h]
  __int64 v104; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp-58h]
  __int128 v107; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v108; // [rsp+C0h] [rbp-40h]
  unsigned int v109; // [rsp+C4h] [rbp-3Ch]
  __int64 v110; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v111; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v112; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v113; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v114; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v116; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v117; // [rsp+108h] [rbp+8h]
  __int64 v118; // [rsp+110h] [rbp+10h]
  __int64 v119; // [rsp+118h] [rbp+18h] BYREF
  __int64 NameControlBlock; // [rsp+120h] [rbp+20h]
  int v121; // [rsp+128h] [rbp+28h] BYREF
  __int64 v122; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v123[2]; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v124[2]; // [rsp+158h] [rbp+58h] BYREF
  _OWORD v125[2]; // [rsp+178h] [rbp+78h] BYREF
  __int16 v126; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v127; // [rsp+1A8h] [rbp+A8h]
  char v128[80]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v129; // [rsp+200h] [rbp+100h]

  v3 = a3;
  v117 = a1;
  v4 = a1;
  v116 = 0LL;
  v112 = 0LL;
  v110 = 0LL;
  v115 = 0LL;
  v113 = 0LL;
  v111 = 0LL;
  v108 = 0;
  v114 = 0LL;
  memset_0(&v126, 0, 0x68uLL);
  v119 = 0LL;
  BugCheckParameter4 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(v123, 0, sizeof(v123));
  WORD1(v123[0]) = -1;
  memset(v124, 0, sizeof(v124));
  WORD1(v124[0]) = -1;
  v5 = 0LL;
  memset(v125, 0, sizeof(v125));
  WORD1(v125[0]) = -1;
  v6 = 0LL;
  v107 = 0LL;
  v7 = 0LL;
  v96 = 0LL;
  HvpGetCellContextInitialize(&v112);
  HvpGetCellContextInitialize(&v110);
  v122 = 0LL;
  HvpGetCellContextInitialize(&v115);
  HvpGetCellContextInitialize(&v111);
  v109 = v8;
  v104 = 0LL;
  HvpGetCellContextInitialize(&v114);
  NameControlBlock = 0LL;
  v100 = v9;
  v101 = v9;
  v93 = 0;
  CmpSubtreeEnumeratorInitialize(&v126);
  CmpInitializeDelayDerefContext(&v113);
  while ( 1 )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    v118 = v7;
    if ( (unsigned __int8)CmpIsShutdownRundownActive(0xFFFFF78000000014uLL) )
    {
      started = -1073741431;
      v95 = 0;
      goto LABEL_190;
    }
    CmpLockRegistryExclusive(v11);
    v5 = v4[1];
    v95 = 1;
    v6 = *(_QWORD *)(v5 + 72);
    v102 = v6;
    started = CmpStartKcbStackForTopLayerKcb(v123, v5);
    if ( started < 0 )
      goto LABEL_190;
    v13 = CmpStartKcbStackForTopLayerKcb(v124, v6);
    v14 = 0LL;
    started = v13;
    if ( v13 < 0 )
      goto LABEL_192;
    if ( (*(_DWORD *)(v5 + 8) & 0x180) != 0
      || (unsigned __int8)CmpIsKcbImmutable(v5, 0LL)
      || *(_QWORD *)(v5 + 32) == CmpMasterHive
      || (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
LABEL_192:
      v38 = v14;
      goto LABEL_184;
    }
    started = CmpPerformKeyBodyDeletionCheck(v4, v14);
    if ( started < 0 )
      goto LABEL_190;
    if ( v4[7] || v4[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v4, &v116);
      if ( started < 0 )
        goto LABEL_190;
      v15 = v116;
      started = CmpPerformKeyBodyDeletionCheck(v4, v116);
      if ( started < 0 )
        goto LABEL_190;
      if ( v15 )
      {
        CmpLogUnsupportedOperation(24LL);
        started = -1073741822;
LABEL_190:
        v38 = 0LL;
        goto LABEL_184;
      }
      v3 = a3;
    }
    else
    {
      v116 = 0LL;
    }
    started = CmpCheckKcbStackAccess((__int64)v124, 0LL);
    if ( started < 0 )
      goto LABEL_190;
    LOBYTE(v17) = v3;
    started = CmpDoAccessCheckOnLayeredSubtree(
                (unsigned int)v123,
                v16,
                0,
                v17,
                *(_WORD *)(v5 + 66) != 0 ? 196633 : 0x10000,
                1);
    if ( started < 0 )
      goto LABEL_190;
    LOBYTE(v18) = 1;
    CmpFlushNotifiesOnKeyBodyList(v5, 0LL, &v113, v18);
    CmpReportNotify(v5, v19, 1LL, 0LL);
    LOBYTE(v20) = 1;
    v22 = CmpTryAcquireKcbIXLocks(v5, v20, v21, &v107, v90);
    started = v22;
    if ( v22 != -1073741267 && v22 < 0 )
      goto LABEL_190;
    started = CmpTryAcquireKcbIXLocks(v6, 1LL, v23, &v107, v91);
    if ( started == -1073741267 )
      goto LABEL_68;
    v94 = v22 == -1073741267;
    if ( started < 0 )
      goto LABEL_190;
    if ( v22 == -1073741267 )
    {
LABEL_68:
      CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
      CmpDrainDelayDerefContext((_QWORD **)&v113);
      CmpUnlockRegistry(v46);
      v95 = 0;
      started = CmpAbortRollbackPacket(&v107, 0LL);
      if ( started < 0 )
      {
        v38 = 0LL;
        goto LABEL_184;
      }
      CmpCleanupRollbackPacket(&v107);
      v107 = 0LL;
      CmpCleanupKcbStack(v123);
      CmpCleanupKcbStack(v124);
      goto LABEL_70;
    }
    v24 = CmpHashUnicodeComponent(a2);
    v25 = 37 * *(_DWORD *)(v6 + 16);
    v26 = v24;
    v27 = *(_QWORD *)(v6 + 32);
    v121 = v24;
    v28 = v24 + v25;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v27, v28, v6, a2);
    v30 = 0LL;
    BugCheckParameter4 = KcbInHashEntryByName;
    v31 = KcbInHashEntryByName;
    if ( !KcbInHashEntryByName )
    {
      v39 = *(_WORD *)(v6 + 66);
      v99 = -1;
      v96 = 0LL;
      while ( 1 )
      {
        if ( v39 < 0 )
          goto LABEL_55;
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v124);
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v41) == 1 )
          goto LABEL_55;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        {
          LOBYTE(v42) = 1;
          CmpGetKeyNodeForKcb(KcbAtLayerHeight, &v110, v42);
          SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(KcbAtLayerHeight + 32));
          v44 = *(_QWORD *)(KcbAtLayerHeight + 32);
          started = SubKeyByNameWithStatus;
          if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v44, &v110);
          else
            HvpReleaseCellPaged(v44, &v110);
          v30 = 0LL;
          if ( started >= 0 )
          {
            v96 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_55:
            v6 = v102;
            v38 = v30;
            v93 = v30;
            goto LABEL_57;
          }
          if ( started != -1073741772 )
          {
            v6 = v102;
            v38 = 0LL;
            v7 = 0LL;
            goto LABEL_184;
          }
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v117) )
            goto LABEL_55;
        }
        --v39;
      }
    }
    CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    v99 = *(_DWORD *)(v31 + 40);
    started = CmpStartKcbStackForTopLayerKcb(v125, v31);
    if ( started < 0 )
    {
      v38 = 0LL;
      goto LABEL_183;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v125, 0LL) )
    {
      started = -1073741535;
      v38 = 0LL;
LABEL_183:
      v7 = v96;
      goto LABEL_184;
    }
    v33 = BugCheckParameter4;
    for ( i = *(_WORD *)(BugCheckParameter4 + 66); i >= 0; i = v36 - 1 )
    {
      v35 = CmpGetKcbAtLayerHeight(v125);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v35, v4) == 1 )
      {
        v37 = 1;
        goto LABEL_33;
      }
    }
    v37 = v93;
LABEL_33:
    v93 = v37;
    started = CmpTryAcquireKcbIXLocks(v33, 1LL, v32, &v107, v92);
    if ( started == -1073741267 )
    {
      v94 = 1;
    }
    else if ( started < 0 )
    {
      goto LABEL_71;
    }
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(BugCheckParameter4, 2LL, &v107);
    if ( started == -1073741267 )
    {
      v94 = 1;
    }
    else if ( started < 0 )
    {
LABEL_71:
      v7 = v118;
      v38 = 0LL;
      goto LABEL_184;
    }
    started = CmpPrepareForSubtreeInvalidation(BugCheckParameter4, 0LL, &v107);
    if ( started == -1073741267 )
    {
      v38 = 0LL;
      v96 = v118;
      v94 = 1;
      goto LABEL_57;
    }
    v93 = v37;
    v38 = 0LL;
    v96 = v118;
    if ( started < 0 )
      break;
LABEL_57:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v5, 2LL, &v107);
    if ( started == -1073741267 )
    {
      v94 = 1;
    }
    else if ( started < 0 )
    {
      goto LABEL_183;
    }
    if ( *(_WORD *)(v5 + 66) )
    {
      started = CmpPrepareForSubtreeInvalidation(v5, 0LL, &v107);
      if ( started == -1073741267 )
        goto LABEL_64;
      if ( started < 0 )
        goto LABEL_183;
    }
    if ( !v94 )
    {
      if ( BugCheckParameter4 )
      {
        CmpInvalidateAllHigherLayerKcbs(BugCheckParameter4, 8LL, 2LL, &v113);
        CmpInvalidateSubtree(BugCheckParameter4, 8, 0, (unsigned int)&v113, 0LL);
        CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 8LL, &v113, 1LL);
        CmpMarkKeyUnbacked(BugCheckParameter4, &v113);
        CmpDiscardKcb(BugCheckParameter4);
      }
      CmpInvalidateAllHigherLayerKcbs(v5, 8LL, 2LL, &v113);
      if ( *(_WORD *)(v5 + 66) )
        CmpInvalidateSubtree(v5, 8, 0, (unsigned int)&v113, 0LL);
      for ( j = 0; ; j = v98 + 1 )
      {
        v98 = j;
        if ( j >= *(__int16 *)(v5 + 66) )
          break;
        v49 = CmpGetKcbAtLayerHeight(v124);
        v50 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v102 + 32), v28, v102, a2);
        v116 = v50;
        v51 = v50;
        if ( v50 )
        {
          CmpReferenceKeyControlBlock(v50);
          CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
          BugCheckParameter2 = v51;
        }
        else
        {
          if ( *(_DWORD *)(v49 + 40) == -1 )
            goto LABEL_90;
          CmpGetKeyNodeForKcb(v49, &v110, 1LL);
          v52 = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v49 + 32));
          v53 = *(_QWORD *)(v49 + 32);
          started = v52;
          if ( (*(_BYTE *)(v53 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v53, &v110);
          else
            HvpReleaseCellPaged(v53, &v110);
          if ( started == -1073741772 )
          {
LABEL_90:
            v54 = 0xFFFFFFFFLL;
            v108 = -1;
          }
          else
          {
            if ( started < 0 )
              goto LABEL_182;
            v54 = v108;
          }
          started = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v49 + 32),
                      v54,
                      v49,
                      BugCheckParameter2,
                      0,
                      a2,
                      v26,
                      v28,
                      &v116);
          if ( started < 0 )
            goto LABEL_182;
          if ( BugCheckParameter2 )
            CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
          BugCheckParameter2 = v116;
        }
      }
      if ( BugCheckParameter2 && (started = CmpAllocateLayerInfoForKcb(BugCheckParameter2), started < 0)
        || *(_WORD *)(v5 + 66)
        && ((LOBYTE(v47) = 1, started = CmpPromoteKey(v123, v47, 0LL), started < 0)
         || (started = CmpPromoteSubtree(v123, 0LL), started < 0)) )
      {
LABEL_182:
        v6 = v102;
        goto LABEL_183;
      }
      v6 = v102;
      started = HvpMarkCellDirty(*(_QWORD *)(v102 + 32), *(unsigned int *)(v102 + 40));
      if ( started < 0 )
        goto LABEL_183;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(v102, &v114, 1LL);
      v104 = KeyNodeForKcb;
      v56 = *(unsigned int *)(KeyNodeForKcb + 28);
      if ( (_DWORD)v56 != -1 )
      {
        started = CmpMarkEntireIndexDirty(*(_QWORD *)(v102 + 32), v56);
        if ( started < 0 )
          goto LABEL_183;
        KeyNodeForKcb = v104;
      }
      v57 = *(unsigned int *)(KeyNodeForKcb + 32);
      if ( (_DWORD)v57 != -1 )
      {
        started = CmpMarkEntireIndexDirty(*(_QWORD *)(v102 + 32), v57);
        if ( started < 0 )
          goto LABEL_183;
      }
      started = HvpMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
      if ( started < 0 )
        goto LABEL_183;
      if ( v99 != -1 )
      {
        started = CmpMarkKeyDirty(*(_QWORD *)(v102 + 32));
        if ( started < 0 )
          goto LABEL_183;
      }
      if ( v93 )
      {
        for ( k = CmpSubtreeEnumeratorStartForKcbStack(&v126, v123);
              ;
              k = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8)) )
        {
          started = k;
          if ( k < 0 )
            break;
          if ( (unsigned int)CmpSubtreeEnumeratorAdvance(&v126) == -2147483622 )
            goto LABEL_112;
          CmpSubtreeEnumeratorGetCurrentKeyStacks(&v126, 0LL, &v119);
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v119, *(unsigned __int16 *)(v5 + 66));
        }
        goto LABEL_183;
      }
      started = CmpMarkAllChildrenDirty(*(_QWORD *)(v5 + 32));
      if ( started < 0 )
        goto LABEL_183;
LABEL_112:
      CmpNameSize(a2);
      started = HvAllocateCell(*(_QWORD *)(v5 + 32), (__int64)&v122, (__int64)&v115);
      if ( started < 0 )
      {
        v60 = v122;
      }
      else
      {
        LOBYTE(v58) = 1;
        v59 = CmpGetKeyNodeForKcb(v5, &v111, v58);
        v60 = v122;
        *(_OWORD *)v122 = *(_OWORD *)v59;
        *(_OWORD *)(v60 + 16) = *(_OWORD *)(v59 + 16);
        *(_OWORD *)(v60 + 32) = *(_OWORD *)(v59 + 32);
        *(_OWORD *)(v60 + 48) = *(_OWORD *)(v59 + 48);
        *(_QWORD *)(v60 + 64) = *(_QWORD *)(v59 + 64);
        *(_DWORD *)(v60 + 72) = *(_DWORD *)(v59 + 72);
        v61 = *(_QWORD *)(v5 + 32);
        if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v61, &v111);
        else
          HvpReleaseCellPaged(v61, &v111);
        v64 = a2;
        v65 = CmpCopyName(v60 + 76, a2);
        *(_WORD *)(v60 + 72) = v65;
        if ( v65 >= *a2 )
          *(_WORD *)(v60 + 2) &= ~0x20u;
        else
          *(_WORD *)(v60 + 2) |= 0x20u;
        *(_QWORD *)(v60 + 4) = v10;
        if ( v93 )
          *(_BYTE *)(v60 + 13) |= 3u;
        if ( *(_WORD *)(v5 + 66) )
        {
          started = CmpReferenceSecurityNode(*(_QWORD *)(v5 + 32));
          if ( started >= 0 )
          {
            v64 = a2;
            v109 = *(_DWORD *)(v60 + 44);
            goto LABEL_129;
          }
        }
        else
        {
LABEL_129:
          v66 = *(_QWORD *)(v5 + 32);
          if ( (*(_BYTE *)(v66 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v66, &v115);
          else
            HvpReleaseCellPaged(v66, &v115);
          v60 = 0LL;
          NameControlBlock = CmpGetNameControlBlock(v64, &v121);
          if ( NameControlBlock )
          {
            if ( *(_DWORD *)(v104 + 28) == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v102 + 32)), started >= 0) )
            {
              if ( *(_DWORD *)(v104 + 32) == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v102 + 32)), started >= 0) )
              {
                if ( v99 == -1 || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v102 + 32)) )
                {
                  started = CmpAddSubKeyToList(*(_QWORD *)(v102 + 32));
                  if ( started >= 0 )
                  {
                    if ( *(_WORD *)(v5 + 66) || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v102 + 32)) )
                    {
                      v67 = v104;
                      v68 = v99;
                      v69 = *(_DWORD *)(v104 + 28);
                      *(_DWORD *)(v104 + 28) = v100;
                      v100 = v69;
                      v70 = *(_DWORD *)(v104 + 32);
                      *(_DWORD *)(v104 + 32) = v101;
                      v101 = v70;
                      if ( v99 != -1 )
                        --*(_DWORD *)(v104 + 4 * ((unsigned __int64)v99 >> 31) + 20);
                      ++*(_DWORD *)(v104 + 24);
                      if ( !*(_WORD *)(v5 + 66) )
                        --*(_DWORD *)(v104 + 4 * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31) + 20);
                      LOBYTE(v67) = 1;
                      CmpCleanUpSubKeyInfo(v102, v67);
                      v71 = *a2;
                      if ( (unsigned __int16)*(_DWORD *)(v104 + 52) < v71 )
                      {
                        *(_WORD *)(v104 + 52) = v71;
                        *(_WORD *)(v102 + 176) = v71;
                      }
                      if ( *(_WORD *)(v5 + 66) )
                      {
                        v72 = CmpGetKeyNodeForKcb(v5, &v111, 1LL);
                        v73 = *(_BYTE *)(v72 + 13);
                        *(_WORD *)(v72 + 2) &= 0x20u;
                        *(_WORD *)(v72 + 52) = 0;
                        *(_DWORD *)(v72 + 52) &= 0xFF00FFFF;
                        *(_BYTE *)(v72 + 13) = v73 & 0x7C | 1;
                        *(_DWORD *)(v72 + 28) = -1;
                        *(_DWORD *)(v72 + 32) = -1;
                        *(_DWORD *)(v72 + 40) = -1;
                        *(_DWORD *)(v72 + 48) = -1;
                        *(_QWORD *)(v72 + 20) = 0LL;
                        *(_DWORD *)(v72 + 36) = 0;
                        *(_BYTE *)(v72 + 55) = 0;
                        *(_QWORD *)(v72 + 56) = 0LL;
                        *(_DWORD *)(v72 + 64) = 0;
                        *(_WORD *)(v72 + 74) = 0;
                        v74 = *(_QWORD *)(v5 + 32);
                        if ( (*(_BYTE *)(v74 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v74, &v111);
                        else
                          HvpReleaseCellPaged(v74, &v111);
                      }
                      else
                      {
                        HvFreeCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
                      }
                      *(_DWORD *)(v5 + 40) = -1;
                      v109 = -1;
                      if ( *(_WORD *)(v5 + 66) )
                      {
                        v75 = *(_QWORD **)(v5 + 192);
                        v76 = *v75;
                        if ( *(_QWORD **)(*v75 + 8LL) != v75 || (v77 = (_QWORD *)v75[1], (_QWORD *)*v77 != v75) )
                          __fastfail(3u);
                        *v77 = v76;
                        *(_QWORD *)(v76 + 8) = v77;
                        CmpDereferenceKeyControlBlockWithLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL)
                                                                        + 16LL));
                        *(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) = 0LL;
                        CmpCreateLayerLink(BugCheckParameter2);
                      }
                      CmpRemoveKeyHash(*(_QWORD *)(v5 + 32), v5 + 16);
                      v78 = *(_QWORD *)(v5 + 32);
                      *(_DWORD *)(v5 + 16) = v28;
                      CmpInsertKeyHash(v78, v5 + 16);
                      v79 = NameControlBlock;
                      NameControlBlock = *(_QWORD *)(v5 + 80);
                      *(_QWORD *)(v5 + 80) = v79;
                      if ( *(_QWORD *)(v5 + 296) )
                        _InterlockedOr64((volatile signed __int64 *)(v5 + 296), 1uLL);
                      v80 = *(void **)(v5 + 200);
                      if ( (unsigned __int64)v80 >= 2 )
                        ExFreePoolWithTag(v80, 0x624E4D43u);
                      *(_QWORD *)(v5 + 200) = 0LL;
                      if ( v93 )
                        *(_BYTE *)(v5 + 65) = 3;
                      CmpUpdateParentForEachSon(*(_QWORD *)(v5 + 32));
                      if ( v93 )
                      {
                        v81 = 0LL;
                        v82 = 512LL;
                        do
                        {
                          CmpKeyEnumStackReset(v81 + v129 + 56);
                          v81 += 408LL;
                          --v82;
                        }
                        while ( v82 );
                        v127 = 0LL;
                        v126 = -2;
                        CmpResetKeyNodeStack(v128);
                        CmpSubtreeEnumeratorBeginForKcbStack(&v126, v123);
                        v83 = CmpSubtreeEnumeratorAdvance(&v126);
                        v68 = v99;
                        while ( v83 != -2147483622 )
                        {
                          CmpSubtreeEnumeratorGetCurrentKeyStacks(&v126, 0LL, &v119);
                          v84 = CmpKeyNodeStackGetEntryAtLayerHeight(v119, *(unsigned __int16 *)(v5 + 66));
                          *(_BYTE *)(*(_QWORD *)(v84 + 16) + 13LL) |= 3u;
                          v83 = CmpSubtreeEnumeratorAdvance(&v126);
                        }
                      }
                      *(_QWORD *)(v104 + 4) = v10;
                      v85 = *(_QWORD *)(v102 + 32);
                      *(_QWORD *)(v102 + 168) = v10;
                      if ( (*(_BYTE *)(v85 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v85, &v114);
                      else
                        HvpReleaseCellPaged(v85, &v114);
                      v104 = 0LL;
                      CmpSearchForOpenSubKeys(v5, 1LL, 0LL);
                      ++*(_QWORD *)(v102 + 304);
                      ++*(_QWORD *)(v5 + 304);
                      if ( v68 != -1 )
                        CmpFreeKeyByCell(*(_QWORD *)(v102 + 32));
                      started = 0;
                    }
                    else
                    {
                      started = -1073741443;
                    }
                  }
                  goto LABEL_183;
                }
                started = -1073741443;
              }
            }
            v7 = v96;
            goto LABEL_184;
          }
          started = -1073741670;
        }
      }
      v7 = v96;
      goto LABEL_185;
    }
LABEL_64:
    CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
    if ( BugCheckParameter4 )
    {
      CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4);
      BugCheckParameter4 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v113);
    CmpUnlockRegistry(v45);
    v95 = 0;
    started = CmpAbortRollbackPacket(&v107, 0LL);
    if ( started < 0 )
      goto LABEL_183;
    CmpCleanupRollbackPacket(&v107);
    v107 = 0LL;
    CmpCleanupKcbStack(v123);
    CmpCleanupKcbStack(v124);
    v4 = v117;
    v7 = v96;
LABEL_70:
    v3 = a3;
  }
  v7 = v118;
LABEL_184:
  v60 = 0LL;
LABEL_185:
  CmpSubtreeEnumeratorCleanup(&v126);
  if ( v104 )
  {
    v86 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v86 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v86, &v114);
    else
      HvpReleaseCellPaged(v86, &v114);
  }
  if ( v38 )
  {
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v7, &v112);
    else
      HvpReleaseCellPaged(v7, &v112);
  }
  if ( v109 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v5 + 32), v109);
  if ( v60 )
  {
    v87 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v87 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v87, &v115);
    else
      HvpReleaseCellPaged(v87, &v115);
  }
  if ( v100 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v100);
  if ( v101 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v101);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  if ( BugCheckParameter4 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4);
  CmpDrainDelayDerefContext((_QWORD **)&v113);
  if ( v95 )
    CmpUnlockRegistry(v88);
  CmpCleanupKcbStack(v123);
  CmpCleanupKcbStack(v124);
  CmpCleanupKcbStack(v125);
  CmpCleanupRollbackPacket(&v107);
  return (unsigned int)started;
}
