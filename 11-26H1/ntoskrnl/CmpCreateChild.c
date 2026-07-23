/*
 * XREFs of CmpCreateChild @ 0x1408E5A60
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpFreeSecurityDescriptor @ 0x1408C4C3C (CmpFreeSecurityDescriptor.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D6890 (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyForKcbStack @ 0x1408D69AC (CmpReportNotifyForKcbStack.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetEffectiveCellType @ 0x1408E6CCC (CmpGetEffectiveCellType.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 CmpCreateChild(__int64 a1, ...)
{
  __int64 v1; // rsi
  char *v2; // r13
  unsigned int v3; // r10d
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r10d
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  ULONG_PTR v10; // r15
  ULONG_PTR v11; // r14
  char v12; // dl
  __int64 v13; // r10
  int v14; // eax
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  __int64 v21; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v23; // r8d
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r13d
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // ecx
  unsigned __int16 v34; // ax
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  int SecurityDescriptorNode; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  ULONG_PTR v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 Length; // rdx
  unsigned int v47; // eax
  char v48; // cl
  PVOID v49; // r15
  PVOID v50; // r15
  PVOID v51; // r15
  __int64 v52; // rcx
  __int64 v54; // rdx
  __int64 v55; // rsi
  void *v56; // rcx
  int v57; // edx
  _BYTE *v58; // rcx
  int v59; // edx
  int v60; // r8d
  _QWORD *UnitOfWork; // rax
  int v62; // eax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  int v65; // eax
  __int64 v66; // r8
  _QWORD *v67; // rbx
  int v68; // eax
  _DWORD *v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rdx
  char *CellFlat; // rax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  struct _KLOCK_ENTRIES *v77; // r9
  int v78; // eax
  UNICODE_STRING *v79; // rbx
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 CellPaged; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned int v85; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v87; // eax
  int v88; // eax
  __int64 v89; // r9
  int v90; // eax
  __int64 v91; // r9
  int v92; // eax
  __int64 v93; // r9
  int v94; // eax
  __int64 v95; // r9
  char v96; // [rsp+50h] [rbp-E8h]
  char v97; // [rsp+51h] [rbp-E7h]
  char v98; // [rsp+52h] [rbp-E6h]
  char v99; // [rsp+54h] [rbp-E4h]
  char v100; // [rsp+55h] [rbp-E3h]
  __int16 v101; // [rsp+5Ah] [rbp-DEh]
  unsigned int BugCheckParameter3; // [rsp+5Ch] [rbp-DCh]
  unsigned int BugCheckParameter3_4; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v104[3]; // [rsp+64h] [rbp-D4h] BYREF
  size_t Size; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v107; // [rsp+80h] [rbp-B8h]
  PVOID v108; // [rsp+88h] [rbp-B0h]
  __int64 v109; // [rsp+90h] [rbp-A8h]
  void *v110; // [rsp+98h] [rbp-A0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-90h] BYREF
  void *v113; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-80h] BYREF
  unsigned int v115; // [rsp+C0h] [rbp-78h]
  __int64 v116; // [rsp+C8h] [rbp-70h]
  _QWORD *v117; // [rsp+D0h] [rbp-68h]
  _QWORD *v118; // [rsp+D8h] [rbp-60h]
  ULONG_PTR v119; // [rsp+E0h] [rbp-58h]
  ULONG_PTR v120; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v121; // [rsp+F0h] [rbp-48h]
  __int64 v123; // [rsp+148h] [rbp+10h] BYREF
  va_list va; // [rsp+148h] [rbp+10h]
  __int64 v125; // [rsp+150h] [rbp+18h]
  UNICODE_STRING *v126; // [rsp+158h] [rbp+20h]
  __int64 v127; // [rsp+160h] [rbp+28h]
  __int64 v128; // [rsp+168h] [rbp+30h]
  __int64 v129; // [rsp+170h] [rbp+38h]
  __int64 v130; // [rsp+178h] [rbp+40h]
  __int64 v131; // [rsp+180h] [rbp+48h]
  va_list va1; // [rsp+188h] [rbp+50h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v123 = va_arg(va1, _QWORD);
  v125 = va_arg(va1, _QWORD);
  v126 = va_arg(va1, UNICODE_STRING *);
  v127 = va_arg(va1, _QWORD);
  v128 = va_arg(va1, _QWORD);
  v129 = va_arg(va1, _QWORD);
  v130 = va_arg(va1, _QWORD);
  v131 = va_arg(va1, _QWORD);
  v1 = v127;
  v114 = 0LL;
  v106 = 0LL;
  v112 = 0LL;
  v100 = 0;
  v97 = 0;
  v99 = 0;
  v2 = 0LL;
  v110 = 0LL;
  v104[0] = -1;
  HvpGetCellContextInitialize(&v114);
  v113 = 0LL;
  BugCheckParameter3 = v3;
  BugCheckParameter3_4 = v3;
  HvpGetCellContextInitialize(&v106);
  v109 = 0LL;
  HvpGetCellContextInitialize(&v112);
  v96 = 0;
  P = 0LL;
  LODWORD(Size) = v6;
  v108 = 0LL;
  v117 = 0LL;
  v107 = 0LL;
  v118 = 0LL;
  v98 = 0;
  v7 = *(__int16 *)(v5 + 2);
  _mm_lfence();
  if ( (__int16)v7 >= 2 )
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v7 - 16);
  else
    v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
  v119 = v8;
  *(_QWORD *)&v104[1] = v8;
  v9 = *(__int16 *)(v4 + 2);
  _mm_lfence();
  if ( (__int16)v9 >= 2 )
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v9 - 16);
  else
    v10 = *(_QWORD *)(v4 + 8 * v9 + 8);
  v120 = v10;
  v11 = *(_QWORD *)(v10 + 32);
  v121 = v11;
  if ( v131 && (*(_DWORD *)(v11 + 160) & 2) != 0 )
  {
    v60 = -1072103423;
    v25 = -1072103423;
    v59 = 262400;
    goto LABEL_120;
  }
  if ( (v129 & 0xFFFFFFFC) != 0 )
  {
    v25 = -1073741811;
    v60 = -1073741811;
    v59 = 262528;
    goto LABEL_120;
  }
  if ( (v129 & 1) != 0 || (*(_DWORD *)(v11 + 4120) & 0x20) != 0 )
  {
    LOBYTE(v4) = 1;
    v99 = 1;
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  if ( (*(_DWORD *)(v8 + 8) & 0x80u) != 0 )
  {
    v59 = 262656;
    goto LABEL_118;
  }
  if ( (unsigned __int8)CmpIsKcbImmutable(v8, v4) )
  {
    v59 = 262912;
    goto LABEL_118;
  }
  if ( *(_BYTE *)(v8 + 65) == 1 )
  {
    v59 = 263168;
    goto LABEL_118;
  }
  if ( !CmpVEEnabled || (v14 = 1, (*(_DWORD *)(v8 + 184) & 0x1000000) == 0) )
    v14 = 0;
  v15 = v128 | 0x100;
  if ( !v14 )
    v15 = v128;
  v101 = v15;
  if ( (*(_DWORD *)(v8 + 184) & 0x2000000) != 0 )
    v101 = v15 | 0x200;
  if ( v12 && *(_QWORD *)(v125 + 64) )
  {
    v59 = 263424;
LABEL_118:
    v60 = -1073741790;
LABEL_119:
    v25 = v60;
    goto LABEL_120;
  }
  v115 = *(_DWORD *)(v1 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(v8, v13) == 1 && !v20 )
  {
    v25 = -1073741439;
    v60 = -1073741439;
    v59 = 263680;
    goto LABEL_120;
  }
  if ( (*(_DWORD *)(v1 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(v1 + 168));
    *(_DWORD *)(v1 + 160) |= 1u;
    v19 = v131;
  }
  if ( (v101 & 2) == 0 )
  {
    if ( v99 )
    {
      P = (PVOID)(CmpGetSecurityCacheEntryForKcbStack(a1, v19, 0LL) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 184) & 0x2000000) == 0
        || (CurrentThread = KeGetCurrentThread(),
            LOBYTE(CurrentThread) = CurrentThread->PreviousMode,
            (unsigned __int8)CmpIsSystemEntity(CurrentThread)) )
      {
        v21 = *(_QWORD *)(v125 + 64);
      }
      else
      {
        v21 = 0LL;
      }
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, v131, 0LL);
      v23 = 0;
      if ( SecurityCacheEntryForKcbStack != -32 )
      {
        v58 = (_BYTE *)(v21 + 2);
        if ( (!v21 || (*v58 & 4) == 0) && _bittest16((const signed __int16 *)(SecurityCacheEntryForKcbStack + 34), 0xAu) )
          v23 = 1;
        if ( (!v21 || (*v58 & 0x10) == 0)
          && _bittest16((const signed __int16 *)(SecurityCacheEntryForKcbStack + 34), 0xBu) )
        {
          v23 |= 2u;
        }
      }
      v24 = RtlpNewSecurityObject(
              (int)SecurityCacheEntryForKcbStack + 32,
              v21,
              (unsigned int)&P,
              0,
              0,
              1,
              v23,
              v125 + 32,
              (__int64)CmKeyObjectType + 76,
              0LL);
      v25 = v24;
      if ( v24 < 0 )
      {
        v60 = v24;
        v59 = 264192;
        goto LABEL_120;
      }
      v8 = *(_QWORD *)&v104[1];
    }
  }
  v26 = v131;
  if ( !v131 )
  {
LABEL_32:
    v27 = v115;
    if ( v26 )
      v27 = 1LL;
    LODWORD(v123) = v27;
    v28 = *(_DWORD *)(v10 + 40);
    if ( v28 != -1 )
    {
      if ( (_DWORD)v27 != v28 >> 31 )
        CmpLogUnsupportedOperation(2LL);
      LODWORD(v131) = *(_DWORD *)(v10 + 40) >> 31;
      if ( !(_BYTE)v130 )
      {
        HvLockHiveFlusherShared(v11, v16, v17, v18);
        v97 = 1;
      }
      v71 = *(unsigned int *)(v10 + 40);
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        CellFlat = (char *)HvpGetCellFlat(v11, v71, (unsigned int *)&v114);
      else
        CellFlat = (char *)HvpGetCellPaged(v11, v71);
      v2 = CellFlat;
      v110 = CellFlat;
      if ( (unsigned __int16)CmpNameSize(&v126->Length) != *((_WORD *)CellFlat + 36) )
      {
        CmpLogUnsupportedOperation(1LL);
        v25 = -1073741822;
        v60 = -1073741822;
        v59 = 264448;
        goto LABEL_120;
      }
      v73 = CmpMarkKeyDirty(v11, *(_DWORD *)(v10 + 40), 0);
      v25 = v73;
      if ( v73 < 0 )
      {
        v60 = v73;
        v59 = 264704;
        goto LABEL_120;
      }
      v74 = HvpMarkCellDirty(v11, *(_DWORD *)(*(_QWORD *)&v104[1] + 40LL), 0);
      v25 = v74;
      if ( v74 < 0 )
      {
        v60 = v74;
        v59 = 264960;
        goto LABEL_120;
      }
      v78 = *(unsigned __int16 *)(v1 + 4);
      if ( (_WORD)v78 )
      {
        v87 = HvAllocateCell(v11, v78, v131, &BugCheckParameter3_4, &v113, (__int64)&v106);
        v25 = v87;
        if ( v87 < 0 )
        {
          CmpRecordParseFailure(v1, 265216, v87);
          BugCheckParameter3 = BugCheckParameter3_4;
          goto LABEL_121;
        }
        memmove(v113, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
        if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v11, (__int64)&v106);
        else
          HvpReleaseCellPaged(v11, (unsigned int *)&v106);
        v113 = 0LL;
        BugCheckParameter3 = BugCheckParameter3_4;
      }
      CmLockHiveSecurityExclusive(v11, v75, v76, v77);
      v96 = 1;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v11,
                                 *(_DWORD *)(v10 + 40),
                                 (__int64)v2,
                                 *(_DWORD *)(v10 + 40) >> 31,
                                 P,
                                 1,
                                 (unsigned int *)&Size);
      v25 = SecurityDescriptorNode;
      if ( SecurityDescriptorNode >= 0 )
      {
        CmpFreeSecurityDescriptor(v11, *(_DWORD *)(v10 + 40));
        *((_DWORD *)v2 + 11) = Size;
        CmUnlockHiveSecurity(v11);
        *((_DWORD *)v2 + 12) = BugCheckParameter3;
        *((_WORD *)v2 + 37) = *(_WORD *)(v1 + 4);
        BugCheckParameter3 = -1;
        v79 = v126;
        CmpCopyName(v2 + 76, (const void **)v126);
        v2[13] |= 3u;
        *((_WORD *)v2 + 1) = v101;
        if ( *((_WORD *)v2 + 36) < v79->Length )
          *((_WORD *)v2 + 1) = v101 | 0x20;
        v80 = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v2 + 4) = MEMORY[0xFFFFF78000000014];
        ++*(_QWORD *)(v10 + 304);
        CmpRebuildKcbCacheFromNode(v10);
        v81 = *(unsigned int *)(*(_QWORD *)&v104[1] + 40LL);
        if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v11, v81, (unsigned int *)&v112);
        else
          CellPaged = HvpGetCellPaged(v11, v81);
        v83 = CellPaged;
        v109 = CellPaged;
        *(_QWORD *)(CellPaged + 4) = v80;
        v84 = *(_QWORD *)&v104[1];
        *(_QWORD *)(*(_QWORD *)&v104[1] + 168LL) = v80;
        ++*(_QWORD *)(v84 + 304);
        v85 = *((unsigned __int16 *)v2 + 37);
        if ( *(_DWORD *)(v83 + 56) < v85 )
          *(_DWORD *)(v83 + 56) = v85;
        if ( v97 )
        {
          HvUnlockHiveFlusherShared(v11);
          v97 = 0;
        }
        CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
        v25 = 0;
        goto LABEL_121;
      }
      v57 = 265728;
      goto LABEL_107;
    }
    if ( !(_BYTE)v130 )
    {
      HvLockHiveFlusherShared(v11, v16, v17, v18);
      v97 = 1;
    }
    if ( v131 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v27);
      v108 = UnitOfWork;
      v117 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v60 = -1073741670;
        v59 = 265984;
        goto LABEL_119;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v8);
      v62 = CmpTransEnlistUowInCmTrans(v108, v131);
      v25 = v62;
      if ( v62 < 0 )
      {
        v60 = v62;
        v59 = 266240;
        goto LABEL_120;
      }
      v64 = (_QWORD *)CmpAllocateUnitOfWork(v63);
      v107 = v64;
      v118 = v64;
      if ( !v64 )
      {
        v60 = -1073741670;
        v59 = 266496;
        goto LABEL_119;
      }
      CmpTransEnlistUowInKcb(v64, v10);
      v65 = CmpTransEnlistUowInCmTrans(v107, v131);
      v25 = v65;
      if ( v65 < 0 )
      {
        v60 = v65;
        v59 = 266752;
        goto LABEL_120;
      }
      if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)&v104[1] + 248LL), (__int64)v108, v66) )
      {
        v60 = -1072103423;
        v59 = 267008;
        goto LABEL_119;
      }
      v67 = v107;
      if ( !CmpLockIXLockExclusive(v10 + 248, v107, 0LL) )
      {
        v60 = -1072103423;
        v59 = 267264;
        goto LABEL_119;
      }
      if ( !CmpLockIXLockExclusive(v10 + 264, v67, 1LL) )
      {
        v60 = -1072103423;
        v59 = 267520;
        goto LABEL_119;
      }
    }
    else
    {
      if ( *(_QWORD *)(v8 + 240) )
      {
        if ( (v129 & 2) != 0 )
        {
          v60 = -1072103423;
          v59 = 267648;
        }
        else
        {
          v88 = CmpSnapshotTxOwnerArray((int *)(v8 + 248), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
          v25 = v88;
          if ( v88 < 0 )
          {
            v60 = v88;
            v59 = 267776;
            goto LABEL_120;
          }
          CmpLogTransactionAbortedWithChildName(*(__int64 *)&v104[1], v126, 6, v89, *(_DWORD *)(v1 + 120));
          *(_DWORD *)(v1 + 100) |= 4u;
          v60 = -1073741267;
          v59 = 268032;
        }
        goto LABEL_119;
      }
      if ( *(int *)(v8 + 248) < 0 )
      {
        if ( (v129 & 2) != 0 )
        {
          v60 = -1072103423;
          v59 = 268160;
        }
        else
        {
          v90 = CmpSnapshotTxOwnerArray((int *)(v8 + 248), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
          v25 = v90;
          if ( v90 < 0 )
          {
            v60 = v90;
            v59 = 268288;
            goto LABEL_120;
          }
          CmpLogTransactionAbortedWithChildName(*(__int64 *)&v104[1], v126, 6, v91, *(_DWORD *)(v1 + 120));
          *(_DWORD *)(v1 + 100) |= 4u;
          v60 = -1073741267;
          v59 = 268544;
        }
        goto LABEL_119;
      }
      if ( *(_DWORD *)(v10 + 248) )
      {
        if ( (v129 & 2) != 0 )
        {
          v60 = -1072103423;
          v59 = 268672;
        }
        else
        {
          v92 = CmpSnapshotTxOwnerArray((int *)(v10 + 248), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
          v25 = v92;
          if ( v92 < 0 )
          {
            v60 = v92;
            v59 = 268800;
            goto LABEL_120;
          }
          CmpLogTransactionAbortedWithChildName(*(__int64 *)&v104[1], v126, 6, v93, *(_DWORD *)(v1 + 120));
          *(_DWORD *)(v1 + 100) |= 4u;
          v60 = -1073741267;
          v59 = 269056;
        }
        goto LABEL_119;
      }
      if ( *(_DWORD *)(v10 + 264) )
      {
        if ( (v129 & 2) != 0 )
        {
          v60 = -1072103423;
          v59 = 269184;
        }
        else
        {
          v94 = CmpSnapshotTxOwnerArray((int *)(v10 + 264), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
          v25 = v94;
          if ( v94 < 0 )
          {
            v60 = v94;
            v59 = 269312;
            goto LABEL_120;
          }
          CmpLogTransactionAbortedWithChildName(*(__int64 *)&v104[1], v126, 6, v95, *(_DWORD *)(v1 + 120));
          *(_DWORD *)(v1 + 100) |= 4u;
          v60 = -1073741267;
          v59 = 269568;
        }
        goto LABEL_119;
      }
    }
    LODWORD(Size) = (unsigned __int16)CmpNameSize(&v126->Length) + 76;
    v29 = v123;
    v30 = HvAllocateCell(v11, Size, v123, v104, &v110, (__int64)&v114);
    v25 = v30;
    if ( v30 < 0 )
    {
      CmpRecordParseFailure(v1, 269824, v30);
      v2 = (char *)v110;
      goto LABEL_121;
    }
    v31 = *(unsigned __int16 *)(v1 + 4);
    if ( (_WORD)v31 )
    {
      v68 = HvAllocateCell(v11, v31, v29, &BugCheckParameter3_4, &v113, (__int64)&v106);
      v25 = v68;
      if ( v68 < 0 )
      {
        CmpRecordParseFailure(v1, 270080, v68);
        v2 = (char *)v110;
        BugCheckParameter3 = BugCheckParameter3_4;
        goto LABEL_121;
      }
      memmove(v113, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v11, (__int64)&v106);
      else
        HvpReleaseCellPaged(v11, (unsigned int *)&v106);
      v113 = 0LL;
      BugCheckParameter3 = BugCheckParameter3_4;
    }
    v2 = (char *)v110;
    memset_0(v110, 0, (unsigned int)Size);
    if ( (v101 & 2) != 0 )
      *(_WORD *)v2 = 27500;
    else
      *(_WORD *)v2 = 27502;
    v2[12] = CmpAccessBitForPhase;
    v32 = *(_QWORD *)&v104[1];
    if ( *(_BYTE *)(*(_QWORD *)&v104[1] + 65LL) == 3 )
      v2[13] |= 3u;
    else
      v2[13] &= 0xFCu;
    *((_WORD *)v2 + 1) = v101;
    *(_QWORD *)(v2 + 4) = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v2 + 4) = *(_DWORD *)(v32 + 40);
    *((_DWORD *)v2 + 7) = -1;
    *((_DWORD *)v2 + 8) = -1;
    *((_DWORD *)v2 + 10) = -1;
    *((_DWORD *)v2 + 11) = -1;
    *((_DWORD *)v2 + 12) = BugCheckParameter3;
    *((_WORD *)v2 + 37) = *(_WORD *)(v1 + 4);
    BugCheckParameter3 = -1;
    v33 = *(_DWORD *)(v32 + 184);
    if ( (v33 & 0x80u) != 0 )
      *((_DWORD *)v2 + 13) ^= (*((_DWORD *)v2 + 13) ^ (v33 << 16)) & 0xF00000;
    v34 = CmpCopyName(v2 + 76, (const void **)v126);
    *((_WORD *)v2 + 36) = v34;
    if ( v34 < v126->Length )
      *((_WORD *)v2 + 1) |= 0x20u;
    if ( (v101 & 2) != 0 )
    {
      *(_QWORD *)(v2 + 36) = *(_QWORD *)(v1 + 48);
      *((_DWORD *)v2 + 7) = *(_DWORD *)(v1 + 40);
    }
    v100 = 1;
    if ( (v101 & 2) == 0 )
    {
      CmLockHiveSecurityExclusive(v11, v35, v36, v37);
      v96 = 1;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v11,
                                 v104[0],
                                 (__int64)v2,
                                 v104[0] >> 31,
                                 P,
                                 0,
                                 (unsigned int *)v2 + 11);
      v25 = SecurityDescriptorNode;
      if ( SecurityDescriptorNode < 0 )
      {
        v57 = 270592;
        goto LABEL_107;
      }
      CmUnlockHiveSecurity(v11);
      v96 = 0;
    }
    SecurityDescriptorNode = HvpMarkCellDirty(v11, *(_DWORD *)(*(_QWORD *)&v104[1] + 40LL), 0);
    v25 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode < 0 )
    {
      v57 = 270848;
    }
    else if ( v131
           || (SecurityDescriptorNode = CmpAddSubKeyEx(v11, *(unsigned int *)(*(_QWORD *)&v104[1] + 40LL), v104[0]),
               v25 = SecurityDescriptorNode,
               SecurityDescriptorNode >= 0) )
    {
      v98 = 1;
      *(_DWORD *)(v10 + 40) = v104[0];
      v104[0] = -1;
      *(_QWORD *)(v10 + 240) = v131;
      if ( (v101 & 0x40) == 0 )
      {
        *(_DWORD *)(v10 + 96) = *((_DWORD *)v2 + 9);
        *(_DWORD *)(v10 + 100) = *((_DWORD *)v2 + 10);
      }
      ++*(_QWORD *)(v10 + 304);
      CmpRebuildKcbCacheFromNode(v10);
      if ( (v101 & 2) == 0 )
      {
        BugCheckParameter4 = *((unsigned int *)v2 + 11);
        LODWORD(v123) = 0;
        if ( (_DWORD)BugCheckParameter4 == -1 )
        {
          *(_QWORD *)(v10 + 88) = 0LL;
        }
        else
        {
          v116 = *(_QWORD *)(v10 + 32);
          CmLockHiveSecurityShared(v116);
          if ( !CmpFindSecurityCellCacheIndex(v116, BugCheckParameter4, (__int64 *)va) )
          {
            *(_QWORD *)(v10 + 88) = 0LL;
            KeBugCheckEx(0x51u, 4uLL, 1uLL, v10, BugCheckParameter4);
          }
          v40 = v116;
          *(_QWORD *)(v10 + 88) = *(_QWORD *)(*(_QWORD *)(v116 + 1896) + 16LL * (unsigned int)v123 + 8);
          CmUnlockHiveSecurity(v40);
        }
      }
      if ( !v131 )
        goto LABEL_67;
      v69 = v107;
      *((_DWORD *)v107 + 17) = 0;
      v69[18] = v115;
      v70 = v108;
      *((_QWORD *)v69 + 10) = v108;
      v70[17] = 1;
      *((_QWORD *)v70 + 11) = v10;
      SecurityDescriptorNode = CmAddLogForAction((__int64)v69, 1u);
      v25 = SecurityDescriptorNode;
      if ( SecurityDescriptorNode >= 0 )
      {
        v107 = 0LL;
        v108 = 0LL;
LABEL_67:
        v41 = *(_QWORD *)&v104[1];
        v42 = *(unsigned int *)(*(_QWORD *)&v104[1] + 40LL);
        v43 = *(_QWORD *)(*(_QWORD *)&v104[1] + 32LL);
        if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
          v44 = HvpGetCellFlat(v43, v42, (unsigned int *)&v112);
        else
          v44 = HvpGetCellPaged(v43, v42);
        v109 = v44;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v41 + 32), v44, *(_DWORD *)(v41 + 40));
        v45 = v109;
        *(_QWORD *)(v109 + 4) = MEMORY[0xFFFFF78000000014];
        Length = v126->Length;
        if ( (unsigned __int16)*(_DWORD *)(v45 + 52) < (unsigned int)Length )
          *(_WORD *)(v45 + 52) = Length;
        v47 = *(unsigned __int16 *)(v1 + 4);
        if ( *(_DWORD *)(v45 + 56) < v47 )
          *(_DWORD *)(v45 + 56) = v47;
        ++*(_QWORD *)(v41 + 304);
        *(_WORD *)(v41 + 176) = *(_WORD *)(v45 + 52);
        *(_QWORD *)(v41 + 168) = *(_QWORD *)(v45 + 4);
        LOBYTE(Length) = 1;
        CmpCleanUpSubKeyInfo(v41, Length);
        if ( v97 )
        {
          HvUnlockHiveFlusherShared(v11);
          v97 = 0;
        }
        CmpReportNotifyForKcbStack(a1, v131, 1, 0LL);
        v25 = 0;
        v98 = 0;
        goto LABEL_76;
      }
      v57 = 271360;
    }
    else
    {
      v57 = 271104;
    }
LABEL_107:
    CmpRecordParseFailure(v1, v57, SecurityDescriptorNode);
LABEL_76:
    v48 = v96;
    goto LABEL_77;
  }
  if ( CmpIsKeyStackDeleted(v123, 0LL) )
  {
    v26 = v131;
    goto LABEL_32;
  }
  v25 = CmpUndoDeleteKeyForTrans(v10);
  if ( v25 >= 0 )
    goto LABEL_121;
  v25 = -1073741772;
  v60 = -1073741772;
  v59 = 263936;
LABEL_120:
  CmpRecordParseFailure(v1, v59, v60);
LABEL_121:
  v48 = 0;
LABEL_77:
  if ( v48 )
    CmUnlockHiveSecurity(v11);
  if ( v98 )
  {
    v104[0] = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v10 + 40) = -1;
    *(_DWORD *)(v10 + 96) = 0;
    *(_DWORD *)(v10 + 100) = -1;
    *(_WORD *)(v10 + 186) = 0;
    *(_DWORD *)(v10 + 112) = 0;
    *(_QWORD *)(v10 + 168) = 0LL;
    *(_QWORD *)(v10 + 176) = 0LL;
    *(_DWORD *)(v10 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v10 + 185) = 0;
    *(_QWORD *)(v10 + 240) = 0LL;
    *(_QWORD *)(v10 + 88) = 0LL;
  }
  v49 = v107;
  if ( v107 )
  {
    CmpRundownUnitOfWork(v107);
    ExFreePoolWithTag(v49, 0x77554D43u);
  }
  v50 = v108;
  if ( v108 )
  {
    CmpRundownUnitOfWork(v108);
    ExFreePoolWithTag(v50, 0x77554D43u);
  }
  v51 = P;
  if ( P && !v99 )
  {
    if ( (*(_DWORD *)v1 & 1) != 0 && (*(_DWORD *)(v1 + 24) & 4) != 0 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    else
    {
      v54 = v125;
      v55 = *(_QWORD *)(v125 + 72);
      if ( (*(_DWORD *)(v125 + 12) & 0x4000000) == 0 )
      {
        v56 = *(void **)(v55 + 48);
        if ( v56 )
        {
          ExFreePoolWithTag(v56, 0);
          v54 = v125;
        }
      }
      *(_DWORD *)(v54 + 12) &= ~0x4000000u;
      *(_QWORD *)(v55 + 48) = v51;
    }
  }
  if ( v109 )
  {
    v52 = *(_QWORD *)(*(_QWORD *)&v104[1] + 32LL);
    if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v52, (__int64)&v112);
    else
      HvpReleaseCellPaged(v52, (unsigned int *)&v112);
  }
  if ( v113 )
  {
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v11, (__int64)&v106);
    else
      HvpReleaseCellPaged(v11, (unsigned int *)&v106);
  }
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(v11, BugCheckParameter3);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v11, (__int64)&v114);
    else
      HvpReleaseCellPaged(v11, (unsigned int *)&v114);
  }
  if ( v104[0] != -1 )
  {
    if ( v100 )
      CmpFreeKeyByCell(v11, v104[0], 0);
    else
      HvFreeCell(v11, v104[0]);
  }
  if ( v97 )
    HvUnlockHiveFlusherShared(v11);
  return (unsigned int)v25;
}
