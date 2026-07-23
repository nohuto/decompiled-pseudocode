/*
 * XREFs of MiCopyOnWriteUpdatePte @ 0x14036D080
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiDecrementCombinedPteEx @ 0x14036BF5C (MiDecrementCombinedPteEx.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiDecrementCloneBlockReference @ 0x1404A91C0 (MiDecrementCloneBlockReference.c)
 */

ULONG_PTR __fastcall MiCopyOnWriteUpdatePte(__int64 a1, __int64 a2, char a3)
{
  char v3; // r11
  volatile signed __int64 *v4; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  signed __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  bool v16; // cc
  __int64 v17; // rax
  __int64 v18; // rcx
  ULONG *v19; // rsi
  ULONG_PTR v20; // rdi
  ULONG_PTR result; // rax
  int v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  v4 = *(volatile signed __int64 **)(a1 + 16);
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 < 0 || *(_DWORD *)(a1 + 80) != 1 )
      v6 |= 0x42uLL;
    *(_QWORD *)(a1 + 24) = v6 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v7 = *(_DWORD *)(a1 + 124);
  v8 = (a2 << 12) ^ (*(_QWORD *)(a1 + 24) ^ (a2 << 12)) & 0xFFF0000000000FFFuLL;
  *(_QWORD *)(a1 + 24) = v8;
  if ( (v7 & 8) != 0 )
  {
    v14 = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
      && MiPteHasShadow() )
    {
      goto LABEL_34;
    }
    v15 = ((unsigned __int64)MiFlags >> 28) & 3;
    if ( v15 > 1 )
    {
      if ( (MiFlags & 0x8000000) != 0 )
        _mm_lfence();
      goto LABEL_27;
    }
    if ( !v15
      || (unsigned __int64)v4 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v14 & 0x80u) == 0LL )
    {
LABEL_34:
      v14 |= 0x20uLL;
    }
LABEL_27:
    if ( (v14 & 0x20) == 0 )
    {
      if ( _bittest64(&MiFlags, 0x1Bu) )
        _mm_lfence();
      if ( v14 == _InterlockedCompareExchange64(v4, v8, v14) )
        *(_DWORD *)a1 |= 8u;
    }
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
    goto LABEL_14;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL;
  if ( (v3 & 0x20) != 0 )
  {
    if ( _bittest64(&MiFlags, 0x1Bu) )
      _mm_lfence();
    _InterlockedExchange64(v4, v9);
    if ( (unsigned __int64)v4 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_13;
    v16 = (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL;
    goto LABEL_41;
  }
  if ( (v9 & 0x42) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL;
    *v4 = v9 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    MiFlushSingleTbEntry(v11, *(unsigned int *)(a1 + 84));
    *v4 = *(_QWORD *)(a1 + 24);
    goto LABEL_14;
  }
  if ( _bittest64(&MiFlags, 0x1Bu) )
    _mm_lfence();
  _InterlockedExchange64(v4, v9);
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v16 = (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL;
LABEL_41:
    if ( v16 )
      MiWritePteShadow();
  }
LABEL_13:
  MiFlushSingleTbEntry(v10, *(unsigned int *)(a1 + 84));
LABEL_14:
  if ( *(_DWORD *)(a1 + 80) == 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 648LL));
  v12 = *(_QWORD *)(a1 + 40);
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( !*(_DWORD *)(a1 + 80)
    && (*(_DWORD *)(a1 + 124) & 1) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 32LL) & 0x8000000) != 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 35LL) &= ~8u;
  }
  v13 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
    MiBadShareCount(*(_QWORD *)(a1 + 40));
  v17 = *(_QWORD *)(v13 + 24);
  *(_QWORD *)(v13 + 24) = ((v17 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v17 ^ ((v17 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v17 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v13, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_QWORD *)(a1 + 72);
  v19 = *(ULONG **)(a1 + 96);
  v20 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    result = MiDecrementCombinedPteEx(v18, *(_QWORD *)(a1 + 56), 0);
    goto LABEL_60;
  }
  result = *(unsigned int *)(v18 + 184);
  if ( (result & 0xF) == 0 )
  {
    result = MiLocateCloneAddress(v18 - 1024, v20);
    if ( result )
    {
      result = MiDecrementCloneBlockReference(result, v20);
LABEL_60:
      if ( (_DWORD)result == 3 )
        return MiChargeCommit(v19, 1uLL, 4u);
    }
  }
  return result;
}
