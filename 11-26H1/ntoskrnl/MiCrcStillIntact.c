/*
 * XREFs of MiCrcStillIntact @ 0x1402E96C8
 * Callers:
 *     MiRelinkDeferredCrcEntries @ 0x1402E9630 (MiRelinkDeferredCrcEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiActivePageCombineCandidate @ 0x1402954F0 (MiActivePageCombineCandidate.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiVadSupportsCombine @ 0x1402E9A8C (MiVadSupportsCombine.c)
 *     MiMakeCombineCandidateClean @ 0x14031B3EC (MiMakeCombineCandidateClean.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  _QWORD *v6; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rbx
  const __m128i *v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rcx
  int v15; // r11d
  __int64 v16; // rax
  ULONG *v18; // rax
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD **)a1;
  v8 = *(_QWORD *)(a3 + 16);
  v20 = *(_DWORD *)(a1 + 140);
  v9 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = *v9;
  if ( (*v9 & 1) == 0 )
    return 0LL;
  v11 = (const __m128i *)(48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v19 = 0;
  while ( _interlockedbittestandset64(&v11[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( v11[1].m128i_i64[1] < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(v6, v20, v11) )
  {
    _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v13 = v11[2].m128i_i8[2] & 7;
  _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 != 6 )
    return 0LL;
  if ( !(unsigned int)MiActivePageCombineCandidate(0x7FFFFFFFFFFFFFFFLL, v12, (__int64)v11, (__int64)v9) )
    return 0LL;
  v16 = 0LL;
  if ( v15 == 1 )
  {
    v16 = MiVadSupportsCombine(v14, v8);
    if ( !v16 )
      return 0LL;
  }
  if ( a4 == 1 )
  {
    if ( (v10 & 0x42) == 0 )
      return 0LL;
    MiMakeCombineCandidateClean(v9, v16);
  }
  else if ( a4 == 2 )
  {
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
      v18 = &MiSystemPartition;
    else
      v18 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 174));
    if ( !(unsigned int)MiClearPteAccessed(
                          v4,
                          (unsigned __int64)v11,
                          (unsigned __int64)v9,
                          0LL,
                          (unsigned int)(v18[4539] != 0) + 4) )
      return 0LL;
    *(_DWORD *)(a2 + 20) &= ~2u;
  }
  return 1LL;
}
