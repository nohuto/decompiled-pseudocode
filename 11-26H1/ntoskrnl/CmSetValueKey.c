/*
 * XREFs of CmSetValueKey @ 0x1408D53E0
 * Callers:
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x1404D024C (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpLogTransactionAbortedByName @ 0x14077956C (CmpLogTransactionAbortedByName.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpIsValueTombstone @ 0x1408C2C20 (CmpIsValueTombstone.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpRemoveValueFromList @ 0x1408C308C (CmpRemoveValueFromList.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C7DFC (CmpConstructNameFromKcbNameBlocks.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D65E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D6890 (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpAddValueKeyNew @ 0x1408E3B9C (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A41064 (CmpCloneKCBValueListForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x140B6B610 (CmpGetValueForAudit.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
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
  __int16 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // r15
  __int16 v10; // r13
  ULONG_PTR v11; // rsi
  __int64 v12; // rdx
  unsigned __int16 **v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // edi
  struct _PRIVILEGE_SET *v20; // r8
  __int16 v21; // di
  signed __int64 v22; // r15
  char *v23; // r14
  char *v24; // rcx
  char v25; // r14
  int NameInListWithStatus; // edi
  __int16 v27; // r14
  __int64 v28; // rcx
  PPRIVILEGE_SET v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  char v33; // r15
  __int16 i; // ax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdi
  ULONG_PTR v39; // rcx
  __int64 CellFlat; // rax
  __int64 v41; // r14
  ULONG_PTR v42; // rcx
  unsigned int v43; // r12d
  ULONG_PTR v44; // rcx
  int v45; // r15d
  unsigned int v46; // r15d
  bool v47; // sf
  PCUNICODE_STRING v48; // rcx
  unsigned int Length; // eax
  bool v50; // zf
  int v51; // eax
  __int64 v52; // rcx
  PPRIVILEGE_SET v53; // rcx
  __int64 v54; // rbx
  int v55; // edi
  unsigned int v56; // ebx
  __int64 v57; // rcx
  char v58; // r14
  PVOID v59; // rbx
  struct _PRIVILEGE_SET *v60; // r14
  signed __int64 v61; // rsi
  ULONG_PTR *v62; // rbx
  ULONG_PTR *v63; // rcx
  __int64 v64; // rcx
  void *v65; // rbx
  unsigned int v67; // r15d
  wchar_t *Buffer; // rcx
  __int16 v69; // bx
  signed __int64 v70; // r14
  ULONG_PTR *v71; // rdi
  ULONG_PTR *v72; // rcx
  __int64 v73; // r8
  __int16 v74; // di
  signed __int64 v75; // r15
  ULONG_PTR *v76; // r14
  ULONG_PTR *v77; // rcx
  __int16 v78; // di
  signed __int64 v79; // r15
  ULONG_PTR *v80; // r14
  ULONG_PTR *v81; // rcx
  __int16 v82; // r14
  PPRIVILEGE_SET v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  _QWORD *UnitOfWork; // rax
  _QWORD *v89; // rdi
  __int64 v90; // r8
  _QWORD *v91; // r15
  __int64 v92; // rdx
  __int64 v93; // r8
  struct _KLOCK_ENTRIES *v94; // r9
  _DWORD *v95; // rdi
  int v96; // eax
  ULONG_PTR v97; // rcx
  unsigned int v98; // ebx
  int v99; // edi
  _DWORD *v100; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r8
  struct _KLOCK_ENTRIES *v104; // r9
  __int64 v105; // rax
  __int64 v106; // rcx
  ULONG_PTR v107; // rdx
  __int16 v108; // di
  signed __int64 v109; // r15
  ULONG_PTR *v110; // r14
  ULONG_PTR *v111; // rcx
  PPRIVILEGE_SET v112; // rbx
  __int64 v113; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  void *v116; // r15
  __int64 v117; // rcx
  ULONG_PTR v118; // rcx
  ULONG_PTR v119; // rcx
  __int64 CellPaged; // rax
  __int64 v121; // rcx
  bool IsValueTombstone; // di
  __int64 v123; // r9
  unsigned int v124; // ebx
  __int64 v125; // rcx
  __int64 v126; // r8
  int v127; // eax
  __int64 v128; // r8
  unsigned __int16 *v129; // rbx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  size_t v132; // [rsp+30h] [rbp-D0h]
  char v133; // [rsp+42h] [rbp-BEh]
  char v134; // [rsp+43h] [rbp-BDh]
  char v135[4]; // [rsp+44h] [rbp-BCh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-B8h]
  int v137; // [rsp+50h] [rbp-B0h]
  char PreviousMode; // [rsp+54h] [rbp-ACh]
  int v139; // [rsp+58h] [rbp-A8h]
  __int64 v140; // [rsp+60h] [rbp-A0h]
  __int64 v141; // [rsp+68h] [rbp-98h]
  __int128 v142; // [rsp+70h] [rbp-90h] BYREF
  __int128 v143; // [rsp+80h] [rbp-80h]
  BOOL v144; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  unsigned int v146; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v147; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v148; // [rsp+B0h] [rbp-50h] BYREF
  PCUNICODE_STRING String2; // [rsp+B8h] [rbp-48h]
  __int64 v150; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v151; // [rsp+C8h] [rbp-38h] BYREF
  void *v152; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v153; // [rsp+D8h] [rbp-28h] BYREF
  int v154; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v155; // [rsp+E8h] [rbp-18h] BYREF
  void *v156; // [rsp+F0h] [rbp-10h]
  _QWORD v157[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v158; // [rsp+108h] [rbp+8h] BYREF
  __int64 v159; // [rsp+110h] [rbp+10h]
  __int128 v160; // [rsp+118h] [rbp+18h] BYREF
  __int128 v161; // [rsp+128h] [rbp+28h] BYREF
  __int128 v162; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+158h] [rbp+58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+78h] BYREF

  v7 = 0;
  v8 = 0LL;
  v159 = a6;
  v141 = a1;
  v157[1] = v157;
  v152 = a4;
  v157[0] = v157;
  v9 = 0LL;
  v139 = a3;
  v142 = 0LL;
  v10 = -1;
  WORD1(v142) = -1;
  String2 = a2;
  v11 = 0LL;
  v146 = 0;
  v155 = 0LL;
  v151 = 0LL;
  v147 = 0xFFFFFFFF00000000uLL;
  v148 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  P = 0LL;
  v135[0] = 0;
  v154 = 0;
  v160 = 0LL;
  v140 = 0LL;
  v143 = 0LL;
  v158 = 0LL;
  HvpGetCellContextInitialize(&v151);
  *(double *)&v8 = HvpGetCellContextInitialize(&v148);
  CmpInitializeDelayDerefContext(&v160);
  LODWORD(v150) = -1;
  v137 = -1;
  v161 = v8;
  v156 = 0LL;
  v162 = v8;
  v144 = 0;
  *(_OWORD *)&SubjectContext.ClientToken = v8;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)&SubjectContext.PrimaryToken = v8;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned __int8)CmpIsShutdownRundownActive(0xFFFFF78000000014uLL) )
    {
      v33 = 0;
      Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
      v58 = 0;
      NameInListWithStatus = -1073741431;
      v134 = 0;
      goto LABEL_77;
    }
    v16 = *v13;
    v153 = *v13;
    CmpLockRegistry(v13, v12, v14, v15);
    v134 = 1;
    v11 = *(_QWORD *)(v141 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v11, v17) )
    {
      v33 = 0;
      Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
      v58 = 0;
      NameInListWithStatus = -1073741790;
      goto LABEL_77;
    }
    v19 = *(__int16 *)(v11 + 66);
    v20 = 0LL;
    Privileges = 0LL;
    if ( v19 >= 2 )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL);
      v20 = Privileges;
      if ( !Privileges )
      {
        v33 = 0;
        Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
        v58 = 0;
        NameInListWithStatus = -1073741670;
        goto LABEL_77;
      }
      v18 = v141;
    }
    LOWORD(v142) = v19;
    *((_QWORD *)&v143 + 1) = v20;
    v10 = *(_WORD *)(v11 + 66);
    WORD1(v142) = v10;
    if ( v10 )
    {
      v105 = *(_QWORD *)(v11 + 192);
      if ( v105 )
      {
        do
        {
          v106 = *(_QWORD *)(v105 + 16);
          if ( v10 >= 2 )
          {
            *((_QWORD *)v20 + v10 - 2) = v106;
          }
          else
          {
            *((_QWORD *)&v142 + v10 + 1) = v106;
            v20 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v143 + 1);
          }
          v105 = *(_QWORD *)(v105 + 24);
          --v10;
        }
        while ( v105 );
        v10 = WORD1(v142);
        Privileges = v20;
      }
    }
    else
    {
      *((_QWORD *)&v142 + 1) = v11;
    }
    if ( *(_QWORD *)(v18 + 56) || *(_QWORD *)(v18 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v142);
      v18 = v141;
      v25 = 1;
    }
    else
    {
      v21 = 0;
      if ( v10 >= 0 )
      {
        v22 = (char *)v20 - ((char *)&v142 + 8);
        v23 = (char *)&v142 + 8;
        do
        {
          if ( v21 >= 2 )
            v24 = &v23[v22 - 16];
          else
            v24 = v23;
          CmpLockKcbShared(*(_QWORD *)v24);
          ++v21;
          v23 += 8;
        }
        while ( v21 <= v10 );
        v9 = v140;
        v18 = v141;
      }
      v25 = 0;
    }
    v133 = v25;
    if ( *(_QWORD *)(v18 + 56) || *(_QWORD *)(v18 + 64) )
      break;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v18, v9) )
        goto LABEL_215;
      if ( *(_BYTE *)(v11 + 65) == 1 )
      {
        NameInListWithStatus = -1073741790;
        goto LABEL_206;
      }
      if ( v9 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v30);
        P = UnitOfWork;
        v89 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v58 = 1;
          NameInListWithStatus = -1073741670;
          v33 = 0;
          goto LABEL_79;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v11);
        NameInListWithStatus = CmpTransEnlistUowInCmTrans(v89, v9);
        if ( NameInListWithStatus < 0 )
          goto LABEL_154;
        v91 = P;
        if ( !CmpLockIXLockIntent((unsigned int *)(v11 + 248), (__int64)P, v90) )
        {
LABEL_153:
          NameInListWithStatus = -1072103423;
LABEL_154:
          v33 = 0;
LABEL_155:
          v58 = 1;
          v59 = P;
          goto LABEL_78;
        }
        v95 = (_DWORD *)(v11 + 264);
        v96 = *(_DWORD *)(v11 + 264);
        if ( v96 )
        {
          if ( v96 >= 0 )
          {
            if ( v96 != 1 || !CmEqualTrans(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 56LL), v91[7]) )
              goto LABEL_153;
            *v95 |= 0x80000000;
          }
          else if ( !CmEqualTrans(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 56LL), v91[7]) )
          {
            goto LABEL_153;
          }
        }
        else
        {
          *v95 = -2147483647;
          *(_QWORD *)(v11 + 272) = v91;
          v91[3] = v95;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v11 + 32), v92, v93, v94);
        v33 = 1;
        NameInListWithStatus = CmpCloneKCBValueListForTrans(v11, v140, v135);
        if ( NameInListWithStatus < 0 )
          goto LABEL_155;
        HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
        goto LABEL_34;
      }
      if ( *(int *)(v11 + 248) < 0 )
      {
        NameInListWithStatus = CmpSnapshotTxOwnerArray(v11 + 248, &v146, &v155);
        if ( NameInListWithStatus < 0 )
          goto LABEL_206;
        v153 = 0LL;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, 0LL);
        v67 = v146;
        if ( v146
          && (unsigned int)dword_140E09EE8 > 4
          && (qword_140E09EF8 & 1) != 0
          && (qword_140E09F00 & 1) == qword_140E09F00 )
        {
          v127 = CmpConstructNameFromKcbNameBlocks(v11, (__int64 *)&v153);
          v129 = v153;
          if ( v127 >= 0 )
            CmpLogTransactionAbortedByName(v153, 1, v128, v67);
          if ( v129 )
            CmpFreeTransientPoolWithTag(v129, 0x624E4D43u);
        }
        Buffer = DestinationString.Buffer;
        if ( DestinationString.Buffer )
          CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
        v69 = 0;
        if ( v10 >= 0 )
        {
          v70 = (char *)Privileges - ((char *)&v142 + 8);
          v71 = (ULONG_PTR *)&v142 + 1;
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
          while ( v69 <= v10 );
        }
        if ( Privileges )
          CmSiFreeMemory(Privileges);
        v142 = 0LL;
        WORD1(v142) = -1;
        v10 = -1;
        v143 = 0LL;
        CmpUnlockRegistry(Buffer);
        v134 = 0;
        NameInListWithStatus = CmpRollbackTransactionArray(v67, v155, v73, &v154);
        if ( NameInListWithStatus >= 0 )
        {
          v9 = v140;
          goto LABEL_2;
        }
        v33 = 0;
        Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
        v58 = 0;
        goto LABEL_77;
      }
      if ( *(_DWORD *)(v11 + 264) )
        break;
LABEL_34:
      v33 = 0;
      for ( i = v10; i >= 0; --i )
      {
        if ( i >= 2 )
        {
          v29 = Privileges;
          v35 = *((_QWORD *)Privileges + i - 2);
        }
        else
        {
          v35 = *((_QWORD *)&v142 + i + 1);
        }
        if ( *(_DWORD *)(v35 + 40) != -1 )
        {
          if ( (*(_DWORD *)(v35 + 184) & 0x100000) != 0
            && (v139 != 6
             || (a5 & 1) != 0
             || (unsigned int)a5 > 0xFFFF
             || !String2
             || !RtlEqualUnicodeString((PCUNICODE_STRING)&PspSiloMonitorLock.152, String2, 1u)
             || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext)) )
          {
            NameInListWithStatus = -1073741790;
            goto LABEL_76;
          }
          break;
        }
      }
      if ( *(_DWORD *)(v11 + 40) == -1 )
      {
        v108 = 0;
        if ( v10 >= 0 )
        {
          v109 = (char *)Privileges - ((char *)&v142 + 8);
          v110 = (ULONG_PTR *)&v142 + 1;
          do
          {
            if ( v108 >= 2 )
              v111 = (ULONG_PTR *)((char *)v110 + v109 - 16);
            else
              v111 = v110;
            CmpUnlockKcb(*v111);
            ++v108;
            ++v110;
          }
          while ( v108 <= v10 );
          v33 = 0;
        }
        v58 = 0;
        NameInListWithStatus = CmpPromoteKey((__int64)&v142, 0, 1);
        if ( NameInListWithStatus >= 0 )
        {
          v9 = v140;
          v25 = 1;
          v133 = 1;
          goto LABEL_28;
        }
        goto LABEL_77;
      }
      if ( v25 )
        goto LABEL_47;
      v36 = CmpCompareNewValueDataAgainstKCBCache(v11, String2, (unsigned int)v139, v152, a5);
      if ( v36 == 1 )
      {
        v78 = 0;
        if ( v10 >= 0 )
        {
          v79 = (char *)Privileges - ((char *)&v142 + 8);
          v80 = (ULONG_PTR *)&v142 + 1;
          do
          {
            if ( v78 >= 2 )
              v81 = (ULONG_PTR *)((char *)v80 + v79 - 16);
            else
              v81 = v80;
            CmpUnlockKcb(*v81);
            ++v78;
            ++v80;
          }
          while ( v78 <= v10 );
        }
        v82 = 0;
        if ( v10 - 1 < 0 )
          goto LABEL_25;
        v83 = Privileges;
        do
        {
          if ( v82 >= 2 )
            v84 = *((_QWORD *)v83 + v82 - 2);
          else
            v84 = *((_QWORD *)&v142 + v82 + 1);
          CmpLockKcbShared(v84);
          ++v82;
        }
        while ( v82 <= v10 - 1 );
        goto LABEL_203;
      }
      if ( !v36 )
      {
        NameInListWithStatus = 0;
        goto LABEL_76;
      }
      v133 = 1;
      if ( *(struct _KTHREAD **)(v11 + 56) == KeGetCurrentThread() )
        goto LABEL_47;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v11 + 56) = KeGetCurrentThread();
LABEL_47:
        v37 = *(_QWORD *)(v11 + 32);
        ++*(_QWORD *)(v11 + 304);
        HvLockHiveFlusherShared(v37, (__int64)v29, v31, v32);
        v38 = v140;
        v33 = 1;
        if ( !v140 )
        {
          NameInListWithStatus = HvpMarkCellDirty(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40));
          if ( NameInListWithStatus < 0 )
            goto LABEL_76;
          v38 = v140;
        }
        v39 = *(_QWORD *)(v11 + 32);
        if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v39, *(_DWORD *)(v11 + 40), (unsigned int *)&v151);
        else
          CellFlat = HvpGetCellPaged(v39);
        v41 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v11 + 32));
        v42 = *(_QWORD *)(v11 + 32);
        if ( v38 )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(v42, (__int64)&v147, (__int64)&v150);
          if ( (int)(NameInListWithStatus + 0x80000000) < 0 )
            goto LABEL_54;
LABEL_121:
          if ( NameInListWithStatus != -1073741772 )
          {
LABEL_122:
            v56 = v137;
LABEL_71:
            if ( v41 )
            {
              v57 = *(_QWORD *)(v11 + 32);
              if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v57, &v151);
              else
                HvpReleaseCellPaged(v57, &v151);
            }
            if ( v56 != -1 )
              CmpFreeValue(*(_QWORD *)(v11 + 32), v56);
            goto LABEL_76;
          }
        }
        else
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(v42, (__int64)&v147, (__int64)&v150);
          if ( (int)(NameInListWithStatus + 0x80000000) >= 0 )
            goto LABEL_121;
        }
LABEL_54:
        v43 = v150;
        if ( !a7 )
          goto LABEL_55;
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(&v142, v140, 0LL);
        Pool = (void *)CmpAllocatePool(0x100uLL);
        v116 = Pool;
        if ( !Pool )
        {
          NameInListWithStatus = -1073741670;
          goto LABEL_252;
        }
        memmove(
          Pool,
          (const void *)(SecurityCacheEntryForKcbStack + 32),
          *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
        v156 = v116;
        if ( v43 == -1 )
        {
          v144 = 0;
          goto LABEL_55;
        }
        v119 = *(_QWORD *)(v11 + 32);
        if ( (*(_BYTE *)(v119 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v119, v43, (unsigned int *)&v148);
        else
          CellPaged = HvpGetCellPaged(v119);
        IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v11 + 32), CellPaged);
        v50 = (*(_BYTE *)(v121 + 140) & 1) == 0;
        v144 = !IsValueTombstone;
        if ( v50 )
          HvpReleaseCellPaged(v121, &v148);
        else
          HvpReleaseCellFlat(v121, &v148);
        if ( IsValueTombstone
          || (NameInListWithStatus = CmpGetValueForAudit(*(_QWORD *)(v11 + 32)), NameInListWithStatus >= 0) )
        {
LABEL_55:
          v44 = *(_QWORD *)(v11 + 32);
          v45 = *(_DWORD *)(v11 + 40) >> 31;
          if ( !v140 )
          {
            if ( v43 == -1 )
            {
              v46 = a5;
              LODWORD(v132) = a5;
              NameInListWithStatus = CmpSetValueKeyNew(v44, v139, v152, v132, *(_DWORD *)(v11 + 40) >> 31);
              v47 = NameInListWithStatus < 0;
            }
            else
            {
              if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
                v85 = HvpGetCellFlat(v44, v43, (unsigned int *)&v148);
              else
                v85 = HvpGetCellPaged(v44);
              v46 = a5;
              LODWORD(Size) = a5;
              v86 = CmpSetValueKeyExisting(*(_QWORD *)(v11 + 32), v43, v85, v139, v152, Size);
              v87 = *(_QWORD *)(v11 + 32);
              NameInListWithStatus = v86;
              if ( (*(_BYTE *)(v87 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v87, &v148);
              else
                HvpReleaseCellPaged(v87, &v148);
              v47 = NameInListWithStatus < 0;
            }
            if ( !v47 )
            {
              v48 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v41 + 60) < Length )
              {
                *(_DWORD *)(v41 + 60) = Length;
                *(_WORD *)(v11 + 178) = v48->Length;
              }
              if ( *(_DWORD *)(v41 + 64) < v46 )
              {
                *(_DWORD *)(v41 + 64) = v46;
                *(_DWORD *)(v11 + 180) = v46;
              }
              *(_QWORD *)(v41 + 4) = v16;
              v50 = (*(_DWORD *)(v11 + 184) & 0x400000) == 0;
              *(_QWORD *)(v11 + 168) = v16;
              if ( v50 && (*(_DWORD *)(v11 + 8) & 8) != 0 )
              {
                CmpDelayDerefKeyControlBlock(*(_QWORD *)(v11 + 104), (__int64)&v160);
                v7 = 0;
                *(_WORD *)(v11 + 8) &= ~8u;
                *(_QWORD *)(v11 + 104) = 0LL;
              }
              else
              {
                v7 = 0;
              }
              v51 = *(_DWORD *)(v41 + 36);
              *(_DWORD *)(v11 + 100) = *(_DWORD *)(v41 + 40);
              v52 = *(_QWORD *)(v11 + 32);
              *(_DWORD *)(v11 + 96) = v51;
              HvUnlockHiveFlusherShared(v52);
              v53 = Privileges;
              goto LABEL_66;
            }
            goto LABEL_252;
          }
          LODWORD(Src) = a5;
          NameInListWithStatus = CmpAddValueKeyNew(v44, (size_t)Src, 1, (__int64)&v147 + 4);
          if ( NameInListWithStatus >= 0 )
          {
            v97 = *(_QWORD *)(v11 + 32);
            if ( v43 == -1 )
            {
              v98 = *(_DWORD *)(v11 + 280);
              v137 = HIDWORD(v147);
              NameInListWithStatus = CmpAddValueToListEx(v97, v11 + 280, 1);
              if ( NameInListWithStatus < 0 )
              {
                v33 = 1;
                v7 = 0;
                goto LABEL_122;
              }
              v99 = v137;
            }
            else
            {
              v99 = HIDWORD(v147);
              v98 = v147;
              v137 = HIDWORD(v147);
              CmpSwapValueInList(v97, SHIDWORD(v147), v147, v11 + 280);
            }
            HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
            v100 = P;
            if ( v43 == -1 )
            {
              v101 = 4;
            }
            else
            {
              *((_DWORD *)P + 22) = v43;
              v101 = 5;
            }
            v100[17] = v101;
            v100[18] = v45;
            v100[23] = v99;
            NameInListWithStatus = CmAddLogForAction((__int64)v100, 1u);
            if ( NameInListWithStatus >= 0 )
            {
              v53 = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
              v7 = 0;
              v10 = WORD1(v142);
              Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
LABEL_66:
              v137 = -1;
              P = 0LL;
              v135[0] = 0;
              _mm_lfence();
              if ( v10 >= 2 )
                v54 = *((_QWORD *)v53 + v10 - 2);
              else
                v54 = *((_QWORD *)&v142 + v10 + 1);
              v55 = v140;
              CmpReportNotifyHelper((unsigned int)&v142, *(_QWORD *)(v54 + 32), v140, 4, (__int64)v157);
              if ( *(_QWORD *)(v54 + 32) != CmpMasterHive )
                CmpReportNotifyHelper((unsigned int)&v142, CmpMasterHive, v55, 4, (__int64)v157);
              v33 = 0;
              NameInListWithStatus = 0;
              v56 = v137;
              goto LABEL_71;
            }
            if ( v41 )
            {
              v117 = *(_QWORD *)(v11 + 32);
              if ( (*(_BYTE *)(v117 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v117, &v151);
              else
                HvpReleaseCellPaged(v117, &v151);
              v41 = 0LL;
            }
            HvLockHiveFlusherShared(*(_QWORD *)(v11 + 32), v102, v103, v104);
            v118 = *(_QWORD *)(v11 + 32);
            if ( v43 == -1 )
              CmpRemoveValueFromList(v118, v98, (unsigned int *)(v11 + 280));
            else
              CmpSwapValueInList(v118, v43, v98, v11 + 280);
            HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
            v33 = 0;
            v10 = WORD1(v142);
            v56 = v137;
            Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
LABEL_225:
            v7 = 0;
            goto LABEL_71;
          }
          v56 = HIDWORD(v147);
        }
        else
        {
LABEL_252:
          v56 = v137;
        }
        v33 = 1;
        goto LABEL_225;
      }
      v74 = 0;
      if ( v10 >= 0 )
      {
        v75 = (char *)Privileges - ((char *)&v142 + 8);
        v76 = (ULONG_PTR *)&v142 + 1;
        do
        {
          if ( v74 >= 2 )
            v77 = (ULONG_PTR *)((char *)v76 + v75 - 16);
          else
            v77 = v76;
          CmpUnlockKcb(*v77);
          ++v74;
          ++v76;
        }
        while ( v74 <= v10 );
      }
      v27 = 0;
      if ( v10 - 1 >= 0 )
      {
        v112 = Privileges;
        do
        {
          if ( v27 >= 2 )
            v113 = *((_QWORD *)v112 + v27 - 2);
          else
            v113 = *((_QWORD *)&v142 + v27 + 1);
          CmpLockKcbShared(v113);
          ++v27;
        }
        while ( v27 <= v10 - 1 );
LABEL_203:
        v16 = v153;
      }
LABEL_25:
      if ( v10 >= 2 )
        v28 = *((_QWORD *)Privileges + v10 - 2);
      else
        v28 = *((_QWORD *)&v142 + v10 + 1);
      CmpLockKcbExclusive(v28, (__int64)v29, v31, v32);
      v25 = v133;
      v9 = v140;
LABEL_28:
      v18 = v141;
    }
    NameInListWithStatus = CmpSnapshotTxOwnerArray(v11 + 264, &v146, &v155);
    if ( NameInListWithStatus < 0 )
      goto LABEL_206;
    v124 = v146;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 1, v123, v146);
    CmpUnlockKcbStack((__int64)&v142);
    v58 = 0;
    if ( Privileges )
      CmSiFreeMemory(Privileges);
    v10 = -1;
    v142 = 0LL;
    WORD1(v142) = -1;
    v143 = 0LL;
    CmpUnlockRegistry(v125);
    v134 = 0;
    NameInListWithStatus = CmpRollbackTransactionArray(v124, v155, v126, &v154);
    if ( NameInListWithStatus < 0 )
    {
      v33 = 0;
      Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v143 + 1);
      goto LABEL_77;
    }
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v18, 0LL) )
  {
LABEL_215:
    v33 = 0;
    NameInListWithStatus = -1073740763;
    if ( (*(_BYTE *)(v141 + 48) & 1) == 0 )
      NameInListWithStatus = -1073741444;
  }
  else
  {
    NameInListWithStatus = CmpTransSearchAddTransFromKeyBody(v141, &v158);
    if ( NameInListWithStatus < 0 )
    {
LABEL_206:
      v33 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 160LL) & 2) == 0 )
      {
        v9 = v158;
        v140 = v158;
        goto LABEL_28;
      }
      NameInListWithStatus = -1072103423;
      v33 = 0;
    }
  }
LABEL_76:
  v58 = 1;
LABEL_77:
  v59 = P;
  if ( P )
  {
LABEL_78:
    CmpRundownUnitOfWork((ULONG_PTR)v59);
    ExFreePoolWithTag(v59, 0x77554D43u);
  }
LABEL_79:
  if ( v135[0] )
  {
    v107 = *(unsigned int *)(v11 + 284);
    if ( (_DWORD)v107 != -1 )
      HvFreeCell(*(_QWORD *)(v11 + 32), v107);
    *(_DWORD *)(v11 + 284) = -1;
    *(_DWORD *)(v11 + 280) = 0;
    *(_QWORD *)(v11 + 288) = 0LL;
  }
  if ( v33 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
  v50 = v58 == 0;
  v60 = Privileges;
  if ( !v50 && v10 >= 0 )
  {
    v61 = (char *)Privileges - ((char *)&v142 + 8);
    v62 = (ULONG_PTR *)&v142 + 1;
    do
    {
      if ( v7 >= 2 )
        v63 = (ULONG_PTR *)((char *)v62 + v61 - 16);
      else
        v63 = v62;
      CmpUnlockKcb(*v63);
      ++v7;
      ++v62;
    }
    while ( v7 <= v10 );
  }
  CmpDrainDelayDerefContext((_QWORD **)&v160);
  if ( v134 )
    CmpUnlockRegistry(v64);
  if ( (_QWORD *)v157[0] != v157 )
    CmpSignalDeferredPosts(v157);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  v65 = v156;
  if ( NameInListWithStatus >= 0 && a7 && v156 )
  {
    *(_QWORD *)&v162 = __PAIR64__(a5, v139);
    *((_QWORD *)&v162 + 1) = v152;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v156, 0, (_DWORD)String2, v141, v159, (__int64)&v161, v144);
  }
  if ( *((_QWORD *)&v161 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v161 + 1), 0x34414D43u);
  if ( v65 )
    CmpFreeTransientPoolWithTag(v65, 0x33414D43u);
  if ( v60 )
    CmSiFreeMemory(v60);
  return (unsigned int)NameInListWithStatus;
}
