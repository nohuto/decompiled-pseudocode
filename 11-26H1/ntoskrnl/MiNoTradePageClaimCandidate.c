/*
 * XREFs of MiNoTradePageClaimCandidate @ 0x140292040
 * Callers:
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiHyperPage @ 0x140292560 (MiHyperPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 __fastcall MiNoTradePageClaimCandidate(__int64 a1, const __m128i *a2, char a3, int a4, __m128i *a5)
{
  __int32 v9; // edi
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned int i; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  int v17; // ecx
  const __m128i *v18; // rcx
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rdi
  __int32 v21; // edx
  unsigned __int64 v22; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax

  v9 = a5[2].m128i_i32[0];
  v10 = a5[1].m128i_i64[1];
  v11 = a5->m128i_i64[1] | 0x8000000000000000uLL;
  if ( (unsigned int)MiHyperPage(v11) )
  {
    if ( (unsigned __int16)v9 <= 1u && (unsigned __int16)v9 <= (v10 & 0x3FFFFFFFFFFFFFFFuLL) )
      return 0LL;
    if ( a4 )
      ++dword_140EF91B8;
    else
      ++dword_140EF92C4;
    return 3221225473LL;
  }
  v12 = (__int64)(v11 << 25) >> 16;
  v13 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 22296); ++i )
  {
    v15 = *(_QWORD *)(a1 + 8LL * i + 22304);
    v16 = *(_QWORD *)(v15 + 184);
    if ( v16
      && v12 >= v16
      && v12 < *(_QWORD *)(v15 + 184) + (unsigned int)dword_140E360CC * (unsigned __int64)*(unsigned int *)(v15 + 4) )
    {
      return 0LL;
    }
  }
  if ( v12 < 0xFFFF800000000000uLL )
  {
    v17 = 0;
    goto LABEL_31;
  }
  v17 = (unsigned __int8)byte_140E37BF0[((v12 >> 39) & 0x1FF) - 256];
  if ( v17 != 4 )
  {
LABEL_31:
    if ( v12 < MmPfnDatabase || v12 >= qword_140E2D890 )
    {
      if ( v17 == 11 )
      {
        if ( !a4 )
        {
          ++dword_140EF9284;
          return 3221225473LL;
        }
        ++dword_140EF918C;
      }
      else
      {
        if ( v17 == 8 )
        {
          if ( a4 )
            ++dword_140EF9190;
          else
            ++dword_140EF9288;
          return 3221225473LL;
        }
        if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( a4 )
            ++dword_140EF9194;
          else
            ++dword_140EF928C;
          return 3221225473LL;
        }
        if ( !a4 )
        {
          ++dword_140EF9280;
          return 3221225473LL;
        }
        ++dword_140EF9198;
      }
    }
    else
    {
      if ( a4 )
      {
        ++dword_140EF9188;
        return 3221225473LL;
      }
      ++dword_140EF92B4;
    }
    return 3221225473LL;
  }
  if ( (v9 & 0x10000000) != 0 || (unsigned __int16)v9 > 1u )
  {
    if ( a4 )
      ++dword_140EF9168;
    else
      ++dword_140EF92D8;
    return 3221225473LL;
  }
  if ( (byte_140E2D809 & 1) == 0 )
  {
    if ( a4 )
      ++dword_140EF916C;
    else
      ++dword_140EF92DC;
    return 3221225473LL;
  }
  v18 = a2 + 0x22000000000LL;
  if ( (a3 & 1) != 0 )
  {
    LOBYTE(v20) = 17;
    goto LABEL_20;
  }
  _InterlockedIncrement(&dword_140EF9308);
  v19 = MiSafeLockPage((__int64)a2[0x22000000000LL].m128i_i64 / 48);
  v20 = v19;
  if ( v19 == 17 )
  {
    _InterlockedIncrement(&dword_140EF92EC);
    return 3221225473LL;
  }
  *a5 = _mm_loadu_si128(a2);
  a5[1] = _mm_loadu_si128(a2 + 1);
  a5[2] = _mm_loadu_si128(a2 + 2);
  v21 = a5[2].m128i_i32[0];
  if ( (v21 & 0x70000) == 0x60000
    && (unsigned __int16)v21 <= 1u
    && (a5[2].m128i_i64[1] & 0x10000000000LL) == 0
    && (a2->m128i_i64[1] | 0x8000000000000000uLL) == v11
    && (unsigned int)MiGetSystemRegionType((__int64)(v11 << 25) >> 16) == 4 )
  {
LABEL_20:
    v22 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v22 & 1) == 0 )
        goto LABEL_60;
      if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
      {
        HasShadow = MiPteHasShadow(v18, v22, *(_QWORD *)v11);
        if ( HasShadow )
        {
          v26 = *(_QWORD *)(HasShadow + 1288);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              v25 |= 0x20uLL;
            v22 = v25 | 0x42;
            if ( (v27 & 0x42) == 0 )
              v22 = v25;
          }
        }
      }
    }
    if ( (v22 & 1) != 0 && (__int64)a2[0x22000000000LL].m128i_i64 / 48 == ((v22 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (v22 & 0x200) != 0 )
      {
        if ( a4 )
          ++dword_140EF9178;
        else
          ++dword_140EF92E8;
        v13 = -1073741823;
      }
      goto LABEL_24;
    }
LABEL_60:
    if ( a4 )
      ++dword_140EF9174;
    else
      ++dword_140EF92E4;
    v13 = -1073741823;
LABEL_24:
    if ( (_BYTE)v20 != 17 )
    {
      _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v20 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        __writecr8((unsigned __int8)v20);
      }
    }
    return v13;
  }
  _InterlockedIncrement(&dword_140EF92EC);
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v20 >= 2u )
    return 3221225473LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
  __writecr8(v20);
  return 3221225473LL;
}
