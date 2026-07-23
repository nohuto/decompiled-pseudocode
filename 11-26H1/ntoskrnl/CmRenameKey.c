/*
 * XREFs of CmRenameKey @ 0x14085DDCC
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpCheckKcbStackAccess @ 0x140775FB8 (CmpCheckKcbStackAccess.c)
 *     CmpInsertKeyHash @ 0x14085F728 (CmpInsertKeyHash.c)
 *     CmpReferenceSecurityNode @ 0x1408616B8 (CmpReferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140864FF0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1408651EC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14086537C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpMarkAllChildrenDirty @ 0x1408662F0 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14086645C (CmpUpdateParentForEachSon.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpRemoveKeyHash @ 0x1408C05F0 (CmpRemoveKeyHash.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotify @ 0x1408C12E4 (CmpReportNotify.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408C2A00 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1408C41C0 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1408CAFF0 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     CmpKeyEnumStackReset @ 0x1409437A4 (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140943998 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpResetKeyNodeStack @ 0x1409450CC (CmpResetKeyNodeStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409DF780 (CmpFindKcbInHashEntryByName.c)
 *     CmpDuplicateIndex @ 0x140A40E80 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x140A41298 (CmpMarkEntireIndexDirty.c)
 *     CmpFreeIndexByCell @ 0x140A4137C (CmpFreeIndexByCell.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCreateLayerLink @ 0x140A819B8 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140A81A48 (CmpAllocateLayerInfoForKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140AFEC90 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2490C (CmpSearchForOpenSubKeys.c)
 *     CmpInvalidateSubtree @ 0x140B494F4 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140B64E78 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140B6541C (CmpSubtreeEnumeratorInitialize.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
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
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // r8
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v29; // r10
  ULONG_PTR v30; // r14
  __int64 v31; // r8
  ULONG_PTR v32; // r10
  __int16 i; // r9
  __int64 v34; // rax
  __int16 v35; // r9
  char v36; // r12
  __int64 v37; // r12
  __int16 v38; // r12
  __int64 KcbAtLayerHeight; // r13
  __int64 v40; // r9
  __int64 v41; // r8
  int SubKeyByNameWithStatus; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int16 j; // ax
  __int64 v48; // r13
  ULONG_PTR v49; // rax
  ULONG_PTR v50; // r14
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v55; // rdx
  ULONG_PTR v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rcx
  int k; // eax
  __int64 EntryAtLayerHeight; // rax
  unsigned __int16 *v63; // r14
  unsigned __int16 v64; // ax
  __int64 v65; // rcx
  __int64 v66; // rdx
  unsigned int v67; // r14d
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // edx
  __int64 v71; // rax
  char v72; // cl
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  void *v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rdi
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v89; // [rsp+20h] [rbp-E0h]
  int v90; // [rsp+20h] [rbp-E0h]
  int v91; // [rsp+20h] [rbp-E0h]
  char v92; // [rsp+54h] [rbp-ACh]
  bool v93; // [rsp+56h] [rbp-AAh]
  char v94; // [rsp+60h] [rbp-A0h]
  __int64 v95; // [rsp+68h] [rbp-98h]
  __int16 v97; // [rsp+70h] [rbp-90h]
  unsigned int v98; // [rsp+74h] [rbp-8Ch]
  unsigned int v99; // [rsp+80h] [rbp-80h]
  unsigned int v100; // [rsp+84h] [rbp-7Ch]
  __int64 v101; // [rsp+88h] [rbp-78h]
  __int64 v103; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp-58h]
  __int128 v106; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v107; // [rsp+C0h] [rbp-40h]
  unsigned int v108; // [rsp+C4h] [rbp-3Ch]
  __int64 v109; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v112; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v113; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v114; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v115; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v116; // [rsp+108h] [rbp+8h]
  __int64 v117; // [rsp+110h] [rbp+10h]
  __int64 v118; // [rsp+118h] [rbp+18h] BYREF
  __int64 NameControlBlock; // [rsp+120h] [rbp+20h]
  int v120; // [rsp+128h] [rbp+28h] BYREF
  __int64 v121; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v122[2]; // [rsp+138h] [rbp+38h] BYREF
  _OWORD v123[2]; // [rsp+158h] [rbp+58h] BYREF
  _OWORD v124[2]; // [rsp+178h] [rbp+78h] BYREF
  __int16 v125; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v126; // [rsp+1A8h] [rbp+A8h]
  char v127[80]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v128; // [rsp+200h] [rbp+100h]

  v3 = a3;
  v116 = a1;
  v4 = a1;
  v115 = 0LL;
  v111 = 0LL;
  v109 = 0LL;
  v114 = 0LL;
  v112 = 0LL;
  v110 = 0LL;
  v107 = 0;
  v113 = 0LL;
  memset_0(&v125, 0, 0x68uLL);
  v118 = 0LL;
  BugCheckParameter4 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(v122, 0, sizeof(v122));
  WORD1(v122[0]) = -1;
  memset(v123, 0, sizeof(v123));
  WORD1(v123[0]) = -1;
  v5 = 0LL;
  memset(v124, 0, sizeof(v124));
  WORD1(v124[0]) = -1;
  v6 = 0LL;
  v106 = 0LL;
  v7 = 0LL;
  v95 = 0LL;
  HvpGetCellContextInitialize(&v111);
  HvpGetCellContextInitialize(&v109);
  v121 = 0LL;
  HvpGetCellContextInitialize(&v114);
  HvpGetCellContextInitialize(&v110);
  v108 = v8;
  v103 = 0LL;
  HvpGetCellContextInitialize(&v113);
  NameControlBlock = 0LL;
  v99 = v9;
  v100 = v9;
  v92 = 0;
  CmpSubtreeEnumeratorInitialize(&v125);
  CmpInitializeDelayDerefContext(&v112);
  while ( 1 )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    v117 = v7;
    if ( (unsigned __int8)CmpIsShutdownRundownActive(0xFFFFF78000000014uLL) )
    {
      started = -1073741431;
      v94 = 0;
      goto LABEL_190;
    }
    CmpLockRegistryExclusive(v11);
    v5 = v4[1];
    v94 = 1;
    v6 = *(_QWORD *)(v5 + 72);
    v101 = v6;
    started = CmpStartKcbStackForTopLayerKcb(v122, v5);
    if ( started < 0 )
      goto LABEL_190;
    v13 = CmpStartKcbStackForTopLayerKcb(v123, v6);
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
      v37 = v14;
      goto LABEL_184;
    }
    started = CmpPerformKeyBodyDeletionCheck(v4, v14);
    if ( started < 0 )
      goto LABEL_190;
    if ( v4[7] || v4[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v4, &v115);
      if ( started < 0 )
        goto LABEL_190;
      v15 = v115;
      started = CmpPerformKeyBodyDeletionCheck(v4, v115);
      if ( started < 0 )
        goto LABEL_190;
      if ( v15 )
      {
        CmpLogUnsupportedOperation(24LL);
        started = -1073741822;
LABEL_190:
        v37 = 0LL;
        goto LABEL_184;
      }
      v3 = a3;
    }
    else
    {
      v115 = 0LL;
    }
    started = CmpCheckKcbStackAccess((__int64)v123, 0LL);
    if ( started < 0 )
      goto LABEL_190;
    LOBYTE(v17) = v3;
    started = CmpDoAccessCheckOnLayeredSubtree(
                (unsigned int)v122,
                v16,
                0,
                v17,
                *(_WORD *)(v5 + 66) != 0 ? 196633 : 0x10000,
                1);
    if ( started < 0 )
      goto LABEL_190;
    CmpFlushNotifiesOnKeyBodyList(v5, 0LL, &v112);
    CmpReportNotify(v5, v18, 1LL, 0LL);
    LOBYTE(v19) = 1;
    v21 = CmpTryAcquireKcbIXLocks(v5, v19, v20, &v106, v89);
    started = v21;
    if ( v21 != -1073741267 && v21 < 0 )
      goto LABEL_190;
    started = CmpTryAcquireKcbIXLocks(v6, 1LL, v22, &v106, v90);
    if ( started == -1073741267 )
      goto LABEL_68;
    v93 = v21 == -1073741267;
    if ( started < 0 )
      goto LABEL_190;
    if ( v21 == -1073741267 )
    {
LABEL_68:
      CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
      CmpDrainDelayDerefContext((_QWORD **)&v112);
      CmpUnlockRegistry(v45);
      v94 = 0;
      started = CmpAbortRollbackPacket(&v106, 0LL);
      if ( started < 0 )
      {
        v37 = 0LL;
        goto LABEL_184;
      }
      CmpCleanupRollbackPacket(&v106);
      v106 = 0LL;
      CmpCleanupKcbStack(v122);
      CmpCleanupKcbStack(v123);
      goto LABEL_70;
    }
    v23 = CmpHashUnicodeComponent(a2);
    v24 = 37 * *(_DWORD *)(v6 + 16);
    v25 = v23;
    v26 = *(_QWORD *)(v6 + 32);
    v120 = v23;
    v27 = v23 + v24;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v26, v27, v6, a2);
    v29 = 0LL;
    BugCheckParameter4 = KcbInHashEntryByName;
    v30 = KcbInHashEntryByName;
    if ( !KcbInHashEntryByName )
    {
      v38 = *(_WORD *)(v6 + 66);
      v98 = -1;
      v95 = 0LL;
      while ( 1 )
      {
        if ( v38 < 0 )
          goto LABEL_55;
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v123);
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v40) == 1 )
          goto LABEL_55;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        {
          LOBYTE(v41) = 1;
          CmpGetKeyNodeForKcb(KcbAtLayerHeight, &v109, v41);
          SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(KcbAtLayerHeight + 32));
          v43 = *(_QWORD *)(KcbAtLayerHeight + 32);
          started = SubKeyByNameWithStatus;
          if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v43, &v109);
          else
            HvpReleaseCellPaged(v43, &v109);
          v29 = 0LL;
          if ( started >= 0 )
          {
            v95 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_55:
            v6 = v101;
            v37 = v29;
            v92 = v29;
            goto LABEL_57;
          }
          if ( started != -1073741772 )
          {
            v6 = v101;
            v37 = 0LL;
            v7 = 0LL;
            goto LABEL_184;
          }
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v116) )
            goto LABEL_55;
        }
        --v38;
      }
    }
    CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    v98 = *(_DWORD *)(v30 + 40);
    started = CmpStartKcbStackForTopLayerKcb(v124, v30);
    if ( started < 0 )
    {
      v37 = 0LL;
      goto LABEL_183;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v124, 0LL) )
    {
      started = -1073741535;
      v37 = 0LL;
LABEL_183:
      v7 = v95;
      goto LABEL_184;
    }
    v32 = BugCheckParameter4;
    for ( i = *(_WORD *)(BugCheckParameter4 + 66); i >= 0; i = v35 - 1 )
    {
      v34 = CmpGetKcbAtLayerHeight(v124);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v34, v4) == 1 )
      {
        v36 = 1;
        goto LABEL_33;
      }
    }
    v36 = v92;
LABEL_33:
    v92 = v36;
    started = CmpTryAcquireKcbIXLocks(v32, 1LL, v31, &v106, v91);
    if ( started == -1073741267 )
    {
      v93 = 1;
    }
    else if ( started < 0 )
    {
      goto LABEL_71;
    }
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(BugCheckParameter4, 2LL, &v106);
    if ( started == -1073741267 )
    {
      v93 = 1;
    }
    else if ( started < 0 )
    {
LABEL_71:
      v7 = v117;
      v37 = 0LL;
      goto LABEL_184;
    }
    started = CmpPrepareForSubtreeInvalidation(BugCheckParameter4, 0LL, &v106);
    if ( started == -1073741267 )
    {
      v37 = 0LL;
      v95 = v117;
      v93 = 1;
      goto LABEL_57;
    }
    v92 = v36;
    v37 = 0LL;
    v95 = v117;
    if ( started < 0 )
      break;
LABEL_57:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v5, 2LL, &v106);
    if ( started == -1073741267 )
    {
      v93 = 1;
    }
    else if ( started < 0 )
    {
      goto LABEL_183;
    }
    if ( *(_WORD *)(v5 + 66) )
    {
      started = CmpPrepareForSubtreeInvalidation(v5, 0LL, &v106);
      if ( started == -1073741267 )
        goto LABEL_64;
      if ( started < 0 )
        goto LABEL_183;
    }
    if ( !v93 )
    {
      if ( BugCheckParameter4 )
      {
        CmpInvalidateAllHigherLayerKcbs(BugCheckParameter4, 8LL, 2LL, &v112);
        CmpInvalidateSubtree(BugCheckParameter4, 8, 0, (unsigned int)&v112, 0LL);
        CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 8LL, &v112);
        CmpMarkKeyUnbacked(BugCheckParameter4, &v112);
        CmpDiscardKcb(BugCheckParameter4);
      }
      CmpInvalidateAllHigherLayerKcbs(v5, 8LL, 2LL, &v112);
      if ( *(_WORD *)(v5 + 66) )
        CmpInvalidateSubtree(v5, 8, 0, (unsigned int)&v112, 0LL);
      for ( j = 0; ; j = v97 + 1 )
      {
        v97 = j;
        if ( j >= *(__int16 *)(v5 + 66) )
          break;
        v48 = CmpGetKcbAtLayerHeight(v123);
        v49 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v101 + 32), v27, v101, a2);
        v115 = v49;
        v50 = v49;
        if ( v49 )
        {
          CmpReferenceKeyControlBlock(v49);
          CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
          BugCheckParameter2 = v50;
        }
        else
        {
          if ( *(_DWORD *)(v48 + 40) == -1 )
            goto LABEL_90;
          CmpGetKeyNodeForKcb(v48, &v109, 1LL);
          v51 = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v48 + 32));
          v52 = *(_QWORD *)(v48 + 32);
          started = v51;
          if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v52, &v109);
          else
            HvpReleaseCellPaged(v52, &v109);
          if ( started == -1073741772 )
          {
LABEL_90:
            v53 = 0xFFFFFFFFLL;
            v107 = -1;
          }
          else
          {
            if ( started < 0 )
              goto LABEL_182;
            v53 = v107;
          }
          started = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v48 + 32),
                      v53,
                      v48,
                      BugCheckParameter2,
                      0,
                      a2,
                      v25,
                      v27,
                      &v115);
          if ( started < 0 )
            goto LABEL_182;
          if ( BugCheckParameter2 )
            CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
          BugCheckParameter2 = v115;
        }
      }
      if ( BugCheckParameter2 && (started = CmpAllocateLayerInfoForKcb(BugCheckParameter2), started < 0)
        || *(_WORD *)(v5 + 66)
        && ((LOBYTE(v46) = 1, started = CmpPromoteKey(v122, v46, 0LL), started < 0)
         || (started = CmpPromoteSubtree(v122, 0LL), started < 0)) )
      {
LABEL_182:
        v6 = v101;
        goto LABEL_183;
      }
      v6 = v101;
      started = HvpMarkCellDirty(*(_QWORD *)(v101 + 32), *(unsigned int *)(v101 + 40));
      if ( started < 0 )
        goto LABEL_183;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(v101, &v113, 1LL);
      v103 = KeyNodeForKcb;
      v55 = *(unsigned int *)(KeyNodeForKcb + 28);
      if ( (_DWORD)v55 != -1 )
      {
        started = CmpMarkEntireIndexDirty(*(_QWORD *)(v101 + 32), v55);
        if ( started < 0 )
          goto LABEL_183;
        KeyNodeForKcb = v103;
      }
      v56 = *(unsigned int *)(KeyNodeForKcb + 32);
      if ( (_DWORD)v56 != -1 )
      {
        started = CmpMarkEntireIndexDirty(*(_QWORD *)(v101 + 32), v56);
        if ( started < 0 )
          goto LABEL_183;
      }
      started = HvpMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
      if ( started < 0 )
        goto LABEL_183;
      if ( v98 != -1 )
      {
        started = CmpMarkKeyDirty(*(_QWORD *)(v101 + 32));
        if ( started < 0 )
          goto LABEL_183;
      }
      if ( v92 )
      {
        for ( k = CmpSubtreeEnumeratorStartForKcbStack(&v125, v122);
              ;
              k = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8)) )
        {
          started = k;
          if ( k < 0 )
            break;
          if ( (unsigned int)CmpSubtreeEnumeratorAdvance(&v125) == -2147483622 )
            goto LABEL_112;
          CmpSubtreeEnumeratorGetCurrentKeyStacks(&v125, 0LL, &v118);
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v118, *(unsigned __int16 *)(v5 + 66));
        }
        goto LABEL_183;
      }
      started = CmpMarkAllChildrenDirty(*(_QWORD *)(v5 + 32));
      if ( started < 0 )
        goto LABEL_183;
LABEL_112:
      CmpNameSize(a2);
      started = HvAllocateCell(*(_QWORD *)(v5 + 32), (__int64)&v121, (__int64)&v114);
      if ( started < 0 )
      {
        v59 = v121;
      }
      else
      {
        LOBYTE(v57) = 1;
        v58 = CmpGetKeyNodeForKcb(v5, &v110, v57);
        v59 = v121;
        *(_OWORD *)v121 = *(_OWORD *)v58;
        *(_OWORD *)(v59 + 16) = *(_OWORD *)(v58 + 16);
        *(_OWORD *)(v59 + 32) = *(_OWORD *)(v58 + 32);
        *(_OWORD *)(v59 + 48) = *(_OWORD *)(v58 + 48);
        *(_QWORD *)(v59 + 64) = *(_QWORD *)(v58 + 64);
        *(_DWORD *)(v59 + 72) = *(_DWORD *)(v58 + 72);
        v60 = *(_QWORD *)(v5 + 32);
        if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v60, &v110);
        else
          HvpReleaseCellPaged(v60, &v110);
        v63 = a2;
        v64 = CmpCopyName(v59 + 76, a2);
        *(_WORD *)(v59 + 72) = v64;
        if ( v64 >= *a2 )
          *(_WORD *)(v59 + 2) &= ~0x20u;
        else
          *(_WORD *)(v59 + 2) |= 0x20u;
        *(_QWORD *)(v59 + 4) = v10;
        if ( v92 )
          *(_BYTE *)(v59 + 13) |= 3u;
        if ( *(_WORD *)(v5 + 66) )
        {
          started = CmpReferenceSecurityNode(*(_QWORD *)(v5 + 32));
          if ( started >= 0 )
          {
            v63 = a2;
            v108 = *(_DWORD *)(v59 + 44);
            goto LABEL_129;
          }
        }
        else
        {
LABEL_129:
          v65 = *(_QWORD *)(v5 + 32);
          if ( (*(_BYTE *)(v65 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v65, &v114);
          else
            HvpReleaseCellPaged(v65, &v114);
          v59 = 0LL;
          NameControlBlock = CmpGetNameControlBlock(v63, &v120);
          if ( NameControlBlock )
          {
            if ( *(_DWORD *)(v103 + 28) == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v101 + 32)), started >= 0) )
            {
              if ( *(_DWORD *)(v103 + 32) == -1 || (started = CmpDuplicateIndex(*(_QWORD *)(v101 + 32)), started >= 0) )
              {
                if ( v98 == -1 || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v101 + 32)) )
                {
                  started = CmpAddSubKeyToList(*(_QWORD *)(v101 + 32));
                  if ( started >= 0 )
                  {
                    if ( *(_WORD *)(v5 + 66) || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v101 + 32)) )
                    {
                      v66 = v103;
                      v67 = v98;
                      v68 = *(_DWORD *)(v103 + 28);
                      *(_DWORD *)(v103 + 28) = v99;
                      v99 = v68;
                      v69 = *(_DWORD *)(v103 + 32);
                      *(_DWORD *)(v103 + 32) = v100;
                      v100 = v69;
                      if ( v98 != -1 )
                        --*(_DWORD *)(v103 + 4 * ((unsigned __int64)v98 >> 31) + 20);
                      ++*(_DWORD *)(v103 + 24);
                      if ( !*(_WORD *)(v5 + 66) )
                        --*(_DWORD *)(v103 + 4 * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31) + 20);
                      LOBYTE(v66) = 1;
                      CmpCleanUpSubKeyInfo(v101, v66);
                      v70 = *a2;
                      if ( (unsigned __int16)*(_DWORD *)(v103 + 52) < v70 )
                      {
                        *(_WORD *)(v103 + 52) = v70;
                        *(_WORD *)(v101 + 176) = v70;
                      }
                      if ( *(_WORD *)(v5 + 66) )
                      {
                        v71 = CmpGetKeyNodeForKcb(v5, &v110, 1LL);
                        v72 = *(_BYTE *)(v71 + 13);
                        *(_WORD *)(v71 + 2) &= 0x20u;
                        *(_WORD *)(v71 + 52) = 0;
                        *(_DWORD *)(v71 + 52) &= 0xFF00FFFF;
                        *(_BYTE *)(v71 + 13) = v72 & 0x7C | 1;
                        *(_DWORD *)(v71 + 28) = -1;
                        *(_DWORD *)(v71 + 32) = -1;
                        *(_DWORD *)(v71 + 40) = -1;
                        *(_DWORD *)(v71 + 48) = -1;
                        *(_QWORD *)(v71 + 20) = 0LL;
                        *(_DWORD *)(v71 + 36) = 0;
                        *(_BYTE *)(v71 + 55) = 0;
                        *(_QWORD *)(v71 + 56) = 0LL;
                        *(_DWORD *)(v71 + 64) = 0;
                        *(_WORD *)(v71 + 74) = 0;
                        v73 = *(_QWORD *)(v5 + 32);
                        if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v73, &v110);
                        else
                          HvpReleaseCellPaged(v73, &v110);
                      }
                      else
                      {
                        HvFreeCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
                      }
                      *(_DWORD *)(v5 + 40) = -1;
                      v108 = -1;
                      if ( *(_WORD *)(v5 + 66) )
                      {
                        v74 = *(_QWORD **)(v5 + 192);
                        v75 = *v74;
                        if ( *(_QWORD **)(*v74 + 8LL) != v74 || (v76 = (_QWORD *)v74[1], (_QWORD *)*v76 != v74) )
                          __fastfail(3u);
                        *v76 = v75;
                        *(_QWORD *)(v75 + 8) = v76;
                        CmpDereferenceKeyControlBlockWithLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL)
                                                                        + 16LL));
                        *(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) = 0LL;
                        CmpCreateLayerLink(BugCheckParameter2);
                      }
                      CmpRemoveKeyHash(*(_QWORD *)(v5 + 32), v5 + 16);
                      v77 = *(_QWORD *)(v5 + 32);
                      *(_DWORD *)(v5 + 16) = v27;
                      CmpInsertKeyHash(v77, v5 + 16);
                      v78 = NameControlBlock;
                      NameControlBlock = *(_QWORD *)(v5 + 80);
                      *(_QWORD *)(v5 + 80) = v78;
                      if ( *(_QWORD *)(v5 + 296) )
                        _InterlockedOr64((volatile signed __int64 *)(v5 + 296), 1uLL);
                      v79 = *(void **)(v5 + 200);
                      if ( (unsigned __int64)v79 >= 2 )
                        ExFreePoolWithTag(v79, 0x624E4D43u);
                      *(_QWORD *)(v5 + 200) = 0LL;
                      if ( v92 )
                        *(_BYTE *)(v5 + 65) = 3;
                      CmpUpdateParentForEachSon(*(_QWORD *)(v5 + 32));
                      if ( v92 )
                      {
                        v80 = 0LL;
                        v81 = 512LL;
                        do
                        {
                          CmpKeyEnumStackReset(v80 + v128 + 56);
                          v80 += 408LL;
                          --v81;
                        }
                        while ( v81 );
                        v126 = 0LL;
                        v125 = -2;
                        CmpResetKeyNodeStack(v127);
                        CmpSubtreeEnumeratorBeginForKcbStack(&v125, v122);
                        v82 = CmpSubtreeEnumeratorAdvance(&v125);
                        v67 = v98;
                        while ( v82 != -2147483622 )
                        {
                          CmpSubtreeEnumeratorGetCurrentKeyStacks(&v125, 0LL, &v118);
                          v83 = CmpKeyNodeStackGetEntryAtLayerHeight(v118, *(unsigned __int16 *)(v5 + 66));
                          *(_BYTE *)(*(_QWORD *)(v83 + 16) + 13LL) |= 3u;
                          v82 = CmpSubtreeEnumeratorAdvance(&v125);
                        }
                      }
                      *(_QWORD *)(v103 + 4) = v10;
                      v84 = *(_QWORD *)(v101 + 32);
                      *(_QWORD *)(v101 + 168) = v10;
                      if ( (*(_BYTE *)(v84 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v84, &v113);
                      else
                        HvpReleaseCellPaged(v84, &v113);
                      v103 = 0LL;
                      CmpSearchForOpenSubKeys(v5, 1LL, 0LL);
                      ++*(_QWORD *)(v101 + 304);
                      ++*(_QWORD *)(v5 + 304);
                      if ( v67 != -1 )
                        CmpFreeKeyByCell(*(_QWORD *)(v101 + 32));
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
            v7 = v95;
            goto LABEL_184;
          }
          started = -1073741670;
        }
      }
      v7 = v95;
      goto LABEL_185;
    }
LABEL_64:
    CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
    if ( BugCheckParameter4 )
    {
      CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4);
      BugCheckParameter4 = 0LL;
    }
    CmpDrainDelayDerefContext((_QWORD **)&v112);
    CmpUnlockRegistry(v44);
    v94 = 0;
    started = CmpAbortRollbackPacket(&v106, 0LL);
    if ( started < 0 )
      goto LABEL_183;
    CmpCleanupRollbackPacket(&v106);
    v106 = 0LL;
    CmpCleanupKcbStack(v122);
    CmpCleanupKcbStack(v123);
    v4 = v116;
    v7 = v95;
LABEL_70:
    v3 = a3;
  }
  v7 = v117;
LABEL_184:
  v59 = 0LL;
LABEL_185:
  CmpSubtreeEnumeratorCleanup(&v125);
  if ( v103 )
  {
    v85 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v85 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v85, &v113);
    else
      HvpReleaseCellPaged(v85, &v113);
  }
  if ( v37 )
  {
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v7, &v111);
    else
      HvpReleaseCellPaged(v7, &v111);
  }
  if ( v108 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v5 + 32), v108);
  if ( v59 )
  {
    v86 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v86 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v86, &v114);
    else
      HvpReleaseCellPaged(v86, &v114);
  }
  if ( v99 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v99);
  if ( v100 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v100);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  if ( BugCheckParameter4 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4);
  CmpDrainDelayDerefContext((_QWORD **)&v112);
  if ( v94 )
    CmpUnlockRegistry(v87);
  CmpCleanupKcbStack(v122);
  CmpCleanupKcbStack(v123);
  CmpCleanupKcbStack(v124);
  CmpCleanupRollbackPacket(&v106);
  return (unsigned int)started;
}
