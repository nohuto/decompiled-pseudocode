/*
 * XREFs of MiCombineWithStandbyExisting @ 0x1402E9D44
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiConfirmCombinePageContents @ 0x1402EA8E0 (MiConfirmCombinePageContents.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiWriteRepurposedTransitionPte @ 0x1403440B0 (MiWriteRepurposedTransitionPte.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiRecheckCombineVm @ 0x1403FD34C (MiRecheckCombineVm.c)
 *     MiTryLockLeafPage @ 0x140478BFC (MiTryLockLeafPage.c)
 *     MiStandbyPageStillCombineCandidate @ 0x1404BF3B4 (MiStandbyPageStillCombineCandidate.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // ebx
  ULONG_PTR v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v34; // rbx
  __int64 v35; // [rsp+20h] [rbp-58h]
  unsigned int v37; // [rsp+88h] [rbp+10h]
  unsigned __int64 v38; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 16);
  v5 = a1[14];
  v38 = 0LL;
  v35 = *a1;
  v37 = *((_DWORD *)a1 + 35);
  v6 = a1[8];
  v7 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = *(_QWORD *)(a3 + 48);
  v39 = a3 + 32;
  v9 = v8 & 0x1F;
  v10 = (__int64)(v6 + 0x220000000000LL) / 48;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v5 + 174));
  v12 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v15 = v12;
  if ( !v12 )
    return 3221225557LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v12, v13, v14);
    return 3221225557LL;
  }
  v17 = *v7;
  if ( (*(_QWORD *)a1[9] & 1) == 0 || (*v7 & 0xC00) != 0x800 )
    goto LABEL_5;
  if ( qword_140E2D8C0 )
  {
    if ( (v17 & 0x10) != 0 )
      v17 &= ~0x10uLL;
    else
      v17 &= qword_140E2D8C8;
  }
  if ( ((v17 >> 12) & 0xFFFFFFFFFFLL) != v10
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v6, v11, v7, v9)
    || !(unsigned int)MiRecheckCombineVm(v35, v37, v6, v5) )
  {
LABEL_5:
    LOBYTE(v13) = 18;
    MiUnlockProtoPoolPage(v15, v13, v14);
LABEL_6:
    result = 3221225496LL;
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  MiTryLockLeafPage(v39, 1LL, &v38);
  v20 = v38;
  if ( !v38 )
  {
    v28 = -1073741739;
    goto LABEL_21;
  }
  v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v38 + 40) >> 43) & 0x3FFLL));
  v22 = a1[12] + 4096;
  MiMapSinglePage(v22, (__int64)(v38 + 0x220000000000LL) / 48, 3221225488LL, 0LL);
  v23 = MiConfirmCombinePageContents(a1, (__int64)(v20 + 0x220000000000LL) / 48, v21);
  v18 = 0xFFFFF68000000000uLL;
  *(_QWORD *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( !v23 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = -1073741800;
LABEL_21:
    LOBYTE(v18) = 18;
    MiUnlockProtoPoolPage(v15, v18, v19);
    result = v28;
    goto LABEL_7;
  }
  if ( (MiUnlinkPageFromListEx(v6, 0) & 3) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v24) = 18;
    MiUnlockProtoPoolPage(v15, v24, v25);
    MiDiscardTransitionPfnEx(v6, 0LL, v26, v27);
    goto LABEL_6;
  }
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v29 = *(_DWORD *)(v6 + 32);
  if ( (*(_QWORD *)(v6 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v6 + 32) & 0x8000000) != 0
    && (v6 < 0xFFFFDE0000000000uLL
     || v6 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn(v10)
     || (v29 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v6) == 9) )
  {
    v30 = 5;
  }
  else
  {
    v30 = HIBYTE(v29) & 7;
  }
  MiUpdatePfnPriority(v20, v30, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v31) = 18;
  MiUnlockProtoPoolPage(v15, v31, v32);
  PrototypePteDirect = MiMakePrototypePteDirect(v39);
  MiWriteRepurposedTransitionPte(v6, PrototypePteDirect | 0x800);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  v34 = *(_QWORD *)(v6 + 40);
  MiPfnReferenceCountIsZero(v6, v10);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(48 * (v34 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  ++*(_QWORD *)a1[13];
  return 0LL;
}
