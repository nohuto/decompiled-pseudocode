/*
 * XREFs of MiCombineInitialFinish @ 0x1402EC334
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402D01D0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED5D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402ED5EC (MiTransferPageFileOwnership.c)
 *     MiAbandonPrivatePfn @ 0x1402ED8CC (MiAbandonPrivatePfn.c)
 *     MiActivateCombineBlock @ 0x1402EDA68 (MiActivateCombineBlock.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiWriteRepurposedTransitionPte @ 0x1403440B0 (MiWriteRepurposedTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiSetWsleProtection @ 0x14036DE30 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineInitialFinish(
        struct _KEVENT ***a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i *a5,
        const __m128i *BugCheckParameter2,
        __int64 a7)
{
  unsigned __int64 v7; // r12
  __int64 v9; // rdi
  signed __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int32 v14; // r8d
  unsigned __int64 v15; // rdx
  _QWORD *v16; // r12
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r11
  struct _KEVENT ***v22; // rax
  __int64 v23; // rdx
  struct _KEVENT **v24; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 PrototypePteDirect; // rax
  signed __int64 *v29; // rdx
  int v30; // [rsp+30h] [rbp-A1h]
  BOOL v31; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-99h] BYREF
  signed __int64 *v33; // [rsp+40h] [rbp-91h]
  _QWORD *v34; // [rsp+48h] [rbp-89h]
  struct _KEVENT *v35; // [rsp+50h] [rbp-81h]
  struct _KEVENT *v36; // [rsp+58h] [rbp-79h]
  struct _KEVENT ***v37; // [rsp+60h] [rbp-71h]
  __int64 v38; // [rsp+68h] [rbp-69h]
  __int64 v39; // [rsp+70h] [rbp-61h]
  unsigned __int64 ContainingPageTable; // [rsp+78h] [rbp-59h]
  __int64 v41; // [rsp+80h] [rbp-51h]
  __int64 v42; // [rsp+88h] [rbp-49h]
  struct _KEVENT **v43; // [rsp+90h] [rbp-41h]
  __int128 v44; // [rsp+98h] [rbp-39h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-29h]
  _QWORD v46[2]; // [rsp+B8h] [rbp-19h] BYREF

  v7 = *(_QWORD *)(a3 + 16);
  v43 = *a1;
  v44 = 0LL;
  v45 = 0LL;
  v35 = *v43;
  v41 = a3;
  v38 = a2;
  v37 = a1;
  v9 = a2 + 32;
  v10 = (signed __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v33 = v10;
  v34 = (_QWORD *)(a2 + 32);
  ContainingPageTable = MiGetContainingPageTable(a2 + 32);
  v11 = 48 * ContainingPageTable;
  v39 = v9 & 0x7FFFFFFFFFFFFFFFLL;
  v46[0] = (__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 / 48;
  v42 = (__int64)v37[14];
  v36 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v42 + 174));
  v31 = v35 != v36;
  *(_QWORD *)(v38 + 56) = 1LL;
  if ( a4 )
  {
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    {
      v30 = 1;
      MiIdentifyPfn((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 / 48, 0LL, (unsigned __int64 *)&v44);
    }
    else
    {
      v30 = 0;
    }
    v12 = *v10;
    if ( (*v10 & 0x42) != 0 )
    {
      v12 &= 0xFFFFFFFFFFFFFFBDuLL;
      *(_DWORD *)(a4 + 20) |= 0xAu;
    }
  }
  else
  {
    v12 = a7;
    v30 = 0;
  }
  LODWORD(v32) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(__int64 *)(v11 - 0x21FFFFFFFFE8LL) < 0 );
  }
  *(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) = (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) + 1LL) ^ (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) ^ (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = MiAbandonPrivatePfn((ULONG_PTR)BugCheckParameter2);
  v32 = v13;
  v31 = 0;
  while ( _interlockedbittestandset64(&a5[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( a5[1].m128i_i64[1] < 0 );
  }
  MiFinalizePageAttribute((__int64)a5, ((unsigned __int32)BugCheckParameter2[2].m128i_i32[0] >> 22) & 3, 1LL);
  MiCopyPfnEntryEx(a5, BugCheckParameter2, 0);
  v14 = a5[2].m128i_i32[0];
  if ( (a5[2].m128i_i64[1] & 0x20000000000000LL) == 0
    && ((a5[2].m128i_i32[0] & 0x8000000) == 0
     || (unsigned __int64)a5 >= 0xFFFFDE0000000000uLL
     && (unsigned __int64)a5 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     && !MiIsDecayPfn((__int64)a5[0x22000000000LL].m128i_i64 / 48)
     && ((v14 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType((__int64)a5) != 9))
    && (v14 & 0x7000000u) < 0x5000000
    && (a5[2].m128i_i64[1] & 0x20000000000000LL) == 0 )
  {
    a5[2].m128i_i32[0] = a5[2].m128i_i32[0] & 0xF8FFFFFF | 0x5000000;
  }
  v15 = ContainingPageTable;
  a5->m128i_i64[1] = v39;
  a5[2].m128i_i64[1] |= 0x8000000000000000uLL;
  MiSetPfnContainingFrame(a5, v15);
  MI_MAKE_PROTECT_WRITE_COPY(&a5[1]);
  if ( a4 )
  {
    MiTransferPageFileOwnership(a5, v33);
    v16 = v34;
  }
  else
  {
    v16 = v34;
    a5[1].m128i_i64[1] &= 0xC000000000000000uLL;
    *v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *v16 = v12;
    PrototypePteDirect = MiMakePrototypePteDirect((unsigned __int64)v16);
    MiWriteRepurposedTransitionPte(BugCheckParameter2, PrototypePteDirect | 0x800);
    v29 = v33;
    BugCheckParameter2[1].m128i_i64[1] |= 0x4000000000000000uLL;
    MiTransferPageFileOwnership(a5, v29);
    MiPfnReferenceCountIsZero(a5, (__int64)a5[0x22000000000LL].m128i_i64 / 48);
  }
  _InterlockedAnd64(&a5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( v35 == v36 && (BugCheckParameter2[1].m128i_i32[0] & 8) != 0 )
  {
    BugCheckParameter2[1].m128i_i64[0] &= ~8uLL;
    if ( v13 )
    {
      v32 &= ~8uLL;
      v13 = v32;
    }
  }
  if ( a4 )
  {
    v17 = *(_DWORD *)(a4 + 20) | 0x40;
    v18 = (((__int64)a5[0x22000000000LL].m128i_i64 / 48) << 12) ^ (v12 ^ (((__int64)a5[0x22000000000LL].m128i_i64 / 48) << 12)) & 0xFFF0000000000FFFuLL;
    *(_DWORD *)(a4 + 20) = v17;
    if ( (v18 & 0x800) != 0 )
    {
      v18 = v18 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      *(_DWORD *)(a4 + 20) = v17 | 0x20;
    }
    MiWriteValidPteNewPage(v33, v18, 0LL);
    *v16 = v18;
    BugCheckParameter2[1].m128i_i64[1] |= 0x4000000000000000uLL;
    BugCheckParameter2[2].m128i_i32[0] |= 0x70000u;
    _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    v19 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(v41 + 16) = BugCheckParameter2;
    MiInsertTbFlushEntry(a4, v19, 1LL);
    v21 = v42;
    if ( (*(_DWORD *)(v42 + 184) & 0xF) == 0 )
      MiSetWsleProtection(v20, v19, 0LL);
    MiUpdateWorkingSetPrivateSize(v21, v19, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v30 )
    {
      *((_QWORD *)&v45 + 1) = v16;
      v46[0] = &v44;
      v46[1] = 32LL;
      EtwTraceKernelEvent((int)v46, 1, 0x28000001u, 634, 290462468);
    }
  }
  else
  {
    v26 = BugCheckParameter2[2].m128i_i64[1];
    v27 = v46[0];
    BugCheckParameter2[1].m128i_i64[1] &= 0xC000000000000000uLL;
    MiPfnReferenceCountIsZero(BugCheckParameter2, v27);
    _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    MiLockAndDecrementShareCount(48 * (v26 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2LL);
  }
  if ( v13 )
    MiReleasePageFileInfo(v36, v13, 1LL);
  v22 = v37;
  v23 = v38;
  v24 = v43;
  v37[37] = 0LL;
  v22[38] = 0LL;
  return MiActivateCombineBlock(v24, v23);
}
