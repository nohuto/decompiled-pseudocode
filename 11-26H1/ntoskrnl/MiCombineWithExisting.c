/*
 * XREFs of MiCombineWithExisting @ 0x140308244
 * Callers:
 *     MiConvertPrivateToProto @ 0x140307A8C (MiConvertPrivateToProto.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x140297070 (MiGetWsleContents.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x1402992A0 (MiUpdatePfnPriority.c)
 *     MiMakePrototypePteDirect @ 0x1402D27B0 (MiMakePrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiConfirmCombinePageContents @ 0x140308860 (MiConfirmCombinePageContents.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiRemoveWsle @ 0x140325384 (MiRemoveWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiMapSinglePage @ 0x14036A87C (MiMapSinglePage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  volatile __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  int v13; // ebx
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  int v16; // esi
  ULONG *v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  char WsleContents; // di
  int v22; // r8d
  int v23; // r12d
  volatile __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rbx
  int v28; // r14d
  __int64 v29; // rbx
  __int64 v31; // rcx
  __int64 v32; // r9
  _QWORD *v33; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-61h]
  __int64 v35; // [rsp+40h] [rbp-59h]
  _QWORD *v36; // [rsp+48h] [rbp-51h]
  __int64 v37; // [rsp+50h] [rbp-49h]
  __int64 v38; // [rsp+58h] [rbp-41h]
  unsigned __int64 v39; // [rsp+60h] [rbp-39h]
  unsigned __int64 v40; // [rsp+68h] [rbp-31h]
  __int128 v41; // [rsp+70h] [rbp-29h] BYREF
  __int128 v42; // [rsp+80h] [rbp-19h]
  _QWORD v43[2]; // [rsp+90h] [rbp-9h] BYREF

  v38 = a1[14];
  v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
  v35 = a4;
  v34 = v5;
  v43[0] = a2;
  v36 = a1;
  v41 = 0LL;
  v42 = 0LL;
  v6 = (volatile __int64 *)(((v5 >> 9) & 0x7FFFFFFFFFLL) - 0x98000000000LL);
  v7 = ((unsigned __int64)*v6 >> 12) & 0xFFFFFFFFFFLL;
  v40 = v7;
  v37 = 48 * v7;
  v8 = 48 * v7 - 0x220000000000LL;
  v9 = (unsigned __int64 *)(a3 + 32);
  v33 = (_QWORD *)*a1;
  v39 = a3 + 32;
  v10 = MiLockProtoPoolPage(a3 + 32, 0LL);
  if ( !v10 )
    return 3221225496LL;
  v11 = MiLockLeafPage(v9, 0);
  if ( !v11 )
  {
    MiUnlockProtoPoolPage(v10, 0x11u);
    return 3221225496LL;
  }
  v12 = a1[12];
  MiMapSinglePage(v12, v7, 3221225488LL, 0LL);
  MiMapSinglePage(v12 + 4096, (__int64)(v11 + 0x220000000000LL) / 48, 3221225488LL, 0LL);
  v13 = MiConfirmCombinePageContents(v36, (__int64)(v11 + 0x220000000000LL) / 48, *v33);
  *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)((((v12 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v13 )
  {
    v14 = *(_DWORD *)(v8 + 32);
    if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0
      || (*(_DWORD *)(v8 + 32) & 0x8000000) != 0
      && (v8 < 0xFFFFDE0000000000uLL
       || v8 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
       || MiIsDecayPfn(v37 / 48)
       || (v14 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v8) == 9) )
    {
      v15 = 5;
    }
    else
    {
      v15 = HIBYTE(v14) & 7;
    }
    MiUpdatePfnPriority(v11, v15, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v10, 0x11u);
  if ( !v13 )
    return 3221225496LL;
  v16 = v38;
  if ( (*(_DWORD *)(v38 + 184) & 0xF) == 1 )
    v17 = &MiSystemPartition;
  else
    v17 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v38 + 174));
  if ( v17[4539] )
    MI_WSLE_LOG_ACCESS(v38, v6);
  v18 = v39;
  v19 = MiMakePrototypePteDirect(v39) | 0x800;
  WsleContents = MiGetWsleContents(v20, v34);
  LODWORD(v33) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v22 = 1;
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(v8 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
  {
    v23 = 1;
    MiIdentifyPfn(v40, 0LL, (unsigned __int64 *)&v41);
    v22 = 1;
  }
  else
  {
    v23 = 0;
  }
  v24 = *v6;
  v25 = ((unsigned __int64)MiFlags >> 28) & 3;
  if ( v25 <= 1 )
  {
    if ( !v25
      || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v6 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v24 & 0x80u) == 0LL )
    {
      LOBYTE(v24) = v24 | 0x20;
    }
  }
  else if ( (MiFlags & 0x8000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v24 & 0x20) != 0 )
  {
    *v6 = v19;
  }
  else
  {
    if ( _bittest64(&MiFlags, 0x1Bu) )
      _mm_lfence();
    v32 = _InterlockedExchange64(v6, v19);
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v6, v19, 1LL, v32);
      v22 = 1;
    }
    if ( (v32 & 0x20) == 0 )
    {
      v26 = 0;
      goto LABEL_25;
    }
  }
  v26 = 1;
LABEL_25:
  *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
  *(_DWORD *)(v8 + 32) |= 0x70000u;
  v27 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v43[0] + 16LL) = v8;
  v28 = v34;
  if ( v26 )
  {
    MiInsertTbFlushEntry(v35, v34, 1LL);
    v22 = 1;
    *(_DWORD *)(v35 + 20) |= 1u;
  }
  LOBYTE(v22) = WsleContents;
  MiRemoveWsle(v16, v28, v22, 10, 1);
  v29 = 48 * v27 - 0x220000000000LL;
  LODWORD(v33) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v29 + 34) & 7) != 6 )
    MiBadShareCount(v29);
  v31 = (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v29 + 24) = v31 ^ (v31 ^ *(_QWORD *)(v29 + 24)) & 0xC000000000000000uLL;
  if ( !v31 )
    MiPfnShareCountIsZero(v29, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiResolveProtoCombine((ULONG_PTR)v6);
  if ( v23 )
  {
    *((_QWORD *)&v42 + 1) = v18;
    v43[0] = &v41;
    v43[1] = 32LL;
    EtwTraceKernelEvent((int)v43, 1, 0x28000001u, 634, 290462468);
  }
  ++*(_QWORD *)v36[13];
  return 0LL;
}
