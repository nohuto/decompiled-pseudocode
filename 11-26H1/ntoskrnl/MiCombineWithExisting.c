/*
 * XREFs of MiCombineWithExisting @ 0x1402EA2C4
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiConfirmCombinePageContents @ 0x1402EA8E0 (MiConfirmCombinePageContents.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  volatile __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  int v20; // esi
  ULONG *v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  char WsleContents; // di
  int v26; // r8d
  int v27; // r12d
  volatile __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rbx
  int v32; // r14d
  __int64 v33; // rbx
  __int64 v35; // rcx
  __int64 v36; // r9
  _QWORD *v37; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-61h]
  __int64 v39; // [rsp+40h] [rbp-59h]
  _QWORD *v40; // [rsp+48h] [rbp-51h]
  __int64 v41; // [rsp+50h] [rbp-49h]
  __int64 v42; // [rsp+58h] [rbp-41h]
  unsigned __int64 v43; // [rsp+60h] [rbp-39h]
  unsigned __int64 v44; // [rsp+68h] [rbp-31h]
  __int128 v45; // [rsp+70h] [rbp-29h] BYREF
  __int128 v46; // [rsp+80h] [rbp-19h]
  _QWORD v47[2]; // [rsp+90h] [rbp-9h] BYREF

  v42 = a1[14];
  v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
  v39 = a4;
  v38 = v5;
  v47[0] = a2;
  v40 = a1;
  v45 = 0LL;
  v46 = 0LL;
  v6 = (volatile __int64 *)(((v5 >> 9) & 0x7FFFFFFFFFLL) - 0x98000000000LL);
  v7 = ((unsigned __int64)*v6 >> 12) & 0xFFFFFFFFFFLL;
  v44 = v7;
  v41 = 48 * v7;
  v8 = 48 * v7 - 0x220000000000LL;
  v9 = (unsigned __int64 *)(a3 + 32);
  v37 = (_QWORD *)*a1;
  v43 = a3 + 32;
  v10 = MiLockProtoPoolPage(a3 + 32, 0LL);
  if ( !v10 )
    return 3221225496LL;
  v13 = MiLockLeafPage(v9, 0);
  if ( !v13 )
  {
    LOBYTE(v11) = 17;
    MiUnlockProtoPoolPage(v10, v11, v12);
    return 3221225496LL;
  }
  v14 = a1[12];
  MiMapSinglePage(v14, v7, 3221225488LL, 0LL);
  MiMapSinglePage(v14 + 4096, (__int64)(v13 + 0x220000000000LL) / 48, 3221225488LL, 0LL);
  v15 = MiConfirmCombinePageContents(v40, (__int64)(v13 + 0x220000000000LL) / 48, *v37);
  v16 = 0xFFFFF68000000000uLL;
  v17 = 0xFFFFF68000000000uLL;
  *(_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)((((v14 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v15 )
  {
    v18 = *(_DWORD *)(v8 + 32);
    if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0
      || (*(_DWORD *)(v8 + 32) & 0x8000000) != 0
      && (v8 < 0xFFFFDE0000000000uLL
       || v8 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       || MiIsDecayPfn(v41 / 48)
       || (v18 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v8) == 9) )
    {
      v19 = 5;
    }
    else
    {
      v19 = HIBYTE(v18) & 7;
    }
    MiUpdatePfnPriority(v13, v19, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v17) = 17;
  MiUnlockProtoPoolPage(v10, v17, v16);
  if ( !v15 )
    return 3221225496LL;
  v20 = v42;
  if ( (*(_DWORD *)(v42 + 184) & 0xF) == 1 )
    v21 = &MiSystemPartition;
  else
    v21 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v42 + 174));
  if ( v21[4539] )
    MI_WSLE_LOG_ACCESS(v42, v6);
  v22 = v43;
  v23 = MiMakePrototypePteDirect(v43) | 0x800;
  WsleContents = MiGetWsleContents(v24, v38);
  LODWORD(v37) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v37);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v26 = 1;
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(v8 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
  {
    v27 = 1;
    MiIdentifyPfn(v44, 0LL, (unsigned __int64 *)&v45);
    v26 = 1;
  }
  else
  {
    v27 = 0;
  }
  v28 = *v6;
  v29 = ((unsigned __int64)MiFlags >> 28) & 3;
  if ( v29 <= 1 )
  {
    if ( !v29
      || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v6 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v28 & 0x80u) == 0LL )
    {
      LOBYTE(v28) = v28 | 0x20;
    }
  }
  else if ( (MiFlags & 0x8000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v28 & 0x20) != 0 )
  {
    *v6 = v23;
  }
  else
  {
    if ( _bittest64(&MiFlags, 0x1Bu) )
      _mm_lfence();
    v36 = _InterlockedExchange64(v6, v23);
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v6, v23, 1LL, v36);
      v26 = 1;
    }
    if ( (v36 & 0x20) == 0 )
    {
      v30 = 0;
      goto LABEL_25;
    }
  }
  v30 = 1;
LABEL_25:
  *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
  *(_DWORD *)(v8 + 32) |= 0x70000u;
  v31 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v47[0] + 16LL) = v8;
  v32 = v38;
  if ( v30 )
  {
    MiInsertTbFlushEntry(v39, v38, 1LL);
    v26 = 1;
    *(_DWORD *)(v39 + 20) |= 1u;
  }
  LOBYTE(v26) = WsleContents;
  MiRemoveWsle(v20, v32, v26, 10, 1);
  v33 = 48 * v31 - 0x220000000000LL;
  LODWORD(v37) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v37);
    while ( *(__int64 *)(v33 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v33 + 34) & 7) != 6 )
    MiBadShareCount(v33);
  v35 = (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v33 + 24) = v35 ^ (v35 ^ *(_QWORD *)(v33 + 24)) & 0xC000000000000000uLL;
  if ( !v35 )
    MiPfnShareCountIsZero(v33, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiResolveProtoCombine((ULONG_PTR)v6);
  if ( v27 )
  {
    *((_QWORD *)&v46 + 1) = v22;
    v47[0] = &v45;
    v47[1] = 32LL;
    EtwTraceKernelEvent((int)v47, 1, 0x28000001u, 634, 290462468);
  }
  ++*(_QWORD *)v40[13];
  return 0LL;
}
