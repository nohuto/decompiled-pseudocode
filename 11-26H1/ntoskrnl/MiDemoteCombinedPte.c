/*
 * XREFs of MiDemoteCombinedPte @ 0x1402E01A0
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiUpdateOldPte @ 0x1402DFDB0 (MiUpdateOldPte.c)
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiWalkVaCheckCommon @ 0x14035F710 (MiWalkVaCheckCommon.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402D01D0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiUpdatePageFileBlockOwner @ 0x1402EF100 (MiUpdatePageFileBlockOwner.c)
 *     MiFreeCombineBlock @ 0x140311464 (MiFreeCombineBlock.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiLogCombinedPteDelete @ 0x140709680 (MiLogCombinedPteDelete.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v4; // r8
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  int v15; // eax
  BOOL v16; // eax
  int v17; // r8d
  int v18; // r9d
  volatile signed __int32 *v19; // rax
  __int64 v20; // r15
  int v21; // edx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 HasShadow; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // ebx
  ULONG_PTR v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-41h] BYREF
  __int64 v43; // [rsp+40h] [rbp-39h]
  __int64 v44; // [rsp+48h] [rbp-31h]
  ULONG_PTR v45; // [rsp+50h] [rbp-29h]
  unsigned __int64 ContainingPageTable; // [rsp+58h] [rbp-21h]
  __int64 v47; // [rsp+60h] [rbp-19h]
  unsigned __int64 v48; // [rsp+68h] [rbp-11h]
  __int128 v49; // [rsp+70h] [rbp-9h] BYREF
  __int64 v50; // [rsp+80h] [rbp+7h]
  unsigned __int64 v51[2]; // [rsp+88h] [rbp+Fh] BYREF

  v45 = a2;
  v4 = a2;
  v44 = a1;
  v43 = a3;
  v5 = a3 - 32;
  v50 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a3 - 32 + 56);
  v49 = 0LL;
  if ( v7 > 1 )
    return 0LL;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
  {
    v8 = a1 - 1024;
    if ( *(_QWORD *)(a1 - 1024 + 624) )
      return 0LL;
  }
  v48 = (v6 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v48 - 0x220000000000LL;
  v10 = *(unsigned __int16 *)(a1 + 174);
  v47 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v10) != v47 )
    return 0LL;
  v51[0] = (__int64)(a2 << 25) >> 16;
  v11 = (unsigned __int64 *)(((v51[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = *v11;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v11, v4);
    if ( HasShadow )
    {
      v27 = *(_QWORD *)(HasShadow + 1288);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 8 * ((v26 >> 3) & 0x1FF));
        if ( (v28 & 0x20) != 0 )
          v12 |= 0x20uLL;
        v29 = v12;
        v12 |= 0x42uLL;
        if ( (v28 & 0x42) == 0 )
          v12 = v29;
      }
    }
  }
  v13 = HIBYTE(v12);
  ContainingPageTable = MiGetContainingPageTable(v4);
  v41 = 0;
  v14 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v41);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  v15 = *(_DWORD *)(v9 + 32);
  v16 = (_WORD)v15 != 1 && ((_WORD)v15 != 2 || (*(_BYTE *)(v9 + 34) & 8) == 0);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
    return 0LL;
  v17 = v43;
  v41 = 0;
  v18 = 30;
  if ( (v13 & 0xF) != 8 )
    v18 = 14;
  v19 = *(volatile signed __int32 **)((v5 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v20 = v44;
  v21 = v44;
  v22 = *(_QWORD *)v19;
  _InterlockedDecrement(v19 + 98);
  v23 = MiDecrementCloneBlock(v22, v21, v17, v18, (__int64)&v41);
  if ( v41 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(v43);
    MiFreeCombineBlock(v5, 1LL);
  }
  if ( v23 == 2 )
    return 0LL;
  _InterlockedDecrement((volatile signed __int32 *)(v14 + 392));
  v30 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v41 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v41);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  v31 = v45;
  v32 = ContainingPageTable;
  *(_QWORD *)(v9 + 8) = v45;
  *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame(v9, v32);
  v33 = *(_QWORD *)(v9 + 16) >> 5;
  if ( (v33 & 5) == 5 )
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v33 & 0x1E));
  v42 = *(_QWORD *)(v9 + 16);
  if ( (v42 & 8) != 0 )
  {
    v40 = v42;
    if ( (unsigned __int64)&v42 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v42 <= 0xFFFFF6FB7DBED7F8uLL )
      v40 = MiReadPteShadow(&v42, v42);
    v34 = v40 & 0xFFFFFFFFFFFFFFFBuLL;
    v42 = v34;
  }
  else
  {
    v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  v35 = (v34 >> 3) & 1;
  if ( ((v34 >> 3) & 1) != 0 )
  {
    v39 = v34;
    if ( qword_140E2D8C0 && (v34 & 0x10) == 0 )
      v39 = qword_140E2D8C8 & v34;
    v36 = HIDWORD(v39);
  }
  else
  {
    v36 = 0LL;
  }
  v37 = v43;
  v38 = (unsigned __int16)v34 >> 12;
  if ( (_DWORD)v35 )
    MiUpdatePageFileBlockOwner(
      *(_QWORD *)(v47 + 8 * v38 + 22304),
      v36,
      *(_QWORD *)(v9 + 8),
      v43 & 0x7FFFFFFFFFFFFFFFLL,
      (*(unsigned __int8 *)(v9 + 34) >> 3) & 1);
  if ( v30 )
    MiIdentifyPfn(v48, v8, (unsigned __int64 *)&v49);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v6 & 0x200) != 0 )
    MiWriteValidPteNewProtection(v31, v6 & 0xFFFFFFFFFFFFF5DFuLL | 0x820);
  MiUpdateWorkingSetPrivateSize(v20, v51[0], 1uLL, 0);
  if ( v8 )
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 648));
  if ( v30 )
  {
    MiLogCombinedPteDelete(v37);
    v51[1] = 24LL;
    v51[0] = (unsigned __int64)&v49;
    EtwTraceKernelEvent((int)v51, 1, 0x28000001u, 630, 290462468);
  }
  return 1LL;
}
