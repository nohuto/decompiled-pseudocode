/*
 * XREFs of MiActivePageClaimCandidate @ 0x140291950
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiCheckContiguityTradeEligible @ 0x140705118 (MiCheckContiguityTradeEligible.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiNoTradePageClaimCandidate @ 0x140292040 (MiNoTradePageClaimCandidate.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiMultiReferenceCountPageClaimCandidate @ 0x140410DF8 (MiMultiReferenceCountPageClaimCandidate.c)
 *     MiMultiShareCountPageClaimCandidate @ 0x1404A3E7C (MiMultiShareCountPageClaimCandidate.c)
 */

__int64 __fastcall MiActivePageClaimCandidate(
        __int64 a1,
        const __m128i *a2,
        int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r11
  __int64 v9; // r15
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int16 v13; // r10
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int j; // r8d
  __int64 i; // r8
  int PfnPageSizeIndex; // ecx
  __int16 v24; // [rsp+30h] [rbp-50h]
  int v25; // [rsp+34h] [rbp-4Ch]
  int v26; // [rsp+38h] [rbp-48h] BYREF
  const __m128i *BaseResidentPage; // [rsp+40h] [rbp-40h] BYREF
  __m128i v28; // [rsp+48h] [rbp-38h] BYREF
  __m128i v29; // [rsp+58h] [rbp-28h]
  __m128i v30; // [rsp+68h] [rbp-18h]

  v6 = a1;
  v9 = 1LL;
  v25 = a3 & 1;
  v28 = _mm_loadu_si128(a2);
  v10 = _mm_loadu_si128(a2 + 1);
  v11 = (unsigned __int128)((__int64)a2[0x22000000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v29 = v10;
  v30 = _mm_loadu_si128(a2 + 2);
  v12 = v30.m128i_i64[1];
  v13 = v30.m128i_i16[0];
  v24 = v30.m128i_i16[0];
  v14 = ((unsigned __int64)v11 >> 63) + (v11 >> 3);
  v15 = v10.m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL;
  v16 = v28.m128i_i64[1] | 0x8000000000000000uLL;
  if ( (v30.m128i_i32[0] & 0x8000000) != 0 )
  {
    if ( a5 )
      ++dword_140EF9118;
    else
      ++dword_140EF92AC;
    return v9;
  }
  if ( (v30.m128i_i64[1] & 0x10000000000LL) != 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      BaseResidentPage = (const __m128i *)MiGetBaseResidentPage(a2);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)BaseResidentPage);
      if ( BaseResidentPage != a2 )
        _InterlockedAnd64(&BaseResidentPage[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      LODWORD(BaseResidentPage) = 0;
      v26 = 0;
      PfnPageSizeIndex = MiGetPfnPageSizeIndexUnsynchronized(a2, &BaseResidentPage, &v26, a2);
    }
    if ( PfnPageSizeIndex != 3 )
      return MiPageSizes[PfnPageSizeIndex];
    v6 = a1;
    v13 = v24;
  }
  if ( (((unsigned __int64)v12 >> 43) & 0x3FF) != *(_WORD *)v6 )
  {
    if ( a5 )
      ++dword_140EF90FC;
    else
      ++dword_140EF9240;
    return v9;
  }
  if ( (a4 & 0x410000) != 0x410000 && (a3 & 2) == 0 && *(_BYTE *)(v6 + 16486) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 2 )
      {
        v13 = v24;
        goto LABEL_6;
      }
      if ( *(_QWORD *)(v6 + 16LL * (unsigned int)i + 16712)
        && _bittest64(*(const signed __int64 **)(v6 + 16LL * (unsigned int)i + 16720), v14 >> MiLargePageShifts[i]) )
      {
        break;
      }
    }
    return MiPageSizes[i];
  }
LABEL_6:
  if ( v12 < 0 )
  {
    if ( (v29.m128i_i64[1] & 0x4000000000000000LL) != 0 || v16 == qword_140E2D7A8 || v16 == qword_140E2D7B0 )
    {
      if ( a5 )
        ++dword_140EF9158;
      else
        ++dword_140EF929C;
      return v9;
    }
    if ( v25 && (a2[2].m128i_i64[1] & 0x20000000000000LL) != 0 )
    {
      if ( a5 )
        ++dword_140EF914C;
      else
        ++dword_140EF92A0;
      return v9;
    }
    if ( v30.m128i_i16[0] > 1u || v30.m128i_u16[0] > (v29.m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) )
    {
      if ( a5 )
        ++dword_140EF915C;
      else
        ++dword_140EF92A8;
      return v9;
    }
    if ( (v28.m128i_i8[0] & 1) == 0 )
    {
      if ( a5 )
        ++dword_140EF9160;
      else
        ++dword_140EF92A4;
      return v9;
    }
    if ( a2->m128i_i64[1] > 0 && (a2[2].m128i_i64[1] & 0x10000000000LL) == 0 )
    {
      *a6 |= 2u;
      if ( a5 )
        ++dword_140EF9164;
      else
        ++dword_140EF92B0;
      return v9;
    }
    return 0LL;
  }
  if ( (((unsigned __int64)v12 >> 60) & 7) == 1 || (v17 = v12 & 0xFFFFFFFFFFLL, v17 == 0x3FFFFFFFFELL) )
  {
    if ( a5 )
      ++dword_140EF9180;
    else
      ++dword_140EF9294;
    return v9;
  }
  if ( v16 == -8LL )
  {
    if ( a5 )
      ++dword_140EF9170;
    else
      ++dword_140EF92E0;
    return v9;
  }
  if ( v16 >= 0xFFFF800000000000uLL && byte_140E37BF0[((v16 >> 39) & 0x1FF) - 256] == 4 )
  {
    if ( a5 )
      ++dword_140EF917C;
    else
      ++dword_140EF92F4;
    return v9;
  }
  if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedIncrement(&dword_140EF92FC);
    return v9;
  }
  if ( (v28.m128i_i8[0] & 1) == 0 )
    return (unsigned __int64)(unsigned int)MiNoTradePageClaimCandidate(v6, (_DWORD)a2, a3, a5, (__int64)&v28) >> 31;
  if ( PsInitialSystemProcess && v14 == PsInitialSystemProcess->DirectoryTableBase >> 12 )
  {
    if ( a5 )
      ++dword_140EF919C;
    else
      ++dword_140EF9268;
    return v9;
  }
  v18 = 0xFFFFF6FB40000000uLL;
  v19 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( j = 0; j < 3; ++j )
  {
    if ( v16 >= v18 && v16 <= v19 )
      goto LABEL_41;
    v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( j != 3 )
  {
LABEL_41:
    if ( v30.m128i_i16[0] > 1u )
    {
      if ( a5 )
        ++dword_140EF91A0;
      else
        ++dword_140EF926C;
    }
    else
    {
      if ( (v29.m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
        return 0LL;
      if ( a5 )
        ++dword_140EF91A4;
      else
        ++dword_140EF9274;
    }
    return v9;
  }
  if ( v17 == v14 )
  {
    if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( v30.m128i_i16[0] <= 1u )
        return 0LL;
      if ( a5 )
        ++dword_140EF91B8;
      else
        ++dword_140EF92C4;
    }
    else if ( a5 )
    {
      ++dword_140EF91A8;
    }
    else
    {
      ++dword_140EF92F8;
    }
    return v9;
  }
  if ( v15 > 1 )
    return (unsigned __int64)(unsigned int)MiMultiShareCountPageClaimCandidate(a5, &v28) >> 31;
  if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFLL) == 0 )
  {
    if ( a5 )
      ++dword_140EF91C0;
    else
      ++dword_140EF9290;
    return v9;
  }
  if ( v13 <= 1u && v13 <= v15 || !v25 && (int)MiMultiReferenceCountPageClaimCandidate(a2, a5, &v28) >= 0 )
    return 0LL;
  return v9;
}
