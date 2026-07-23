/*
 * XREFs of CmDeleteKey @ 0x1408C1360
 * Callers:
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 * Callees:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCleanupDiscardReplacePost @ 0x140864F00 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408650A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408C2B20 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1408C2FF8 (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D6890 (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D69AC (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A4026C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A40D14 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // r15
  char v2; // r14
  char v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int started; // edi
  __int16 v14; // r13
  __int16 v15; // r14
  signed __int64 v16; // r15
  char *v17; // rdi
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  int *v22; // rcx
  ULONG_PTR v23; // r14
  ULONG_PTR v24; // r13
  ULONG_PTR v25; // rcx
  __int64 CellFlat; // rax
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  __int16 v30; // ax
  PPRIVILEGE_SET v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r14
  ULONG_PTR v34; // rcx
  __int64 CellPaged; // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  char v38; // bl
  __int64 v39; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int16 v43; // ax
  PPRIVILEGE_SET v44; // rbx
  PPRIVILEGE_SET v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v53; // rcx
  char v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+41h] [rbp-BFh]
  char v56; // [rsp+42h] [rbp-BEh]
  char v57; // [rsp+43h] [rbp-BDh]
  char v58; // [rsp+44h] [rbp-BCh]
  _QWORD *P; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 UnitOfWork; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  __int128 v65; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v67[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v69[2]; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v70; // [rsp+C8h] [rbp-38h] BYREF
  int v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D4h] [rbp-2Ch]
  _QWORD v73[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v74; // [rsp+E8h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+F8h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+8h] BYREF
  __int64 v77; // [rsp+110h] [rbp+10h]
  _QWORD *v78; // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v78 = a1;
  v72 = 0;
  v64 = 0LL;
  v67[1] = v67;
  v1 = a1;
  v62 = 0LL;
  v67[0] = v67;
  v66 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v60 = 0;
  v2 = 0;
  v57 = 0;
  v55 = 0;
  v3 = 0;
  v65 = 0LL;
  v4 = MEMORY[0xFFFFF78000000014];
  v5 = 0LL;
  v68 = 0LL;
  WORD1(v68) = -1;
  v6 = 0LL;
  v74 = 0LL;
  WORD1(v74) = -1;
  v77 = MEMORY[0xFFFFF78000000014];
  v58 = 0;
  *(_OWORD *)v69 = 0LL;
  v56 = 0;
  *(_OWORD *)Privileges = 0LL;
  v76 = 0LL;
  v63 = 0;
  UnitOfWork = 0LL;
  P = 0LL;
  HvpGetCellContextInitialize(&v64);
  HvpGetCellContextInitialize(&v62);
  v70 = 0LL;
  v73[1] = v73;
  v72 = 0;
  v73[0] = v73;
  v71 = -1073741823;
  CmpInitializeDelayDerefContext(&v65);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsShutdownRundownActive(v7) )
      {
        started = -1073741431;
        v38 = 0;
        goto LABEL_79;
      }
      if ( v2 )
        CmpLockRegistryExclusive(v9);
      else
        CmpLockRegistry(v9, v8, v10, v11);
      v6 = v1[1];
      v54 = 1;
      if ( (unsigned __int8)CmpIsKcbImmutable(v6, v12) )
      {
        started = -1073741790;
        goto LABEL_78;
      }
      if ( !*(_QWORD *)(v6 + 72) )
        goto LABEL_114;
      if ( *(_WORD *)(v6 + 66) )
      {
        started = CmDeleteLayeredKey((__int64)v1, (__int64)v67, (__int64)&v65);
LABEL_78:
        v38 = 1;
LABEL_79:
        v23 = 0LL;
        v24 = 0LL;
        v27 = 0LL;
        goto LABEL_49;
      }
      started = CmpStartKcbStackForTopLayerKcb(&v74, v6);
      if ( started < 0 )
        goto LABEL_78;
      started = CmpStartKcbStackForTopLayerKcb(&v68, *(_QWORD *)(v6 + 72));
      if ( started < 0 )
        goto LABEL_78;
      started = 0;
      if ( !v2 )
      {
        CmpLockHashEntryExclusiveByKcb(v6);
        v55 = 1;
        CmpLockKcbStackTopExclusiveRestShared(&v68);
        v14 = WORD1(v74);
        v15 = 0;
        if ( (SWORD1(v74) & 0x8000u) == 0 )
        {
          v16 = (char *)Privileges[1] - ((char *)&v74 + 8);
          v17 = (char *)&v74 + 8;
          do
          {
            if ( v15 >= 2 )
              v18 = &v17[v16 - 16];
            else
              v18 = v17;
            CmpLockKcbExclusive(*(_QWORD *)v18);
            v17 += 8;
            ++v15;
          }
          while ( v15 <= v14 );
          v4 = v77;
          started = 0;
          v1 = v78;
        }
        v2 = v57;
        v3 = 1;
        v56 = 1;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, 0LL) )
        goto LABEL_78;
      if ( !v1[7] && !v1[8] )
        goto LABEL_21;
      started = CmpTransSearchAddTransFromKeyBody(v1, &v76);
      if ( started < 0 )
        goto LABEL_110;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_78;
      }
      v5 = v76;
      started = 0;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, v76) )
      {
        v38 = 1;
        v23 = 0LL;
        v24 = 0LL;
        v27 = 0LL;
        goto LABEL_49;
      }
      if ( v5 )
        break;
LABEL_21:
      v20 = *(_QWORD *)(v6 + 192);
      if ( !v20 || *(_QWORD *)(v20 + 32) == v20 + 32 || v2 )
        break;
      v2 = 1;
      v57 = 1;
      CmpUnlockKcbStack(&v74);
      CmpUnlockKcbStack(&v68);
      v56 = 0;
      v3 = 0;
      CmpUnlockHashEntryByKcb(v6);
      v55 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v45 = v69[1];
      v74 = 0LL;
      WORD1(v74) = -1;
      *(_OWORD *)Privileges = 0LL;
      if ( v69[1] )
        CmSiFreeMemory(v69[1]);
      v68 = 0LL;
      WORD1(v68) = -1;
      *(_OWORD *)v69 = 0LL;
      CmpUnlockRegistry(v45);
    }
    v21 = *(_QWORD *)(v6 + 240);
    if ( v21 && !(unsigned __int8)CmEqualTrans(v5, v21, v19) )
    {
LABEL_114:
      started = -1073741535;
      goto LABEL_78;
    }
    if ( v5 )
      break;
    v22 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
    if ( *v22 >= 0 )
    {
      v22 = (int *)(v6 + 248);
      if ( !*(_DWORD *)(v6 + 248) )
      {
        v22 = (int *)(v6 + 264);
        if ( !*(_DWORD *)(v6 + 264) )
        {
          v23 = 0LL;
          v24 = 0LL;
          goto LABEL_28;
        }
      }
    }
    started = CmpSnapshotTxOwnerArray(v22, &v60, &v66);
    if ( started >= 0 )
    {
      if ( v3 )
      {
        CmpUnlockKcbStack(&v74);
        CmpUnlockKcbStack(&v68);
        v3 = 0;
        v56 = 0;
      }
      if ( v55 )
      {
        CmpUnlockHashEntryByKcb(v6);
        v55 = 0;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v65);
      CmpUnlockRegistry(v41);
      v54 = 0;
      started = CmpRollbackTransactionArray(v60, v66, v42, &v63);
      if ( started >= 0 )
        continue;
    }
LABEL_110:
    v27 = 0LL;
    goto LABEL_111;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  v24 = UnitOfWork;
  if ( UnitOfWork )
  {
    P = (_QWORD *)CmpAllocateUnitOfWork();
    v23 = (ULONG_PTR)P;
    if ( P )
    {
      CmpTransEnlistUowInKcb((_QWORD *)v24, *(_QWORD *)(v6 + 72));
      v27 = 0LL;
      started = CmpTransEnlistUowInCmTrans((_QWORD *)v24, v5);
      if ( started < 0 )
        goto LABEL_111;
      CmpTransEnlistUowInKcb(P, v6);
      started = CmpTransEnlistUowInCmTrans(P, v5);
      if ( started < 0 )
        goto LABEL_111;
      if ( (unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v6 + 72) + 248LL, v24)
        && (unsigned __int8)CmpLockIXLockExclusive(v6 + 248, P, 0LL) )
      {
        if ( !(unsigned __int8)CmpLockIXLockExclusive(v6 + 264, P, 1LL) )
        {
          started = -1072103423;
          v38 = 1;
          goto LABEL_98;
        }
LABEL_28:
        if ( !v57 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          v58 = 1;
        }
        v25 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v25, *(_DWORD *)(v6 + 40), (unsigned int *)&v64);
        else
          CellFlat = HvpGetCellPaged(v25);
        v27 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v6 + 32));
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, v27, v5) || (*(_BYTE *)(v27 + 2) & 8) != 0 )
        {
          started = -1073741535;
        }
        else
        {
          v28 = *(_QWORD *)(v6 + 32);
          if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v28, &v64);
          else
            HvpReleaseCellPaged(v28, &v64);
          v27 = 0LL;
          if ( v5 )
          {
            *(_DWORD *)(v24 + 68) = 3;
            *(_QWORD *)(v24 + 88) = v6;
            *(_DWORD *)(v23 + 68) = 2;
            *(_QWORD *)(v23 + 80) = v24;
            HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
            v58 = 0;
            started = CmAddLogForAction(v23, 1u);
            if ( started < 0 )
              goto LABEL_111;
            v23 = 0LL;
            v24 = 0LL;
            v43 = WORD1(v68);
            _mm_lfence();
            if ( v43 >= 2 )
              v44 = (PPRIVILEGE_SET)*((_QWORD *)v69[1] + SWORD1(v68) - 2);
            else
              v44 = v69[SWORD1(v68) - 1];
            CmpReportNotifyHelper(
              (unsigned int)&v68,
              *(_QWORD *)&v44[1].Privilege[0].Luid.HighPart,
              v5,
              1,
              (__int64)v67);
            if ( *(_QWORD *)&v44[1].Privilege[0].Luid.HighPart != CmpMasterHive )
              CmpReportNotifyHelper((unsigned int)&v68, CmpMasterHive, v5, 1, (__int64)v67);
            started = 0;
          }
          else
          {
            v29 = *(_QWORD *)(v6 + 192);
            if ( !v29 || *(_QWORD *)(v29 + 32) == v29 + 32 )
            {
              v30 = WORD1(v68);
              _mm_lfence();
              if ( v30 >= 2 )
                v31 = (PPRIVILEGE_SET)*((_QWORD *)v69[1] + SWORD1(v68) - 2);
              else
                v31 = v69[SWORD1(v68) - 1];
              CmpReportNotifyHelper(
                (unsigned int)&v68,
                *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart,
                0,
                1,
                (__int64)v67);
              if ( *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                CmpReportNotifyHelper((unsigned int)&v68, CmpMasterHive, 0, 1, (__int64)v67);
              started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32));
              if ( started >= 0 )
              {
                CmpFlushNotifiesOnKeyBodyList(v6, 8LL, (__int64)&v65, 0);
                LOBYTE(v32) = 1;
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v32);
                v33 = *(_QWORD *)(v6 + 72);
                v34 = *(_QWORD *)(v33 + 32);
                if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v34, *(_DWORD *)(v33 + 40), (unsigned int *)&v62);
                else
                  CellPaged = HvpGetCellPaged(v34);
                v36 = CellPaged;
                CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v33 + 32));
                *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v36 + 52);
                ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
                *(_QWORD *)(v36 + 4) = v4;
                *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v4;
                v37 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
                if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v37, &v62);
                else
                  HvpReleaseCellPaged(v37, &v62);
                CmpMarkKeyUnbacked(v6);
                CmpDiscardKcb(v6);
                v23 = (ULONG_PTR)P;
                started = 0;
              }
              goto LABEL_48;
            }
            v47 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, (__int64)&v70);
            started = v47;
            if ( v47 >= 0 )
            {
              CmpReportNotifyForKcbStack(&v68, 0LL, 1LL, v67);
              started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32));
              if ( started >= 0 )
              {
                LOBYTE(v49) = 1;
                CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v48, &v65, v49);
                CmpFlushNotifiesOnKeyBodyList(v6, 8LL, (__int64)&v65, 0);
                LOBYTE(v50) = 1;
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v50);
                LOBYTE(v51) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v62, v51);
                *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(KeyNodeForKcb + 52);
                ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
                *(_QWORD *)(KeyNodeForKcb + 4) = v4;
                *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v4;
                v53 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
                if ( (*(_BYTE *)(v53 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v53, &v62);
                else
                  HvpReleaseCellPaged(v53, &v62);
                CmpMarkKeyUnbacked(v6);
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
                started = 0;
LABEL_48:
                v38 = 1;
                goto LABEL_49;
              }
            }
LABEL_111:
            v23 = (ULONG_PTR)P;
            v24 = UnitOfWork;
          }
        }
        v38 = v54;
      }
      else
      {
        v38 = 1;
        started = -1072103423;
      }
    }
    else
    {
      v38 = 1;
      started = -1073741670;
LABEL_98:
      v27 = 0LL;
    }
  }
  else
  {
    v23 = 0LL;
    started = -1073741670;
    v38 = 1;
    v27 = 0LL;
  }
LABEL_49:
  if ( v70 )
  {
    if ( (_QWORD *)v73[0] != v73 )
    {
      CmpEnumerateAllHigherLayerKcbs(
        v70,
        (unsigned int)CmpCleanupDiscardReplacePre,
        (unsigned int)CmpCleanupDiscardReplacePost,
        (unsigned int)&v65,
        (__int64)&v70,
        1,
        0);
      if ( (_QWORD *)v73[0] != v73 )
        CmpCleanupDiscardReplacePost(v70, (__int64)&v65, (__int64)&v70);
    }
  }
  if ( v27 )
  {
    v46 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v46, &v64);
    else
      HvpReleaseCellPaged(v46, &v64);
  }
  if ( v58 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
  if ( v23 )
  {
    CmpRundownUnitOfWork(v23);
    ExFreePoolWithTag((PVOID)v23, 0x77554D43u);
  }
  if ( v24 )
  {
    CmpRundownUnitOfWork(v24);
    ExFreePoolWithTag((PVOID)v24, 0x77554D43u);
  }
  if ( v56 )
  {
    CmpUnlockKcbStack(&v74);
    CmpUnlockKcbStack(&v68);
  }
  if ( v55 )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v69[1] )
    CmSiFreeMemory(v69[1]);
  CmpDrainDelayDerefContext((_QWORD **)&v65);
  if ( v38 )
    CmpUnlockRegistry(v39);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (_QWORD *)v67[0] != v67 )
    CmpSignalDeferredPosts(v67);
  return (unsigned int)started;
}
