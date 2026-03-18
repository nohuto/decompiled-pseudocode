/*
 * XREFs of CmDeleteValueKey @ 0x1408BB780
 * Callers:
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408BC430 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsValueTombstone @ 0x1408BC650 (CmpIsValueTombstone.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     CmpRemoveValueFromList @ 0x1408BCABC (CmpRemoveValueFromList.c)
 *     CmpMarkValueDataDirty @ 0x1408BD5D4 (CmpMarkValueDataDirty.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C3890 (CmpDelayDerefKeyControlBlock.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D0204 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D02CC (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D0D50 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFreeValueData @ 0x1408D1074 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408D5200 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A2F1D8 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     CmpSetValueKeyTombstone @ 0x140B4F768 (CmpSetValueKeyTombstone.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x140B68680 (CmpGetValueForAudit.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  char v4; // r15
  __int128 v5; // xmm0
  __int64 v6; // rdi
  _QWORD *v7; // r13
  __int64 v8; // r12
  ULONG_PTR v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int started; // edi
  __int64 v14; // rdi
  char v15; // r14
  ULONG_PTR v16; // rcx
  __int16 i; // r12
  PPRIVILEGE_SET v18; // r14
  unsigned int PrivilegeCount; // edx
  ULONG_PTR v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // zf
  unsigned int v24; // r12d
  ULONG_PTR v25; // rcx
  __int64 CellFlat; // rax
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  ULONG_PTR v31; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v33; // rcx
  __int64 v34; // r14
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rdx
  PPRIVILEGE_SET v37; // rdi
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // r14
  __int64 v42; // r12
  int v43; // ecx
  __int16 v44; // ax
  PPRIVILEGE_SET v45; // rbx
  int v46; // edi
  __int64 v47; // rcx
  __int64 v48; // rcx
  void *v49; // rbx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *UnitOfWork; // rax
  int NameInListWithStatus; // eax
  __int64 v55; // r9
  unsigned int v56; // ebx
  PPRIVILEGE_SET v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  _WORD *v60; // rcx
  unsigned int v61; // eax
  ULONG_PTR v62; // rdx
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // r14
  __int64 v67; // rcx
  char v68; // [rsp+40h] [rbp-C0h]
  char v69; // [rsp+41h] [rbp-BFh] BYREF
  char v70; // [rsp+42h] [rbp-BEh]
  __int64 v71; // [rsp+48h] [rbp-B8h] BYREF
  PPRIVILEGE_SET v72; // [rsp+50h] [rbp-B0h]
  unsigned int v73; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v74[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v75; // [rsp+68h] [rbp-98h]
  _QWORD *v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  ULONG_PTR v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp-60h]
  int v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h] BYREF
  _WORD *v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h] BYREF
  void *v86; // [rsp+D0h] [rbp-30h]
  _QWORD v87[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  __int128 v89; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v77 = a1;
  v5 = 0LL;
  v70 = a4;
  v88 = a3;
  v87[1] = v87;
  v6 = a1;
  v84 = a2;
  v87[0] = v87;
  v73 = 0;
  v80 = 0LL;
  WORD1(v80) = -1;
  v7 = 0LL;
  v85 = 0LL;
  v8 = 0LL;
  v79 = 0LL;
  v9 = 0LL;
  v83 = 0LL;
  v71 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v76 = 0LL;
  v69 = 0;
  v82 = 0;
  v89 = 0LL;
  *(_QWORD *)&v74[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v75 = 0LL;
  HvpGetCellContextInitialize(&v79);
  HvpGetCellContextInitialize(&v83);
  v72 = 0LL;
  *(double *)&v5 = HvpGetCellContextInitialize(&v71);
  LODWORD(v78) = -1;
  v74[0] = -1;
  CmpInitializeDelayDerefContext(&v89);
  v86 = 0LL;
  v90[0] = v5;
  v90[1] = v5;
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v10) )
    {
      started = -1073741431;
      v68 = 0;
      v15 = 0;
      goto LABEL_67;
    }
    v11 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v6 + 8);
    v68 = 1;
    if ( (unsigned __int8)CmpIsKcbImmutable(v9, v12) )
    {
      started = -1073741790;
LABEL_160:
      v15 = 0;
      goto LABEL_67;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v80, v9);
    if ( started < 0 )
      goto LABEL_160;
    CmpLockKcbStackTopExclusiveRestShared(&v80);
    v14 = v77;
    v15 = 1;
    if ( *(_QWORD *)(v77 + 56) || *(_QWORD *)(v77 + 64) )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v77, 0LL) )
      {
        started = CmpTransSearchAddTransFromKeyBody(v14, &v74[1]);
        if ( started < 0 )
          goto LABEL_67;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
          goto LABEL_67;
        }
        goto LABEL_99;
      }
LABEL_158:
      started = (*(_BYTE *)(v14 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_67;
    }
LABEL_7:
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v14, v8) )
    {
      v15 = 1;
      goto LABEL_158;
    }
    if ( v8 )
      break;
    v16 = v9 + 248;
    if ( *(int *)(v9 + 248) >= 0 )
    {
      v16 = v9 + 264;
      if ( !*(_DWORD *)(v9 + 264) )
        goto LABEL_11;
    }
    started = CmpSnapshotTxOwnerArray(v16, &v73, &v85);
    if ( started < 0 )
    {
LABEL_29:
      v15 = 1;
      goto LABEL_67;
    }
    v56 = v73;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 1, v55, v73);
    CmpUnlockKcbStack(&v80);
    v57 = Privileges[1];
    v15 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v80 = 0LL;
    WORD1(v80) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v57);
    v68 = 0;
    started = CmpRollbackTransactionArray(v56, v85, v58, &v82);
    if ( started < 0 )
    {
LABEL_67:
      if ( v7 )
        goto LABEL_137;
      goto LABEL_68;
    }
    v6 = v77;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v76 = UnitOfWork;
  v7 = UnitOfWork;
  if ( !UnitOfWork )
  {
    started = -1073741670;
    v15 = 1;
    goto LABEL_68;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v9);
  started = CmpTransEnlistUowInCmTrans(v7, v8);
  if ( started < 0 )
    goto LABEL_136;
  if ( (unsigned __int8)CmpLockIXLockIntent(v9 + 248, v7) && (unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v7, 1LL) )
  {
    HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
    v4 = 1;
    started = CmpCloneKCBValueListForTrans(v9, v8, &v69);
    if ( started < 0 )
    {
      v15 = 1;
      goto LABEL_137;
    }
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
    v14 = v77;
    v4 = 0;
LABEL_11:
    for ( i = *(_WORD *)(v9 + 66); ; --i )
    {
      if ( i < 0
        || (i >= 2 ? (v18 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + i - 2)) : (v18 = Privileges[i - 1]),
            (unsigned int)CmpGetEffectiveKcbSemantics(v18, v14) == 1) )
      {
LABEL_26:
        v18 = v72;
        goto LABEL_27;
      }
      PrivilegeCount = v18[2].PrivilegeCount;
      if ( PrivilegeCount != -1 )
      {
        if ( *(_QWORD *)&v74[1] && *(_QWORD *)&v18[14].Privilege[0].Luid == *(_QWORD *)&v74[1] )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)&v18[1].Privilege[0].Luid.HighPart,
                                   (__int64)v74,
                                   (__int64)&v78);
          started = NameInListWithStatus;
          if ( NameInListWithStatus >= 0 )
            goto LABEL_126;
          v23 = NameInListWithStatus == -1073741772;
        }
        else
        {
          v20 = *(_QWORD *)&v18[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
            HvpGetCellFlat(v20, PrivilegeCount, (unsigned int *)&v83);
          else
            HvpGetCellPaged(v20);
          v21 = CmpFindNameInListWithStatus(*(_QWORD *)&v18[1].Privilege[0].Luid.HighPart, (__int64)v74, (__int64)&v78);
          v22 = *(_QWORD *)&v18[1].Privilege[0].Luid.HighPart;
          started = v21;
          if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v22, &v83);
          else
            HvpReleaseCellPaged(v22, &v83);
          if ( started >= 0 )
          {
LABEL_126:
            v72 = v18;
LABEL_27:
            v24 = v78;
            if ( (_DWORD)v78 == -1 )
            {
              started = -1073741772;
              goto LABEL_29;
            }
            v25 = *(_QWORD *)&v18[1].Privilege[0].Luid.HighPart;
            if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v25, v78, (unsigned int *)&v71);
            else
              CellFlat = HvpGetCellPaged(v25);
            v27 = CellFlat;
            if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)&v18[1].Privilege[0].Luid.HighPart, CellFlat) )
            {
              started = -1073741772;
              goto LABEL_62;
            }
            if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v28, &v71);
            else
              HvpReleaseCellPaged(v28, &v71);
            v27 = 0LL;
            if ( *(_DWORD *)(v9 + 40) != -1 )
            {
              v29 = *(_QWORD *)(v9 + 32);
              ++*(_QWORD *)(v9 + 304);
              HvLockHiveFlusherShared(v29);
              v30 = *(_QWORD *)&v74[1];
              v4 = 1;
              if ( *(_QWORD *)&v74[1] )
                goto LABEL_39;
              started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40));
              v15 = 1;
              if ( started >= 0 )
              {
                v30 = *(_QWORD *)&v74[1];
LABEL_39:
                v31 = *(_QWORD *)(v9 + 32);
                if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v31, *(_DWORD *)(v9 + 40), (unsigned int *)&v79);
                else
                  CellPaged = HvpGetCellPaged(v31);
                v33 = *(_QWORD *)(v9 + 32);
                v34 = CellPaged;
                v75 = CellPaged;
                CmpUpdateKeyNodeAccessBits(v33);
                if ( v70 )
                {
                  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(&v80, v30, 0LL);
                  Pool = (void *)CmpAllocatePool(0x100uLL);
                  if ( Pool )
                  {
                    memmove(
                      Pool,
                      (const void *)(SecurityCacheEntryForKcbStack + 32),
                      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
                    v86 = Pool;
                    started = CmpGetValueForAudit(*(_QWORD *)&v72[1].Privilege[0].Luid.HighPart);
                    if ( started >= 0 )
                    {
                      v34 = v75;
                      goto LABEL_42;
                    }
                  }
                  else
                  {
                    started = -1073741670;
                  }
                  goto LABEL_63;
                }
LABEL_42:
                v35 = *(_QWORD *)(v9 + 32);
                if ( *(_QWORD *)&v74[1] )
                {
                  if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v35, &v79);
                  else
                    HvpReleaseCellPaged(v35, &v79);
                  v51 = *(_QWORD *)(v9 + 32);
                  v75 = 0LL;
                  HvUnlockHiveFlusherShared(v51);
                  v52 = (__int64)v76;
                  v4 = 0;
                  *((_DWORD *)v76 + 17) = 6;
                  *(_DWORD *)(v52 + 88) = v24;
                  started = CmAddLogForAction(v52, 1u);
                  v15 = 1;
                  if ( started >= 0 )
                  {
                    HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                    CmpRemoveValueFromList(*(_QWORD *)(v9 + 32));
                    goto LABEL_56;
                  }
                }
                else
                {
                  v36 = *(unsigned int *)(v9 + 40);
                  if ( !*(_WORD *)(v9 + 66) )
                  {
                    started = HvpMarkCellDirty(v35, v36);
                    if ( started >= 0 )
                    {
                      started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 100));
                      if ( started >= 0 )
                      {
                        started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), v24);
                        if ( started >= 0 )
                        {
                          v37 = v72;
                          v38 = *(_QWORD *)&v72[1].Privilege[0].Luid.HighPart;
                          if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                            v39 = HvpGetCellFlat(v38, v24, (unsigned int *)&v71);
                          else
                            v39 = HvpGetCellPaged(v38);
                          v27 = v39;
                          started = CmpMarkValueDataDirty(*(_QWORD *)&v37[1].Privilege[0].Luid.HighPart);
                          if ( started >= 0 )
                          {
                            v40 = *(_QWORD *)&v72[1].Privilege[0].Luid.HighPart;
                            if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v40, &v71);
                            else
                              HvpReleaseCellPaged(v40, &v71);
                            v41 = (_DWORD *)(v34 + 36);
                            v27 = 0LL;
                            CmpRemoveValueFromList(*(_QWORD *)(v9 + 32));
                            CmpFreeValue(*(_QWORD *)(v9 + 32), v24);
                            v42 = v75;
                            *(_QWORD *)(v75 + 4) = v11;
                            *(_QWORD *)(v9 + 168) = v11;
                            if ( !*v41 )
                            {
                              *(_DWORD *)(v42 + 60) = 0;
                              *(_WORD *)(v9 + 178) = 0;
                              *(_DWORD *)(v42 + 64) = 0;
                              *(_DWORD *)(v9 + 180) = 0;
                            }
                            goto LABEL_54;
                          }
LABEL_61:
                          v18 = v72;
LABEL_62:
                          if ( v27 )
                          {
                            v67 = *(_QWORD *)&v18[1].Privilege[0].Luid.HighPart;
                            if ( (*(_BYTE *)(v67 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v67, &v71);
                            else
                              HvpReleaseCellPaged(v67, &v71);
                          }
                        }
                      }
                    }
                    goto LABEL_63;
                  }
                  v18 = v72;
                  v59 = HvpMarkCellDirty(v35, v36);
                  started = v59;
                  if ( (PPRIVILEGE_SET)v9 != v18 )
                  {
                    if ( v59 < 0 )
                      goto LABEL_63;
                    v42 = v75;
                    v41 = (_DWORD *)(v75 + 36);
                    started = CmpSetValueKeyTombstone(*(_QWORD *)(v9 + 32), *(_DWORD *)(v9 + 40) >> 31);
                    if ( started < 0 )
                      goto LABEL_63;
                    v60 = v84;
                    *(_QWORD *)(v42 + 4) = v11;
                    *(_QWORD *)(v9 + 168) = v11;
                    v61 = (unsigned __int16)*v60;
                    if ( *(_DWORD *)(v42 + 60) < v61 )
                    {
                      *(_DWORD *)(v42 + 60) = v61;
                      *(_WORD *)(v9 + 178) = *v60;
                    }
LABEL_54:
                    if ( (*(_DWORD *)(v9 + 184) & 0x400000) == 0 && (*(_DWORD *)(v9 + 8) & 8) != 0 )
                    {
                      CmpDelayDerefKeyControlBlock(*(_QWORD *)(v9 + 104));
                      *(_QWORD *)(v9 + 104) = 0LL;
                      *(_WORD *)(v9 + 8) &= ~8u;
                    }
                    v43 = *(_DWORD *)(v42 + 40);
                    *(_DWORD *)(v9 + 96) = *v41;
                    *(_DWORD *)(v9 + 100) = v43;
LABEL_56:
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                    v44 = WORD1(v80);
                    v4 = 0;
                    v76 = 0LL;
                    v69 = 0;
                    _mm_lfence();
                    if ( v44 >= 2 )
                      v45 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v80) - 2);
                    else
                      v45 = Privileges[SWORD1(v80) - 1];
                    v46 = v74[1];
                    CmpReportNotifyHelper(
                      (unsigned int)&v80,
                      *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart,
                      v74[1],
                      4,
                      (__int64)v87);
                    if ( *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                      CmpReportNotifyHelper((unsigned int)&v80, CmpMasterHive, v46, 4, (__int64)v87);
                    started = 0;
                    goto LABEL_61;
                  }
                  if ( v59 >= 0 )
                  {
                    started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), v24);
                    if ( started >= 0 )
                    {
                      v63 = *(_QWORD *)(v9 + 32);
                      if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
                        v64 = HvpGetCellFlat(v63, v24, (unsigned int *)&v71);
                      else
                        v64 = HvpGetCellPaged(v63);
                      v27 = v64;
                      started = CmpMarkValueDataDirty(*(_QWORD *)(v9 + 32));
                      if ( started >= 0 )
                      {
                        CmpFreeValueData(*(_QWORD *)(v9 + 32));
                        *(_DWORD *)(v27 + 12) = 0;
                        *(_WORD *)(v27 + 16) |= 2u;
                        *(_DWORD *)(v27 + 4) = 0;
                        v42 = v75;
                        *(_DWORD *)(v27 + 8) = -1;
                        *(_QWORD *)(v42 + 4) = v11;
                        v41 = (_DWORD *)(v42 + 36);
                        *(_QWORD *)(v9 + 168) = v11;
                        goto LABEL_54;
                      }
                      goto LABEL_62;
                    }
                  }
LABEL_63:
                  v15 = 1;
                  if ( v75 )
                  {
                    v47 = *(_QWORD *)(v9 + 32);
                    if ( (*(_BYTE *)(v47 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v47, &v79);
                    else
                      HvpReleaseCellPaged(v47, &v79);
                  }
                }
              }
LABEL_66:
              v7 = v76;
              goto LABEL_67;
            }
            CmpUnlockKcbStack(&v80);
            v15 = 0;
            started = CmpPromoteKey((__int64)&v80, 0, 1);
            if ( started < 0 )
              goto LABEL_66;
            v7 = v76;
            v4 = 0;
LABEL_99:
            v14 = v77;
            v8 = *(_QWORD *)&v74[1];
            goto LABEL_7;
          }
          v23 = started == -1073741772;
        }
        if ( !v23 )
          goto LABEL_29;
        v14 = v77;
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(v18, v77) )
          goto LABEL_26;
      }
    }
  }
  started = -1072103423;
LABEL_136:
  v15 = 1;
LABEL_137:
  CmpRundownUnitOfWork((ULONG_PTR)v7);
  ExFreePoolWithTag(v7, 0x77554D43u);
LABEL_68:
  if ( v69 )
  {
    v62 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v62 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v62);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v4 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v15 )
    CmpUnlockKcbStack(&v80);
  CmpDrainDelayDerefContext((_QWORD **)&v89);
  if ( v68 )
    CmpUnlockRegistry(v48);
  if ( (_QWORD *)v87[0] != v87 )
    CmpSignalDeferredPosts(v87);
  CmpDetachFromRegistryProcess(&ApcState);
  v49 = v86;
  if ( started >= 0 && v70 && v86 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v86, 0, (_DWORD)v84, v77, v88, (__int64)v90, 2);
  if ( *((_QWORD *)&v90[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v90[0] + 1), 0x34414D43u);
  if ( v49 )
    CmpFreeTransientPoolWithTag(v49, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
