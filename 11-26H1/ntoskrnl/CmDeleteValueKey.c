/*
 * XREFs of CmDeleteValueKey @ 0x1408C1D50
 * Callers:
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408C2A00 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsValueTombstone @ 0x1408C2C20 (CmpIsValueTombstone.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     CmpRemoveValueFromList @ 0x1408C308C (CmpRemoveValueFromList.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D6890 (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFreeValueData @ 0x1408D7634 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A41064 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     CmpSetValueKeyTombstone @ 0x140B51FF8 (CmpSetValueKeyTombstone.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x140B6B610 (CmpGetValueForAudit.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  int started; // edi
  __int64 v18; // rdi
  char v19; // r14
  ULONG_PTR v20; // rcx
  __int16 i; // r12
  PPRIVILEGE_SET v22; // r14
  unsigned int PrivilegeCount; // edx
  ULONG_PTR v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  bool v27; // zf
  unsigned int v28; // r12d
  ULONG_PTR v29; // rcx
  __int64 CellFlat; // rax
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdi
  ULONG_PTR v35; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v37; // rcx
  __int64 v38; // r14
  ULONG_PTR v39; // rcx
  ULONG_PTR v40; // rdx
  PPRIVILEGE_SET v41; // rdi
  ULONG_PTR v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // r14
  __int64 v46; // r12
  int v47; // ecx
  __int16 v48; // ax
  PPRIVILEGE_SET v49; // rbx
  int v50; // edi
  __int64 v51; // rcx
  __int64 v52; // rcx
  void *v53; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *UnitOfWork; // rax
  int NameInListWithStatus; // eax
  __int64 v59; // r9
  unsigned int v60; // ebx
  PPRIVILEGE_SET v61; // rcx
  __int64 v62; // r8
  int v63; // eax
  _WORD *v64; // rcx
  unsigned int v65; // eax
  ULONG_PTR v66; // rdx
  ULONG_PTR v67; // rcx
  __int64 v68; // rax
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // r14
  __int64 v71; // rcx
  char v72; // [rsp+40h] [rbp-C0h]
  char v73; // [rsp+41h] [rbp-BFh] BYREF
  char v74; // [rsp+42h] [rbp-BEh]
  __int64 v75; // [rsp+48h] [rbp-B8h] BYREF
  PPRIVILEGE_SET v76; // [rsp+50h] [rbp-B0h]
  unsigned int v77; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v78[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  _QWORD *v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  ULONG_PTR v82; // [rsp+80h] [rbp-80h] BYREF
  __int64 v83; // [rsp+88h] [rbp-78h] BYREF
  __int128 v84; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp-60h]
  int v86; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  _WORD *v88; // [rsp+C0h] [rbp-40h]
  __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  void *v90; // [rsp+D0h] [rbp-30h]
  _QWORD v91[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-18h]
  __int128 v93; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v94[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v81 = a1;
  v5 = 0LL;
  v74 = a4;
  v92 = a3;
  v91[1] = v91;
  v6 = a1;
  v88 = a2;
  v91[0] = v91;
  v77 = 0;
  v84 = 0LL;
  WORD1(v84) = -1;
  v7 = 0LL;
  v89 = 0LL;
  v8 = 0LL;
  v83 = 0LL;
  v9 = 0LL;
  v87 = 0LL;
  v75 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v80 = 0LL;
  v73 = 0;
  v86 = 0;
  v93 = 0LL;
  *(_QWORD *)&v78[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v79 = 0LL;
  HvpGetCellContextInitialize(&v83);
  HvpGetCellContextInitialize(&v87);
  v76 = 0LL;
  *(double *)&v5 = HvpGetCellContextInitialize(&v75);
  LODWORD(v82) = -1;
  v78[0] = -1;
  CmpInitializeDelayDerefContext(&v93);
  v90 = 0LL;
  v94[0] = v5;
  v94[1] = v5;
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v10) )
    {
      started = -1073741431;
      v72 = 0;
      v19 = 0;
      goto LABEL_67;
    }
    v15 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v12, v11, v13, v14);
    v9 = *(_QWORD *)(v6 + 8);
    v72 = 1;
    if ( (unsigned __int8)CmpIsKcbImmutable(v9, v16) )
    {
      started = -1073741790;
LABEL_160:
      v19 = 0;
      goto LABEL_67;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v84, v9);
    if ( started < 0 )
      goto LABEL_160;
    CmpLockKcbStackTopExclusiveRestShared(&v84);
    v18 = v81;
    v19 = 1;
    if ( *(_QWORD *)(v81 + 56) || *(_QWORD *)(v81 + 64) )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v81, 0LL) )
      {
        started = CmpTransSearchAddTransFromKeyBody(v18, &v78[1]);
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
      started = (*(_BYTE *)(v18 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_67;
    }
LABEL_7:
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v18, v8) )
    {
      v19 = 1;
      goto LABEL_158;
    }
    if ( v8 )
      break;
    v20 = v9 + 248;
    if ( *(int *)(v9 + 248) >= 0 )
    {
      v20 = v9 + 264;
      if ( !*(_DWORD *)(v9 + 264) )
        goto LABEL_11;
    }
    started = CmpSnapshotTxOwnerArray(v20, &v77, &v89);
    if ( started < 0 )
    {
LABEL_29:
      v19 = 1;
      goto LABEL_67;
    }
    v60 = v77;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 1, v59, v77);
    CmpUnlockKcbStack(&v84);
    v61 = Privileges[1];
    v19 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v84 = 0LL;
    WORD1(v84) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v61);
    v72 = 0;
    started = CmpRollbackTransactionArray(v60, v89, v62, &v86);
    if ( started < 0 )
    {
LABEL_67:
      if ( v7 )
        goto LABEL_137;
      goto LABEL_68;
    }
    v6 = v81;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v80 = UnitOfWork;
  v7 = UnitOfWork;
  if ( !UnitOfWork )
  {
    started = -1073741670;
    v19 = 1;
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
    started = CmpCloneKCBValueListForTrans(v9, v8, &v73);
    if ( started < 0 )
    {
      v19 = 1;
      goto LABEL_137;
    }
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
    v18 = v81;
    v4 = 0;
LABEL_11:
    for ( i = *(_WORD *)(v9 + 66); ; --i )
    {
      if ( i < 0
        || (i >= 2 ? (v22 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + i - 2)) : (v22 = Privileges[i - 1]),
            (unsigned int)CmpGetEffectiveKcbSemantics(v22, v18) == 1) )
      {
LABEL_26:
        v22 = v76;
        goto LABEL_27;
      }
      PrivilegeCount = v22[2].PrivilegeCount;
      if ( PrivilegeCount != -1 )
      {
        if ( *(_QWORD *)&v78[1] && *(_QWORD *)&v22[14].Privilege[0].Luid == *(_QWORD *)&v78[1] )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart,
                                   (__int64)v78,
                                   (__int64)&v82);
          started = NameInListWithStatus;
          if ( NameInListWithStatus >= 0 )
            goto LABEL_126;
          v27 = NameInListWithStatus == -1073741772;
        }
        else
        {
          v24 = *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
            HvpGetCellFlat(v24, PrivilegeCount, (unsigned int *)&v87);
          else
            HvpGetCellPaged(v24);
          v25 = CmpFindNameInListWithStatus(*(_QWORD *)&v22[1].Privilege[0].Luid.HighPart, (__int64)v78, (__int64)&v82);
          v26 = *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart;
          started = v25;
          if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v26, &v87);
          else
            HvpReleaseCellPaged(v26, &v87);
          if ( started >= 0 )
          {
LABEL_126:
            v76 = v22;
LABEL_27:
            v28 = v82;
            if ( (_DWORD)v82 == -1 )
            {
              started = -1073741772;
              goto LABEL_29;
            }
            v29 = *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart;
            if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v29, v82, (unsigned int *)&v75);
            else
              CellFlat = HvpGetCellPaged(v29);
            v31 = CellFlat;
            if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)&v22[1].Privilege[0].Luid.HighPart, CellFlat) )
            {
              started = -1073741772;
              goto LABEL_62;
            }
            if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v32, &v75);
            else
              HvpReleaseCellPaged(v32, &v75);
            v31 = 0LL;
            if ( *(_DWORD *)(v9 + 40) != -1 )
            {
              v33 = *(_QWORD *)(v9 + 32);
              ++*(_QWORD *)(v9 + 304);
              HvLockHiveFlusherShared(v33);
              v34 = *(_QWORD *)&v78[1];
              v4 = 1;
              if ( *(_QWORD *)&v78[1] )
                goto LABEL_39;
              started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40));
              v19 = 1;
              if ( started >= 0 )
              {
                v34 = *(_QWORD *)&v78[1];
LABEL_39:
                v35 = *(_QWORD *)(v9 + 32);
                if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v35, *(_DWORD *)(v9 + 40), (unsigned int *)&v83);
                else
                  CellPaged = HvpGetCellPaged(v35);
                v37 = *(_QWORD *)(v9 + 32);
                v38 = CellPaged;
                v79 = CellPaged;
                CmpUpdateKeyNodeAccessBits(v37);
                if ( v74 )
                {
                  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(&v84, v34, 0LL);
                  Pool = (void *)CmpAllocatePool(0x100uLL);
                  if ( Pool )
                  {
                    memmove(
                      Pool,
                      (const void *)(SecurityCacheEntryForKcbStack + 32),
                      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
                    v90 = Pool;
                    started = CmpGetValueForAudit(*(_QWORD *)&v76[1].Privilege[0].Luid.HighPart);
                    if ( started >= 0 )
                    {
                      v38 = v79;
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
                v39 = *(_QWORD *)(v9 + 32);
                if ( *(_QWORD *)&v78[1] )
                {
                  if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v39, &v83);
                  else
                    HvpReleaseCellPaged(v39, &v83);
                  v55 = *(_QWORD *)(v9 + 32);
                  v79 = 0LL;
                  HvUnlockHiveFlusherShared(v55);
                  v56 = (__int64)v80;
                  v4 = 0;
                  *((_DWORD *)v80 + 17) = 6;
                  *(_DWORD *)(v56 + 88) = v28;
                  started = CmAddLogForAction(v56, 1u);
                  v19 = 1;
                  if ( started >= 0 )
                  {
                    HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                    CmpRemoveValueFromList(*(_QWORD *)(v9 + 32));
                    goto LABEL_56;
                  }
                }
                else
                {
                  v40 = *(unsigned int *)(v9 + 40);
                  if ( !*(_WORD *)(v9 + 66) )
                  {
                    started = HvpMarkCellDirty(v39, v40);
                    if ( started >= 0 )
                    {
                      started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 100));
                      if ( started >= 0 )
                      {
                        started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), v28);
                        if ( started >= 0 )
                        {
                          v41 = v76;
                          v42 = *(_QWORD *)&v76[1].Privilege[0].Luid.HighPart;
                          if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
                            v43 = HvpGetCellFlat(v42, v28, (unsigned int *)&v75);
                          else
                            v43 = HvpGetCellPaged(v42);
                          v31 = v43;
                          started = CmpMarkValueDataDirty(*(_QWORD *)&v41[1].Privilege[0].Luid.HighPart);
                          if ( started >= 0 )
                          {
                            v44 = *(_QWORD *)&v76[1].Privilege[0].Luid.HighPart;
                            if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v44, &v75);
                            else
                              HvpReleaseCellPaged(v44, &v75);
                            v45 = (_DWORD *)(v38 + 36);
                            v31 = 0LL;
                            CmpRemoveValueFromList(*(_QWORD *)(v9 + 32));
                            CmpFreeValue(*(_QWORD *)(v9 + 32), v28);
                            v46 = v79;
                            *(_QWORD *)(v79 + 4) = v15;
                            *(_QWORD *)(v9 + 168) = v15;
                            if ( !*v45 )
                            {
                              *(_DWORD *)(v46 + 60) = 0;
                              *(_WORD *)(v9 + 178) = 0;
                              *(_DWORD *)(v46 + 64) = 0;
                              *(_DWORD *)(v9 + 180) = 0;
                            }
                            goto LABEL_54;
                          }
LABEL_61:
                          v22 = v76;
LABEL_62:
                          if ( v31 )
                          {
                            v71 = *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart;
                            if ( (*(_BYTE *)(v71 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v71, &v75);
                            else
                              HvpReleaseCellPaged(v71, &v75);
                          }
                        }
                      }
                    }
                    goto LABEL_63;
                  }
                  v22 = v76;
                  v63 = HvpMarkCellDirty(v39, v40);
                  started = v63;
                  if ( (PPRIVILEGE_SET)v9 != v22 )
                  {
                    if ( v63 < 0 )
                      goto LABEL_63;
                    v46 = v79;
                    v45 = (_DWORD *)(v79 + 36);
                    started = CmpSetValueKeyTombstone(*(_QWORD *)(v9 + 32), *(_DWORD *)(v9 + 40) >> 31);
                    if ( started < 0 )
                      goto LABEL_63;
                    v64 = v88;
                    *(_QWORD *)(v46 + 4) = v15;
                    *(_QWORD *)(v9 + 168) = v15;
                    v65 = (unsigned __int16)*v64;
                    if ( *(_DWORD *)(v46 + 60) < v65 )
                    {
                      *(_DWORD *)(v46 + 60) = v65;
                      *(_WORD *)(v9 + 178) = *v64;
                    }
LABEL_54:
                    if ( (*(_DWORD *)(v9 + 184) & 0x400000) == 0 && (*(_DWORD *)(v9 + 8) & 8) != 0 )
                    {
                      CmpDelayDerefKeyControlBlock(*(_QWORD *)(v9 + 104));
                      *(_QWORD *)(v9 + 104) = 0LL;
                      *(_WORD *)(v9 + 8) &= ~8u;
                    }
                    v47 = *(_DWORD *)(v46 + 40);
                    *(_DWORD *)(v9 + 96) = *v45;
                    *(_DWORD *)(v9 + 100) = v47;
LABEL_56:
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                    v48 = WORD1(v84);
                    v4 = 0;
                    v80 = 0LL;
                    v73 = 0;
                    _mm_lfence();
                    if ( v48 >= 2 )
                      v49 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v84) - 2);
                    else
                      v49 = Privileges[SWORD1(v84) - 1];
                    v50 = v78[1];
                    CmpReportNotifyHelper(
                      (unsigned int)&v84,
                      *(_QWORD *)&v49[1].Privilege[0].Luid.HighPart,
                      v78[1],
                      4,
                      (__int64)v91);
                    if ( *(_QWORD *)&v49[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                      CmpReportNotifyHelper((unsigned int)&v84, CmpMasterHive, v50, 4, (__int64)v91);
                    started = 0;
                    goto LABEL_61;
                  }
                  if ( v63 >= 0 )
                  {
                    started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), v28);
                    if ( started >= 0 )
                    {
                      v67 = *(_QWORD *)(v9 + 32);
                      if ( (*(_BYTE *)(v67 + 140) & 1) != 0 )
                        v68 = HvpGetCellFlat(v67, v28, (unsigned int *)&v75);
                      else
                        v68 = HvpGetCellPaged(v67);
                      v31 = v68;
                      started = CmpMarkValueDataDirty(*(_QWORD *)(v9 + 32));
                      if ( started >= 0 )
                      {
                        CmpFreeValueData(*(_QWORD *)(v9 + 32));
                        *(_DWORD *)(v31 + 12) = 0;
                        *(_WORD *)(v31 + 16) |= 2u;
                        *(_DWORD *)(v31 + 4) = 0;
                        v46 = v79;
                        *(_DWORD *)(v31 + 8) = -1;
                        *(_QWORD *)(v46 + 4) = v15;
                        v45 = (_DWORD *)(v46 + 36);
                        *(_QWORD *)(v9 + 168) = v15;
                        goto LABEL_54;
                      }
                      goto LABEL_62;
                    }
                  }
LABEL_63:
                  v19 = 1;
                  if ( v79 )
                  {
                    v51 = *(_QWORD *)(v9 + 32);
                    if ( (*(_BYTE *)(v51 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v51, &v83);
                    else
                      HvpReleaseCellPaged(v51, &v83);
                  }
                }
              }
LABEL_66:
              v7 = v80;
              goto LABEL_67;
            }
            CmpUnlockKcbStack(&v84);
            v19 = 0;
            started = CmpPromoteKey((__int64)&v84, 0, 1);
            if ( started < 0 )
              goto LABEL_66;
            v7 = v80;
            v4 = 0;
LABEL_99:
            v18 = v81;
            v8 = *(_QWORD *)&v78[1];
            goto LABEL_7;
          }
          v27 = started == -1073741772;
        }
        if ( !v27 )
          goto LABEL_29;
        v18 = v81;
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(v22, v81) )
          goto LABEL_26;
      }
    }
  }
  started = -1072103423;
LABEL_136:
  v19 = 1;
LABEL_137:
  CmpRundownUnitOfWork((ULONG_PTR)v7);
  ExFreePoolWithTag(v7, 0x77554D43u);
LABEL_68:
  if ( v73 )
  {
    v66 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v66 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v66);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v4 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v19 )
    CmpUnlockKcbStack(&v84);
  CmpDrainDelayDerefContext((_QWORD **)&v93);
  if ( v72 )
    CmpUnlockRegistry(v52);
  if ( (_QWORD *)v91[0] != v91 )
    CmpSignalDeferredPosts(v91);
  CmpDetachFromRegistryProcess(&ApcState);
  v53 = v90;
  if ( started >= 0 && v74 && v90 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v90, 0, (_DWORD)v88, v81, v92, (__int64)v94, 2);
  if ( *((_QWORD *)&v94[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v94[0] + 1), 0x34414D43u);
  if ( v53 )
    CmpFreeTransientPoolWithTag(v53, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
