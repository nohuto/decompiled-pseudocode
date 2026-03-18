/*
 * XREFs of CmDeleteKey @ 0x1408BAD90
 * Callers:
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 * Callees:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpCleanupDiscardReplacePost @ 0x14085EC10 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14085EDB4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408BA08C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1408BC550 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1408BCA28 (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408C6254 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D0204 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D02CC (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D03E8 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E08B8 (CmpCleanUpSubKeyInfo.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A2E3E0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A2EE88 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
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
  __int64 v8; // rcx
  __int64 v9; // rdx
  int started; // edi
  __int16 v11; // r13
  __int16 v12; // r14
  signed __int64 v13; // r15
  char *v14; // rdi
  char *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  int *v19; // rcx
  ULONG_PTR v20; // r14
  ULONG_PTR v21; // r13
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int16 v27; // ax
  PPRIVILEGE_SET v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r14
  ULONG_PTR v31; // rcx
  __int64 CellPaged; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  char v35; // bl
  __int64 v36; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int16 v40; // ax
  PPRIVILEGE_SET v41; // rbx
  PPRIVILEGE_SET v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v50; // rcx
  char v51; // [rsp+40h] [rbp-C0h]
  char v52; // [rsp+41h] [rbp-BFh]
  char v53; // [rsp+42h] [rbp-BEh]
  char v54; // [rsp+43h] [rbp-BDh]
  char v55; // [rsp+44h] [rbp-BCh]
  _QWORD *P; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 UnitOfWork; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int128 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v64[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v66[2]; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v67; // [rsp+C8h] [rbp-38h] BYREF
  int v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D4h] [rbp-2Ch]
  _QWORD v70[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+108h] [rbp+8h] BYREF
  __int64 v74; // [rsp+110h] [rbp+10h]
  _QWORD *v75; // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v75 = a1;
  v69 = 0;
  v61 = 0LL;
  v64[1] = v64;
  v1 = a1;
  v59 = 0LL;
  v64[0] = v64;
  v63 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v57 = 0;
  v2 = 0;
  v54 = 0;
  v52 = 0;
  v3 = 0;
  v62 = 0LL;
  v4 = MEMORY[0xFFFFF78000000014];
  v5 = 0LL;
  v65 = 0LL;
  WORD1(v65) = -1;
  v6 = 0LL;
  v71 = 0LL;
  WORD1(v71) = -1;
  v74 = MEMORY[0xFFFFF78000000014];
  v55 = 0;
  *(_OWORD *)v66 = 0LL;
  v53 = 0;
  *(_OWORD *)Privileges = 0LL;
  v73 = 0LL;
  v60 = 0;
  UnitOfWork = 0LL;
  P = 0LL;
  HvpGetCellContextInitialize(&v61);
  HvpGetCellContextInitialize(&v59);
  v67 = 0LL;
  v70[1] = v70;
  v69 = 0;
  v70[0] = v70;
  v68 = -1073741823;
  CmpInitializeDelayDerefContext(&v62);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsShutdownRundownActive(v7) )
      {
        started = -1073741431;
        v35 = 0;
        goto LABEL_79;
      }
      if ( v2 )
        CmpLockRegistryExclusive(v8);
      else
        CmpLockRegistry();
      v6 = v1[1];
      v51 = 1;
      if ( (unsigned __int8)CmpIsKcbImmutable(v6, v9) )
      {
        started = -1073741790;
        goto LABEL_78;
      }
      if ( !*(_QWORD *)(v6 + 72) )
        goto LABEL_114;
      if ( *(_WORD *)(v6 + 66) )
      {
        started = CmDeleteLayeredKey((__int64)v1, (__int64)v64, (__int64)&v62);
LABEL_78:
        v35 = 1;
LABEL_79:
        v20 = 0LL;
        v21 = 0LL;
        v24 = 0LL;
        goto LABEL_49;
      }
      started = CmpStartKcbStackForTopLayerKcb(&v71, v6);
      if ( started < 0 )
        goto LABEL_78;
      started = CmpStartKcbStackForTopLayerKcb(&v65, *(_QWORD *)(v6 + 72));
      if ( started < 0 )
        goto LABEL_78;
      started = 0;
      if ( !v2 )
      {
        CmpLockHashEntryExclusiveByKcb(v6);
        v52 = 1;
        CmpLockKcbStackTopExclusiveRestShared(&v65);
        v11 = WORD1(v71);
        v12 = 0;
        if ( (SWORD1(v71) & 0x8000u) == 0 )
        {
          v13 = (char *)Privileges[1] - ((char *)&v71 + 8);
          v14 = (char *)&v71 + 8;
          do
          {
            if ( v12 >= 2 )
              v15 = &v14[v13 - 16];
            else
              v15 = v14;
            CmpLockKcbExclusive(*(_QWORD *)v15);
            v14 += 8;
            ++v12;
          }
          while ( v12 <= v11 );
          v4 = v74;
          started = 0;
          v1 = v75;
        }
        v2 = v54;
        v3 = 1;
        v53 = 1;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, 0LL) )
        goto LABEL_78;
      if ( !v1[7] && !v1[8] )
        goto LABEL_21;
      started = CmpTransSearchAddTransFromKeyBody(v1, &v73);
      if ( started < 0 )
        goto LABEL_110;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_78;
      }
      v5 = v73;
      started = 0;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, v73) )
      {
        v35 = 1;
        v20 = 0LL;
        v21 = 0LL;
        v24 = 0LL;
        goto LABEL_49;
      }
      if ( v5 )
        break;
LABEL_21:
      v17 = *(_QWORD *)(v6 + 192);
      if ( !v17 || *(_QWORD *)(v17 + 32) == v17 + 32 || v2 )
        break;
      v2 = 1;
      v54 = 1;
      CmpUnlockKcbStack(&v71);
      CmpUnlockKcbStack(&v65);
      v53 = 0;
      v3 = 0;
      CmpUnlockHashEntryByKcb(v6);
      v52 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v42 = v66[1];
      v71 = 0LL;
      WORD1(v71) = -1;
      *(_OWORD *)Privileges = 0LL;
      if ( v66[1] )
        CmSiFreeMemory(v66[1]);
      v65 = 0LL;
      WORD1(v65) = -1;
      *(_OWORD *)v66 = 0LL;
      CmpUnlockRegistry(v42);
    }
    v18 = *(_QWORD *)(v6 + 240);
    if ( v18 && !(unsigned __int8)CmEqualTrans(v5, v18, v16) )
    {
LABEL_114:
      started = -1073741535;
      goto LABEL_78;
    }
    if ( v5 )
      break;
    v19 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
    if ( *v19 >= 0 )
    {
      v19 = (int *)(v6 + 248);
      if ( !*(_DWORD *)(v6 + 248) )
      {
        v19 = (int *)(v6 + 264);
        if ( !*(_DWORD *)(v6 + 264) )
        {
          v20 = 0LL;
          v21 = 0LL;
          goto LABEL_28;
        }
      }
    }
    started = CmpSnapshotTxOwnerArray(v19, &v57, &v63);
    if ( started >= 0 )
    {
      if ( v3 )
      {
        CmpUnlockKcbStack(&v71);
        CmpUnlockKcbStack(&v65);
        v3 = 0;
        v53 = 0;
      }
      if ( v52 )
      {
        CmpUnlockHashEntryByKcb(v6);
        v52 = 0;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v62);
      CmpUnlockRegistry(v38);
      v51 = 0;
      started = CmpRollbackTransactionArray(v57, v63, v39, &v60);
      if ( started >= 0 )
        continue;
    }
LABEL_110:
    v24 = 0LL;
    goto LABEL_111;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  v21 = UnitOfWork;
  if ( UnitOfWork )
  {
    P = (_QWORD *)CmpAllocateUnitOfWork();
    v20 = (ULONG_PTR)P;
    if ( P )
    {
      CmpTransEnlistUowInKcb((_QWORD *)v21, *(_QWORD *)(v6 + 72));
      v24 = 0LL;
      started = CmpTransEnlistUowInCmTrans((_QWORD *)v21, v5);
      if ( started < 0 )
        goto LABEL_111;
      CmpTransEnlistUowInKcb(P, v6);
      started = CmpTransEnlistUowInCmTrans(P, v5);
      if ( started < 0 )
        goto LABEL_111;
      if ( (unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v6 + 72) + 248LL, v21)
        && (unsigned __int8)CmpLockIXLockExclusive(v6 + 248, P, 0LL) )
      {
        if ( !(unsigned __int8)CmpLockIXLockExclusive(v6 + 264, P, 1LL) )
        {
          started = -1072103423;
          v35 = 1;
          goto LABEL_98;
        }
LABEL_28:
        if ( !v54 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          v55 = 1;
        }
        v22 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v22, *(_DWORD *)(v6 + 40), (unsigned int *)&v61);
        else
          CellFlat = HvpGetCellPaged(v22);
        v24 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v6 + 32));
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, v24, v5) || (*(_BYTE *)(v24 + 2) & 8) != 0 )
        {
          started = -1073741535;
        }
        else
        {
          v25 = *(_QWORD *)(v6 + 32);
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v25, &v61);
          else
            HvpReleaseCellPaged(v25, &v61);
          v24 = 0LL;
          if ( v5 )
          {
            *(_DWORD *)(v21 + 68) = 3;
            *(_QWORD *)(v21 + 88) = v6;
            *(_DWORD *)(v20 + 68) = 2;
            *(_QWORD *)(v20 + 80) = v21;
            HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
            v55 = 0;
            started = CmAddLogForAction(v20, 1u);
            if ( started < 0 )
              goto LABEL_111;
            v20 = 0LL;
            v21 = 0LL;
            v40 = WORD1(v65);
            _mm_lfence();
            if ( v40 >= 2 )
              v41 = (PPRIVILEGE_SET)*((_QWORD *)v66[1] + SWORD1(v65) - 2);
            else
              v41 = v66[SWORD1(v65) - 1];
            CmpReportNotifyHelper(
              (unsigned int)&v65,
              *(_QWORD *)&v41[1].Privilege[0].Luid.HighPart,
              v5,
              1,
              (__int64)v64);
            if ( *(_QWORD *)&v41[1].Privilege[0].Luid.HighPart != CmpMasterHive )
              CmpReportNotifyHelper((unsigned int)&v65, CmpMasterHive, v5, 1, (__int64)v64);
            started = 0;
          }
          else
          {
            v26 = *(_QWORD *)(v6 + 192);
            if ( !v26 || *(_QWORD *)(v26 + 32) == v26 + 32 )
            {
              v27 = WORD1(v65);
              _mm_lfence();
              if ( v27 >= 2 )
                v28 = (PPRIVILEGE_SET)*((_QWORD *)v66[1] + SWORD1(v65) - 2);
              else
                v28 = v66[SWORD1(v65) - 1];
              CmpReportNotifyHelper(
                (unsigned int)&v65,
                *(_QWORD *)&v28[1].Privilege[0].Luid.HighPart,
                0,
                1,
                (__int64)v64);
              if ( *(_QWORD *)&v28[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                CmpReportNotifyHelper((unsigned int)&v65, CmpMasterHive, 0, 1, (__int64)v64);
              started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32));
              if ( started >= 0 )
              {
                CmpFlushNotifiesOnKeyBodyList(v6, 8LL, (__int64)&v62, 0);
                LOBYTE(v29) = 1;
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v29);
                v30 = *(_QWORD *)(v6 + 72);
                v31 = *(_QWORD *)(v30 + 32);
                if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v31, *(_DWORD *)(v30 + 40), (unsigned int *)&v59);
                else
                  CellPaged = HvpGetCellPaged(v31);
                v33 = CellPaged;
                CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v30 + 32));
                *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v33 + 52);
                ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
                *(_QWORD *)(v33 + 4) = v4;
                *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v4;
                v34 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
                if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v34, &v59);
                else
                  HvpReleaseCellPaged(v34, &v59);
                CmpMarkKeyUnbacked(v6);
                CmpDiscardKcb(v6);
                v20 = (ULONG_PTR)P;
                started = 0;
              }
              goto LABEL_48;
            }
            v44 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, (__int64)&v67);
            started = v44;
            if ( v44 >= 0 )
            {
              CmpReportNotifyForKcbStack(&v65, 0LL, 1LL, v64);
              started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32));
              if ( started >= 0 )
              {
                LOBYTE(v46) = 1;
                CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v45, &v62, v46);
                CmpFlushNotifiesOnKeyBodyList(v6, 8LL, (__int64)&v62, 0);
                LOBYTE(v47) = 1;
                CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v47);
                LOBYTE(v48) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v59, v48);
                *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(KeyNodeForKcb + 52);
                ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
                *(_QWORD *)(KeyNodeForKcb + 4) = v4;
                *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v4;
                v50 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
                if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v50, &v59);
                else
                  HvpReleaseCellPaged(v50, &v59);
                CmpMarkKeyUnbacked(v6);
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
                started = 0;
LABEL_48:
                v35 = 1;
                goto LABEL_49;
              }
            }
LABEL_111:
            v20 = (ULONG_PTR)P;
            v21 = UnitOfWork;
          }
        }
        v35 = v51;
      }
      else
      {
        v35 = 1;
        started = -1072103423;
      }
    }
    else
    {
      v35 = 1;
      started = -1073741670;
LABEL_98:
      v24 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
    started = -1073741670;
    v35 = 1;
    v24 = 0LL;
  }
LABEL_49:
  if ( v67 )
  {
    if ( (_QWORD *)v70[0] != v70 )
    {
      CmpEnumerateAllHigherLayerKcbs(
        v67,
        (unsigned int)CmpCleanupDiscardReplacePre,
        (unsigned int)CmpCleanupDiscardReplacePost,
        (unsigned int)&v62,
        (__int64)&v67,
        1,
        0);
      if ( (_QWORD *)v70[0] != v70 )
        CmpCleanupDiscardReplacePost(v67, (__int64)&v62, (__int64)&v67);
    }
  }
  if ( v24 )
  {
    v43 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v43, &v61);
    else
      HvpReleaseCellPaged(v43, &v61);
  }
  if ( v55 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
  if ( v20 )
  {
    CmpRundownUnitOfWork(v20);
    ExFreePoolWithTag((PVOID)v20, 0x77554D43u);
  }
  if ( v21 )
  {
    CmpRundownUnitOfWork(v21);
    ExFreePoolWithTag((PVOID)v21, 0x77554D43u);
  }
  if ( v53 )
  {
    CmpUnlockKcbStack(&v71);
    CmpUnlockKcbStack(&v65);
  }
  if ( v52 )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v66[1] )
    CmSiFreeMemory(v66[1]);
  CmpDrainDelayDerefContext((_QWORD **)&v62);
  if ( v35 )
    CmpUnlockRegistry(v36);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (_QWORD *)v64[0] != v64 )
    CmpSignalDeferredPosts(v64);
  return (unsigned int)started;
}
