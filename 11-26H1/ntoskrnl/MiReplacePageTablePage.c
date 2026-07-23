/*
 * XREFs of MiReplacePageTablePage @ 0x14033E3DC
 * Callers:
 *     MiTradeForPageTablePage @ 0x14033D4EC (MiTradeForPageTablePage.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiCopyPageTablePageTransitionPtes @ 0x14033D6F0 (MiCopyPageTablePageTransitionPtes.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiCopyPageTablePageValidPtes @ 0x14033DE60 (MiCopyPageTablePageValidPtes.c)
 *     MiReplaceActivePageTableLinks @ 0x14033E260 (MiReplaceActivePageTableLinks.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiCopyPageTablePageContents @ 0x14033F050 (MiCopyPageTablePageContents.c)
 */

void __fastcall MiReplacePageTablePage(__int64 a1)
{
  __int64 v1; // r15
  __int64 *v2; // r12
  __int64 v4; // rcx
  const __m128i *v5; // rdi
  __m128i *v6; // rsi
  char v7; // r10
  __int64 v8; // r9
  unsigned __int64 UltraMapping; // rbx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 ValidPte; // rax
  int v13; // eax
  int v14; // r15d
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 PteShadow; // rax
  char v18; // r8
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int128 v20; // [rsp+28h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-20h]
  unsigned __int64 v22; // [rsp+48h] [rbp-10h]
  int v23; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+50h] BYREF
  unsigned __int64 *v25; // [rsp+B0h] [rbp+58h]
  __int64 v26; // [rsp+B8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v4 = *(_QWORD *)(a1 + 32);
  v22 = 0LL;
  v20 = 0LL;
  v26 = v4;
  v21 = 0LL;
  v24 = v1;
  v5 = (const __m128i *)(48 * v1 - 0x220000000000LL);
  v6 = (__m128i *)(48 * v4 - 0x220000000000LL);
  v7 = 1;
  v8 = 0xFFFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1288LL);
    if ( !v16 || ((*(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) != v1 )
    {
      v14 = DWORD2(v20);
      goto LABEL_27;
    }
  }
  if ( (v5[2].m128i_i64[1] & 0xFFFFFFFFFFLL) == v1 )
  {
    v23 = 1;
    if ( *(_DWORD *)(a1 + 64) == 1 )
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v23 = 0;
  }
  UltraMapping = MiGetUltraMapping(*(_QWORD *)(a1 + 16) + 96LL, 3uLL, 1LL, 4);
  v25 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
  ValidPte = MiMakeValidPte(v11, v26, ProtectionPfnCompatible | 0xA0000000);
  *v25 = ValidPte;
  v22 = UltraMapping;
  v19 = 48 * v1 - 0x220000000000LL;
  *((_QWORD *)&v21 + 1) = v24;
  v13 = MiCopyPageTablePageContents(&v20, a1);
  v14 = DWORD2(v20);
  if ( v13 < 0 )
  {
    v7 = 1;
    goto LABEL_46;
  }
  LODWORD(v24) = 0;
  if ( DWORD2(v20) )
  {
    while ( _interlockedbittestandset64(&v5[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( v5[1].m128i_i64[1] < 0 );
    }
  }
  else
  {
    while ( _interlockedbittestandset64(&v5[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( v5[1].m128i_i64[1] < 0 );
    }
  }
  v15 = v5[1].m128i_i64[1];
  if ( !v23
    && (unsigned __int16)v15 != (unsigned __int64)(unsigned int)(v14 + v20 - HIDWORD(v20) - v21 - DWORD1(v20) + 1) )
  {
    v7 = 1;
LABEL_45:
    _InterlockedAdd(&dword_140EF9088, 1u);
    _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
LABEL_46:
    v8 = 0xFFFFFFFFFFLL;
    *v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
LABEL_27:
    while ( v14 )
    {
      PteShadow = *v2;
      if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v2, *v2);
      if ( ((unsigned __int8)PteShadow & (unsigned __int8)v7) == 0 && (PteShadow & 0xC00) == 0x800 )
      {
        if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
          PteShadow &= qword_140E2D8C8;
        --v14;
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * (v8 & (PteShadow >> 12)) - 0x21FFFFFFFFE8LL),
          0x7FFFFFFFFFFFFFFFuLL);
      }
      ++v2;
    }
    return;
  }
  v7 = 1;
  if ( (unsigned __int16)v5[2].m128i_i32[0] != 1 || (v5[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
    goto LABEL_45;
  LODWORD(v24) = 0;
  while ( _interlockedbittestandset64(&v6[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24);
    while ( v6[1].m128i_i64[1] < 0 );
  }
  v6[1].m128i_i64[1] = v15 ^ (v15 ^ v6[1].m128i_i64[1]) & 0xC000000000000000uLL;
  _InterlockedAnd64(&v6[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  MiCopyPageTablePageTransitionPtes((__int64)&v20, (_QWORD *)a1);
  MiCopyPageTablePageValidPtes((int *)&v20, (_QWORD *)a1);
  *v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v23 )
  {
    v23 = 0;
    while ( _interlockedbittestandset64(&v5[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( v5[1].m128i_i64[1] < 0 );
    }
    v23 = 0;
    while ( _interlockedbittestandset64(&v6[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( v6[1].m128i_i64[1] < 0 );
    }
    v18 = 6;
    if ( (*(_DWORD *)(a1 + 60) & 0x410000) != 0x410000 )
      v18 = 4;
    MiCopyPfnEntryEx(v6, v5, v18);
    MiSetPfnContainingFrame((__int64)v6, v26);
    _InterlockedAnd64(&v6[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (*(_DWORD *)(v19 + 36) & 0x4000000) != 0 )
    MiReplaceActivePageTableLinks(*(_QWORD *)a1, (__int64)v6, v19);
  *(_DWORD *)(a1 + 56) = 0;
}
