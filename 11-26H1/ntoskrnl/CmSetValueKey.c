/*
 * XREFs of CmSetValueKey @ 0x1408CEE30
 * Callers:
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x1404D6A7C (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     CmpLogTransactionAbortedByName @ 0x1407766C4 (CmpLogTransactionAbortedByName.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpIsValueTombstone @ 0x1408BC650 (CmpIsValueTombstone.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 *     CmpRemoveValueFromList @ 0x1408BCABC (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1408BD1FC (CmpSetValueKeyExisting.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C182C (CmpConstructNameFromKcbNameBlocks.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C3890 (CmpDelayDerefKeyControlBlock.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D001C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpRollbackTransactionArray @ 0x1408D0204 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D02CC (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1408D0BF4 (CmpFreeValue.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D0D50 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D1528 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408D5200 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpAddValueKeyNew @ 0x1408DD5DC (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1408DD8C8 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A2F1D8 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x140B68680 (CmpGetValueForAudit.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        size_t a5,
        __int64 a6,
        char a7)
{
  __int16 v7; // r13
  __int128 v8; // xmm0
  ULONG_PTR v9; // rsi
  __int64 v10; // r15
  unsigned __int16 **v11; // rcx
  unsigned __int16 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  struct _PRIVILEGE_SET *v16; // r12
  __int16 v17; // di
  signed __int64 v18; // r12
  char *v19; // r14
  char *v20; // rcx
  char v21; // r14
  int NameInListWithStatus; // edi
  __int64 v23; // rdi
  __int16 v24; // r14
  PPRIVILEGE_SET v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  PPRIVILEGE_SET v29; // rdx
  __int16 i; // ax
  PPRIVILEGE_SET v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  ULONG_PTR v34; // rcx
  __int64 CellFlat; // rax
  __int64 v36; // r14
  ULONG_PTR v37; // rcx
  unsigned int v38; // r13d
  ULONG_PTR v39; // rcx
  int v40; // r12d
  unsigned int v41; // r12d
  bool v42; // sf
  PCUNICODE_STRING v43; // rcx
  unsigned int Length; // eax
  bool v45; // zf
  int v46; // eax
  __int64 v47; // rcx
  PPRIVILEGE_SET v48; // rcx
  PPRIVILEGE_SET v49; // rbx
  int v50; // edi
  unsigned int v51; // ebx
  __int64 v52; // rcx
  char v53; // r14
  PVOID v54; // rbx
  struct _PRIVILEGE_SET *v55; // r14
  signed __int64 v56; // rsi
  ULONG_PTR *v57; // rbx
  ULONG_PTR *v58; // rcx
  __int64 v59; // rcx
  void *v60; // rbx
  unsigned int v62; // r12d
  wchar_t *Buffer; // rcx
  __int16 v64; // bx
  signed __int64 v65; // r14
  ULONG_PTR *v66; // rdi
  ULONG_PTR *v67; // rcx
  __int64 v68; // r8
  __int16 v69; // di
  signed __int64 v70; // r12
  ULONG_PTR *v71; // r14
  ULONG_PTR *v72; // rcx
  __int16 v73; // di
  signed __int64 v74; // r12
  ULONG_PTR *v75; // r14
  ULONG_PTR *v76; // rcx
  __int16 v77; // r14
  PPRIVILEGE_SET v78; // rbx
  PPRIVILEGE_SET v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rcx
  _QWORD *UnitOfWork; // rax
  _QWORD *v84; // r12
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r8
  struct _KLOCK_ENTRIES *v88; // r9
  _DWORD *v89; // rdi
  int v90; // eax
  ULONG_PTR v91; // rcx
  unsigned int v92; // ebx
  int v93; // edi
  _DWORD *v94; // rcx
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // r8
  struct _KLOCK_ENTRIES *v98; // r9
  __int64 v99; // rax
  struct _PRIVILEGE_SET *v100; // rcx
  ULONG_PTR v101; // rdx
  __int16 v102; // di
  signed __int64 v103; // r12
  ULONG_PTR *v104; // r14
  ULONG_PTR *v105; // rcx
  PPRIVILEGE_SET v106; // rbx
  PPRIVILEGE_SET v107; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  void *v110; // r12
  __int64 v111; // rcx
  ULONG_PTR v112; // rcx
  ULONG_PTR v113; // rcx
  __int64 CellPaged; // rax
  __int64 v115; // rcx
  bool IsValueTombstone; // di
  __int64 v117; // r9
  unsigned int v118; // ebx
  __int64 v119; // rcx
  __int64 v120; // r8
  int v121; // eax
  __int64 v122; // r8
  unsigned __int16 *v123; // rbx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  size_t v126; // [rsp+30h] [rbp-D0h]
  char v127; // [rsp+42h] [rbp-BEh]
  char v128; // [rsp+43h] [rbp-BDh]
  char v129[4]; // [rsp+44h] [rbp-BCh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  int v131; // [rsp+50h] [rbp-B0h]
  char PreviousMode; // [rsp+54h] [rbp-ACh]
  int v133; // [rsp+58h] [rbp-A8h]
  __int64 v134; // [rsp+60h] [rbp-A0h]
  __int128 v135; // [rsp+68h] [rbp-98h] BYREF
  PPRIVILEGE_SET v136[2]; // [rsp+78h] [rbp-88h]
  BOOL v137; // [rsp+88h] [rbp-78h]
  __int64 v138; // [rsp+90h] [rbp-70h]
  unsigned int v139; // [rsp+98h] [rbp-68h] BYREF
  __int64 v140; // [rsp+9Ch] [rbp-64h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  __int64 v142; // [rsp+B0h] [rbp-50h] BYREF
  PCUNICODE_STRING String2; // [rsp+B8h] [rbp-48h]
  __int64 v144; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v145; // [rsp+C8h] [rbp-38h] BYREF
  void *v146; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v147; // [rsp+D8h] [rbp-28h] BYREF
  int v148; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v149; // [rsp+E8h] [rbp-18h] BYREF
  void *v150; // [rsp+F0h] [rbp-10h]
  _QWORD v151[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v152; // [rsp+108h] [rbp+8h] BYREF
  __int64 v153; // [rsp+110h] [rbp+10h]
  __int128 v154; // [rsp+118h] [rbp+18h] BYREF
  __int128 v155; // [rsp+128h] [rbp+28h] BYREF
  __int128 v156; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+158h] [rbp+58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+78h] BYREF

  v7 = 0;
  v8 = 0LL;
  v153 = a6;
  v134 = a1;
  v151[1] = v151;
  v146 = a4;
  v151[0] = v151;
  v9 = 0LL;
  v133 = a3;
  LOWORD(v10) = -1;
  String2 = a2;
  v135 = 0LL;
  WORD1(v135) = -1;
  v138 = 0LL;
  v152 = 0LL;
  v139 = 0;
  v149 = 0LL;
  v145 = 0LL;
  v140 = 0xFFFFFFFF00000000uLL;
  v142 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  P = 0LL;
  v129[0] = 0;
  v148 = 0;
  v154 = 0LL;
  *(_OWORD *)v136 = 0LL;
  HvpGetCellContextInitialize(&v145);
  *(double *)&v8 = HvpGetCellContextInitialize(&v142);
  CmpInitializeDelayDerefContext(&v154);
  LODWORD(v144) = -1;
  v131 = -1;
  v155 = v8;
  v150 = 0LL;
  v156 = v8;
  v137 = 0;
  *(_OWORD *)&SubjectContext.ClientToken = v8;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)&SubjectContext.PrimaryToken = v8;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(0xFFFFF78000000014uLL) )
    {
      LOBYTE(v16) = 0;
      Privileges = v136[1];
      v53 = 0;
      NameInListWithStatus = -1073741431;
      v128 = 0;
      goto LABEL_79;
    }
    v12 = *v11;
    v147 = *v11;
    CmpLockRegistry(v11);
    v128 = 1;
    v9 = *(_QWORD *)(v134 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v9, v13) )
    {
      LOBYTE(v16) = 0;
      Privileges = v136[1];
      v53 = 0;
      NameInListWithStatus = -1073741790;
      goto LABEL_79;
    }
    v15 = *(__int16 *)(v9 + 66);
    v16 = 0LL;
    Privileges = 0LL;
    if ( v15 >= 2 )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v16 = Privileges;
      if ( !Privileges )
      {
        NameInListWithStatus = -1073741670;
        Privileges = v136[1];
        v53 = 0;
        goto LABEL_79;
      }
      v14 = v134;
    }
    LOWORD(v135) = v15;
    v136[1] = v16;
    v10 = *(__int16 *)(v9 + 66);
    WORD1(v135) = v10;
    if ( (_WORD)v10 )
    {
      v99 = *(_QWORD *)(v9 + 192);
      if ( !v99 )
        goto LABEL_8;
      do
      {
        v100 = *(struct _PRIVILEGE_SET **)(v99 + 16);
        if ( (__int16)v10 >= 2 )
        {
          *((_QWORD *)v16 + (__int16)v10 - 2) = v100;
        }
        else
        {
          v136[(__int16)v10 - 1] = v100;
          v16 = v136[1];
        }
        v99 = *(_QWORD *)(v99 + 24);
        LOWORD(v10) = v10 - 1;
      }
      while ( v99 );
    }
    else
    {
      v136[v10 - 1] = (PPRIVILEGE_SET)v9;
      v16 = v136[1];
    }
    LOWORD(v10) = WORD1(v135);
    Privileges = v16;
LABEL_8:
    if ( *(_QWORD *)(v14 + 56) || *(_QWORD *)(v14 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v135);
      v14 = v134;
      v21 = 1;
    }
    else
    {
      v17 = 0;
      if ( (v10 & 0x8000u) == 0LL )
      {
        v18 = (char *)v16 - ((char *)&v135 + 8);
        v19 = (char *)&v135 + 8;
        do
        {
          if ( v17 >= 2 )
            v20 = &v19[v18 - 16];
          else
            v20 = v19;
          CmpLockKcbShared(*(_QWORD *)v20);
          ++v17;
          v19 += 8;
        }
        while ( v17 <= (__int16)v10 );
        v16 = Privileges;
        v14 = v134;
      }
      v21 = 0;
    }
    v127 = v21;
    if ( *(_QWORD *)(v14 + 56) || *(_QWORD *)(v14 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v14, 0LL) )
        goto LABEL_216;
      NameInListWithStatus = CmpTransSearchAddTransFromKeyBody(v134, &v152);
      if ( NameInListWithStatus < 0 )
        goto LABEL_207;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        NameInListWithStatus = -1072103423;
        LOBYTE(v16) = 0;
        goto LABEL_78;
      }
      v23 = v152;
      v14 = v134;
      v138 = v152;
    }
    else
    {
LABEL_30:
      v23 = v138;
    }
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v14, v23) )
    {
LABEL_216:
      LOBYTE(v16) = 0;
      NameInListWithStatus = -1073740763;
      if ( (*(_BYTE *)(v134 + 48) & 1) == 0 )
        NameInListWithStatus = -1073741444;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      NameInListWithStatus = -1073741790;
LABEL_207:
      LOBYTE(v16) = 0;
      goto LABEL_78;
    }
    if ( v23 )
      break;
    if ( *(int *)(v9 + 248) < 0 )
    {
      NameInListWithStatus = CmpSnapshotTxOwnerArray(v9 + 248, &v139, &v149);
      if ( NameInListWithStatus < 0 )
        goto LABEL_207;
      v147 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v62 = v139;
      if ( v139
        && (unsigned int)dword_140E09EE8 > 4
        && (qword_140E09EF8 & 1) != 0
        && (qword_140E09F00 & 1) == qword_140E09F00 )
      {
        v121 = CmpConstructNameFromKcbNameBlocks(v9, (__int64 *)&v147);
        v123 = v147;
        if ( v121 >= 0 )
          CmpLogTransactionAbortedByName(v147, 1, v122, v62);
        if ( v123 )
          CmpFreeTransientPoolWithTag(v123, 0x624E4D43u);
      }
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
        CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
      v64 = 0;
      if ( (v10 & 0x8000u) == 0LL )
      {
        v65 = (char *)Privileges - ((char *)&v135 + 8);
        v66 = (ULONG_PTR *)&v135 + 1;
        do
        {
          if ( v64 >= 2 )
            v67 = (ULONG_PTR *)((char *)v66 + v65 - 16);
          else
            v67 = v66;
          CmpUnlockKcb(*v67);
          ++v64;
          ++v66;
        }
        while ( v64 <= (__int16)v10 );
      }
      if ( Privileges )
        CmSiFreeMemory(Privileges);
      v135 = 0LL;
      WORD1(v135) = -1;
      LOWORD(v10) = -1;
      *(_OWORD *)v136 = 0LL;
      CmpUnlockRegistry(Buffer);
      v128 = 0;
      NameInListWithStatus = CmpRollbackTransactionArray(v62, v149, v68, &v148);
      if ( NameInListWithStatus < 0 )
      {
        LOBYTE(v16) = 0;
        Privileges = v136[1];
        v53 = 0;
        goto LABEL_79;
      }
    }
    else
    {
      if ( !*(_DWORD *)(v9 + 264) )
        goto LABEL_36;
      NameInListWithStatus = CmpSnapshotTxOwnerArray(v9 + 264, &v139, &v149);
      if ( NameInListWithStatus < 0 )
        goto LABEL_207;
      v118 = v139;
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 1, v117, v139);
      CmpUnlockKcbStack((__int64)&v135);
      v53 = 0;
      if ( v16 )
        CmSiFreeMemory(v16);
      LOWORD(v10) = -1;
      v135 = 0LL;
      WORD1(v135) = -1;
      *(_OWORD *)v136 = 0LL;
      CmpUnlockRegistry(v119);
      v128 = 0;
      NameInListWithStatus = CmpRollbackTransactionArray(v118, v149, v120, &v148);
      if ( NameInListWithStatus < 0 )
      {
        LOBYTE(v16) = 0;
        Privileges = v136[1];
        goto LABEL_79;
      }
    }
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v26);
  P = UnitOfWork;
  v84 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v53 = 1;
    NameInListWithStatus = -1073741670;
    LOBYTE(v16) = 0;
    goto LABEL_81;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v9);
  NameInListWithStatus = CmpTransEnlistUowInCmTrans(v84, v23);
  if ( NameInListWithStatus < 0 )
    goto LABEL_156;
  if ( !CmpLockIXLockIntent((unsigned int *)(v9 + 248), (__int64)v84, v85) )
    goto LABEL_155;
  v89 = (_DWORD *)(v9 + 264);
  v90 = *(_DWORD *)(v9 + 264);
  if ( !v90 )
  {
    *v89 = -2147483647;
    *(_QWORD *)(v9 + 272) = v84;
    v84[3] = v89;
    goto LABEL_162;
  }
  if ( v90 >= 0 )
  {
    if ( v90 == 1 && CmEqualTrans(*(_QWORD *)(*(_QWORD *)(v9 + 272) + 56LL), v84[7]) )
    {
      *v89 |= 0x80000000;
      goto LABEL_162;
    }
LABEL_155:
    NameInListWithStatus = -1072103423;
LABEL_156:
    LOBYTE(v16) = 0;
LABEL_157:
    v53 = 1;
    v54 = P;
    goto LABEL_80;
  }
  if ( !CmEqualTrans(*(_QWORD *)(*(_QWORD *)(v9 + 272) + 56LL), v84[7]) )
    goto LABEL_155;
LABEL_162:
  HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32), v86, v87, v88);
  LOBYTE(v16) = 1;
  NameInListWithStatus = CmpCloneKCBValueListForTrans(v9, v138, v129);
  if ( NameInListWithStatus < 0 )
    goto LABEL_157;
  HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  v23 = v138;
LABEL_36:
  v29 = Privileges;
  LOBYTE(v16) = 0;
  for ( i = v10; ; --i )
  {
    if ( i < 0 )
      goto LABEL_42;
    v31 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Privileges + i - 2) : v136[i - 1];
    if ( v31[2].PrivilegeCount != -1 )
      break;
  }
  if ( (v31[9].Control & 0x100000) != 0
    && (v133 != 6
     || (a5 & 1) != 0
     || (unsigned int)a5 > 0xFFFF
     || !String2
     || !RtlEqualUnicodeString((PCUNICODE_STRING)&PspSiloMonitorLock.152, String2, 1u)
     || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext)) )
  {
    NameInListWithStatus = -1073741790;
    goto LABEL_78;
  }
LABEL_42:
  if ( *(_DWORD *)(v9 + 40) != -1 )
  {
    if ( v21 )
      goto LABEL_49;
    v32 = CmpCompareNewValueDataAgainstKCBCache(v9, String2, (unsigned int)v133, v146, a5);
    if ( v32 == 1 )
    {
      v73 = 0;
      if ( (v10 & 0x8000u) == 0LL )
      {
        v74 = (char *)Privileges - ((char *)&v135 + 8);
        v75 = (ULONG_PTR *)&v135 + 1;
        do
        {
          if ( v73 >= 2 )
            v76 = (ULONG_PTR *)((char *)v75 + v74 - 16);
          else
            v76 = v75;
          CmpUnlockKcb(*v76);
          ++v73;
          ++v75;
        }
        while ( v73 <= (__int16)v10 );
      }
      v77 = 0;
      if ( (__int16)v10 - 1 < 0 )
        goto LABEL_26;
      v78 = Privileges;
      do
      {
        if ( v77 >= 2 )
          v79 = (PPRIVILEGE_SET)*((_QWORD *)v78 + v77 - 2);
        else
          v79 = v136[v77 - 1];
        CmpLockKcbShared(v79);
        ++v77;
      }
      while ( v77 <= (__int16)v10 - 1 );
    }
    else
    {
      if ( !v32 )
      {
        NameInListWithStatus = 0;
        goto LABEL_78;
      }
      v127 = 1;
      if ( *(struct _KTHREAD **)(v9 + 56) == KeGetCurrentThread() )
        goto LABEL_49;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v9 + 56) = KeGetCurrentThread();
LABEL_49:
        v33 = *(_QWORD *)(v9 + 32);
        ++*(_QWORD *)(v9 + 304);
        HvLockHiveFlusherShared(v33, (__int64)v29, v27, v28);
        LOBYTE(v16) = 1;
        if ( !v23 )
        {
          NameInListWithStatus = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40));
          if ( NameInListWithStatus >= 0 )
          {
            v23 = v138;
            goto LABEL_52;
          }
LABEL_78:
          v53 = 1;
          goto LABEL_79;
        }
LABEL_52:
        v34 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v34, *(_DWORD *)(v9 + 40), (unsigned int *)&v145);
        else
          CellFlat = HvpGetCellPaged(v34);
        v36 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32));
        v37 = *(_QWORD *)(v9 + 32);
        if ( v23 )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(v37, (__int64)&v140, (__int64)&v144);
          if ( (int)(NameInListWithStatus + 0x80000000) < 0 )
            goto LABEL_56;
LABEL_123:
          if ( NameInListWithStatus != -1073741772 )
          {
LABEL_124:
            v51 = v131;
LABEL_73:
            if ( v36 )
            {
              v52 = *(_QWORD *)(v9 + 32);
              if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v52, &v145);
              else
                HvpReleaseCellPaged(v52, &v145);
            }
            if ( v51 != -1 )
              CmpFreeValue(*(_QWORD *)(v9 + 32), v51);
            goto LABEL_78;
          }
        }
        else
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(v37, (__int64)&v140, (__int64)&v144);
          if ( (int)(NameInListWithStatus + 0x80000000) >= 0 )
            goto LABEL_123;
        }
LABEL_56:
        v38 = v144;
        if ( !a7 )
          goto LABEL_57;
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(&v135, v138, 0LL);
        Pool = (void *)CmpAllocatePool(0x100uLL);
        v110 = Pool;
        if ( !Pool )
        {
          NameInListWithStatus = -1073741670;
          goto LABEL_253;
        }
        memmove(
          Pool,
          (const void *)(SecurityCacheEntryForKcbStack + 32),
          *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
        v150 = v110;
        if ( v38 == -1 )
        {
          v137 = 0;
          goto LABEL_57;
        }
        v113 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v113 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v113, v38, (unsigned int *)&v142);
        else
          CellPaged = HvpGetCellPaged(v113);
        IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), CellPaged);
        v45 = (*(_BYTE *)(v115 + 140) & 1) == 0;
        v137 = !IsValueTombstone;
        if ( v45 )
          HvpReleaseCellPaged(v115, &v142);
        else
          HvpReleaseCellFlat(v115, &v142);
        if ( IsValueTombstone
          || (NameInListWithStatus = CmpGetValueForAudit(*(_QWORD *)(v9 + 32)), NameInListWithStatus >= 0) )
        {
LABEL_57:
          v39 = *(_QWORD *)(v9 + 32);
          v40 = *(_DWORD *)(v9 + 40) >> 31;
          if ( !v138 )
          {
            if ( v38 == -1 )
            {
              v41 = a5;
              LODWORD(v126) = a5;
              NameInListWithStatus = CmpSetValueKeyNew(v39, v133, v146, v126, *(_DWORD *)(v9 + 40) >> 31);
              v42 = NameInListWithStatus < 0;
            }
            else
            {
              if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                v80 = HvpGetCellFlat(v39, v38, (unsigned int *)&v142);
              else
                v80 = HvpGetCellPaged(v39);
              v41 = a5;
              LODWORD(Size) = a5;
              v81 = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v38, v80, v133, v146, Size);
              v82 = *(_QWORD *)(v9 + 32);
              NameInListWithStatus = v81;
              if ( (*(_BYTE *)(v82 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v82, &v142);
              else
                HvpReleaseCellPaged(v82, &v142);
              v42 = NameInListWithStatus < 0;
            }
            if ( !v42 )
            {
              v43 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v36 + 60) < Length )
              {
                *(_DWORD *)(v36 + 60) = Length;
                *(_WORD *)(v9 + 178) = v43->Length;
              }
              if ( *(_DWORD *)(v36 + 64) < v41 )
              {
                *(_DWORD *)(v36 + 64) = v41;
                *(_DWORD *)(v9 + 180) = v41;
              }
              *(_QWORD *)(v36 + 4) = v12;
              v45 = (*(_DWORD *)(v9 + 184) & 0x400000) == 0;
              *(_QWORD *)(v9 + 168) = v12;
              if ( v45 && (*(_DWORD *)(v9 + 8) & 8) != 0 )
              {
                CmpDelayDerefKeyControlBlock(*(_QWORD *)(v9 + 104), (__int64)&v154);
                v7 = 0;
                *(_WORD *)(v9 + 8) &= ~8u;
                *(_QWORD *)(v9 + 104) = 0LL;
              }
              else
              {
                v7 = 0;
              }
              v46 = *(_DWORD *)(v36 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v36 + 40);
              v47 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v46;
              HvUnlockHiveFlusherShared(v47);
              v48 = Privileges;
              goto LABEL_68;
            }
            goto LABEL_253;
          }
          LODWORD(Src) = a5;
          NameInListWithStatus = CmpAddValueKeyNew(v39, (size_t)Src, 1, (__int64)&v140 + 4);
          if ( NameInListWithStatus >= 0 )
          {
            v91 = *(_QWORD *)(v9 + 32);
            if ( v38 == -1 )
            {
              v92 = *(_DWORD *)(v9 + 280);
              v131 = HIDWORD(v140);
              NameInListWithStatus = CmpAddValueToListEx(v91, v9 + 280, 1);
              if ( NameInListWithStatus < 0 )
              {
                LOBYTE(v16) = 1;
                v7 = 0;
                goto LABEL_124;
              }
              v93 = v131;
            }
            else
            {
              v93 = HIDWORD(v140);
              v92 = v140;
              v131 = HIDWORD(v140);
              CmpSwapValueInList(v91, SHIDWORD(v140), v140, v9 + 280);
            }
            HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
            v94 = P;
            if ( v38 == -1 )
            {
              v95 = 4;
            }
            else
            {
              *((_DWORD *)P + 22) = v38;
              v95 = 5;
            }
            v94[17] = v95;
            v94[18] = v40;
            v94[23] = v93;
            NameInListWithStatus = CmAddLogForAction((__int64)v94, 1u);
            if ( NameInListWithStatus >= 0 )
            {
              v48 = v136[1];
              v7 = 0;
              LOWORD(v10) = WORD1(v135);
              Privileges = v136[1];
LABEL_68:
              v131 = -1;
              P = 0LL;
              v129[0] = 0;
              _mm_lfence();
              if ( (__int16)v10 >= 2 )
                v49 = (PPRIVILEGE_SET)*((_QWORD *)v48 + (__int16)v10 - 2);
              else
                v49 = v136[(__int16)v10 - 1];
              v50 = v138;
              CmpReportNotifyHelper(
                (unsigned int)&v135,
                *(_QWORD *)&v49[1].Privilege[0].Luid.HighPart,
                v138,
                4,
                (__int64)v151);
              if ( *(_QWORD *)&v49[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                CmpReportNotifyHelper((unsigned int)&v135, CmpMasterHive, v50, 4, (__int64)v151);
              LOBYTE(v16) = 0;
              NameInListWithStatus = 0;
              v51 = v131;
              goto LABEL_73;
            }
            if ( v36 )
            {
              v111 = *(_QWORD *)(v9 + 32);
              if ( (*(_BYTE *)(v111 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v111, &v145);
              else
                HvpReleaseCellPaged(v111, &v145);
              v36 = 0LL;
            }
            HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32), v96, v97, v98);
            v112 = *(_QWORD *)(v9 + 32);
            if ( v38 == -1 )
              CmpRemoveValueFromList(v112, v92, (unsigned int *)(v9 + 280));
            else
              CmpSwapValueInList(v112, v38, v92, v9 + 280);
            HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
            LOBYTE(v16) = 0;
            LOWORD(v10) = WORD1(v135);
            v51 = v131;
            Privileges = v136[1];
LABEL_226:
            v7 = 0;
            goto LABEL_73;
          }
          v51 = HIDWORD(v140);
        }
        else
        {
LABEL_253:
          v51 = v131;
        }
        LOBYTE(v16) = 1;
        goto LABEL_226;
      }
      v69 = 0;
      if ( (v10 & 0x8000u) == 0LL )
      {
        v70 = (char *)Privileges - ((char *)&v135 + 8);
        v71 = (ULONG_PTR *)&v135 + 1;
        do
        {
          if ( v69 >= 2 )
            v72 = (ULONG_PTR *)((char *)v71 + v70 - 16);
          else
            v72 = v71;
          CmpUnlockKcb(*v72);
          ++v69;
          ++v71;
        }
        while ( v69 <= (__int16)v10 );
      }
      v24 = 0;
      if ( (__int16)v10 - 1 < 0 )
      {
LABEL_26:
        v16 = Privileges;
        if ( (__int16)v10 >= 2 )
          v25 = (PPRIVILEGE_SET)*((_QWORD *)Privileges + (__int16)v10 - 2);
        else
          v25 = v136[(__int16)v10 - 1];
        CmpLockKcbExclusive((__int64)v25, (__int64)v29, v27, v28);
        v21 = v127;
        goto LABEL_29;
      }
      v106 = Privileges;
      do
      {
        if ( v24 >= 2 )
          v107 = (PPRIVILEGE_SET)*((_QWORD *)v106 + v24 - 2);
        else
          v107 = v136[v24 - 1];
        CmpLockKcbShared(v107);
        ++v24;
      }
      while ( v24 <= (__int16)v10 - 1 );
    }
    v12 = v147;
    goto LABEL_26;
  }
  v102 = 0;
  if ( (v10 & 0x8000u) == 0LL )
  {
    v103 = (char *)Privileges - ((char *)&v135 + 8);
    v104 = (ULONG_PTR *)&v135 + 1;
    do
    {
      if ( v102 >= 2 )
        v105 = (ULONG_PTR *)((char *)v104 + v103 - 16);
      else
        v105 = v104;
      CmpUnlockKcb(*v105);
      ++v102;
      ++v104;
    }
    while ( v102 <= (__int16)v10 );
    LOBYTE(v16) = 0;
  }
  v53 = 0;
  NameInListWithStatus = CmpPromoteKey((__int64)&v135, 0, 1);
  if ( NameInListWithStatus >= 0 )
  {
    v16 = Privileges;
    v21 = 1;
    v127 = 1;
LABEL_29:
    v14 = v134;
    goto LABEL_30;
  }
LABEL_79:
  v54 = P;
  if ( P )
  {
LABEL_80:
    CmpRundownUnitOfWork((ULONG_PTR)v54);
    ExFreePoolWithTag(v54, 0x77554D43u);
  }
LABEL_81:
  if ( v129[0] )
  {
    v101 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v101 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v101);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( (_BYTE)v16 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  v45 = v53 == 0;
  v55 = Privileges;
  if ( !v45 && (v10 & 0x8000u) == 0LL )
  {
    v56 = (char *)Privileges - ((char *)&v135 + 8);
    v57 = (ULONG_PTR *)&v135 + 1;
    do
    {
      if ( v7 >= 2 )
        v58 = (ULONG_PTR *)((char *)v57 + v56 - 16);
      else
        v58 = v57;
      CmpUnlockKcb(*v58);
      ++v7;
      ++v57;
    }
    while ( v7 <= (__int16)v10 );
  }
  CmpDrainDelayDerefContext((_QWORD **)&v154);
  if ( v128 )
    CmpUnlockRegistry(v59);
  if ( (_QWORD *)v151[0] != v151 )
    CmpSignalDeferredPosts(v151);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  v60 = v150;
  if ( NameInListWithStatus >= 0 && a7 && v150 )
  {
    *(_QWORD *)&v156 = __PAIR64__(a5, v133);
    *((_QWORD *)&v156 + 1) = v146;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v150, 0, (_DWORD)String2, v134, v153, (__int64)&v155, v137);
  }
  if ( *((_QWORD *)&v155 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v155 + 1), 0x34414D43u);
  if ( v60 )
    CmpFreeTransientPoolWithTag(v60, 0x33414D43u);
  if ( v55 )
    CmSiFreeMemory(v55);
  return (unsigned int)NameInListWithStatus;
}
