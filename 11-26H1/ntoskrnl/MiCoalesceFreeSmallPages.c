/*
 * XREFs of MiCoalesceFreeSmallPages @ 0x14028C5C0
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14028DA04 (MiInitializeAllResidentPageBasePfns.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCoalesceFreeSmallPages(ULONG_PTR a1, char a2)
{
  unsigned int v2; // r13d
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r11
  int v7; // r8d
  char *v8; // rbx
  __int64 v9; // r14
  int v10; // r9d
  __int64 v11; // rbx
  char *v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  unsigned int v17; // ebp
  int j; // r10d
  int v20; // edx
  int i; // r9d
  int v22; // edx
  ULONG_PTR v23; // r14
  int v24; // r12d
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  __int64 v27; // r9
  _QWORD *v28; // r15
  __int64 v29; // r11
  int v30; // ecx
  __int64 v31; // rax
  unsigned __int64 DemandZeroPte; // rax
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  signed __int64 v38; // rax
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rtt
  __int64 v41; // r8
  __int64 v42; // r14
  char v43; // r12
  unsigned int v44; // r15d
  __int64 v45; // rax
  BOOL v46; // ebx
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // r11
  ULONG_PTR v50; // r9
  __m128i v51; // xmm1
  __m128i v52; // xmm0
  __m128i *v53; // rdx
  __m128i v54; // xmm1
  __m128i v55; // xmm2
  __m128i v56; // xmm0
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r8
  __m128i *v59; // rcx
  __m128i *v60; // rax
  unsigned __int64 v61; // rax
  unsigned int k; // ecx
  signed __int64 v63; // rax
  unsigned __int64 v64; // rcx
  signed __int64 v65; // rtt
  ULONG_PTR v66; // rcx
  int v67; // r9d
  __int64 v68; // r11
  unsigned __int32 v69; // ecx
  unsigned __int32 v70; // eax
  unsigned __int16 v71; // [rsp+40h] [rbp-A8h]
  int v72; // [rsp+44h] [rbp-A4h]
  __int64 v73; // [rsp+48h] [rbp-A0h]
  __int64 v74; // [rsp+50h] [rbp-98h]
  unsigned __int64 v75; // [rsp+58h] [rbp-90h]
  __int64 v76; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v77; // [rsp+68h] [rbp-80h]
  __m128i si128; // [rsp+78h] [rbp-70h] BYREF
  __m128i v79; // [rsp+88h] [rbp-60h] BYREF
  __m128i v80; // [rsp+98h] [rbp-50h] BYREF

  v2 = 0;
  v3 = a1;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( (a2 & 1) == 0 )
  {
    v5 = 0LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)byte_140E3BEA6 < 2u || (*(_WORD *)(qword_140E3BFB8 + 2 * (a1 >> 4)) & 0x1Fu) < 0xF )
    return 0LL;
  v5 = 48 * a1 - 0x220000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_6:
  v73 = v5;
  v72 = HIWORD(*(_DWORD *)(v4 + 32)) & 7;
  v77 = *(unsigned __int16 **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v71 = *v77;
  v6 = 48 * v3 - 0x220000000000LL;
  v7 = dword_140E2D804;
  v76 = v6 + 768;
  v75 = v6;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v8 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v3 < *(_QWORD *)v8)
    || dword_140E2D800 != dword_140E2D804 && v3 >= *((_QWORD *)v8 + 2) )
  {
    for ( i = 0; ; i = v22 + 1 )
    {
      while ( 1 )
      {
        if ( v7 < i )
LABEL_33:
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
        v22 = (i + v7) >> 1;
        v8 = (char *)qword_140E2D860 + 16 * v22;
        if ( v3 >= *(_QWORD *)v8 )
          break;
        if ( !v22 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2D860, 0LL);
        v7 = v22 - 1;
      }
      if ( v22 == dword_140E2D804 || v3 < *((_QWORD *)v8 + 2) )
        break;
    }
    dword_140E2D800 = (i + v7) >> 1;
  }
  v9 = 16LL;
  v10 = dword_140E2D804;
  v11 = *((unsigned int *)v8 + 2);
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v12 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v3 < *(_QWORD *)v12)
    || dword_140E2D800 != dword_140E2D804 && v3 >= *((_QWORD *)v12 + 2) )
  {
    for ( j = 0; ; j = v20 + 1 )
    {
      while ( 1 )
      {
        if ( v10 < j )
          goto LABEL_33;
        v20 = (j + v10) >> 1;
        v12 = (char *)qword_140E2D860 + 16 * v20;
        if ( v3 >= *(_QWORD *)v12 )
          break;
        if ( !v20 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2D860, 0LL);
        v10 = v20 - 1;
      }
      if ( v20 == dword_140E2D804 || v3 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2D800 = (j + v10) >> 1;
  }
  v13 = *((_QWORD *)v12 + 2);
  if ( v3 + 16 > v13 )
    v9 = v13 - v3;
  if ( qword_140E2D868 )
  {
    v66 = *(_QWORD *)(MiSearchChannelTable(v3) + 16);
    if ( v9 + v3 > v66 )
      v9 = v66 - v3;
    v6 = 48 * v3 - 0x220000000000LL;
  }
  if ( v9 != 16 )
    return 0LL;
  v14 = v6 + 32;
  v15 = v71;
  v16 = v6 + 768;
  v17 = (*(_DWORD *)(v6 + 32) >> 22) & 3;
  while ( v14 - 32 != v16 )
  {
    if ( ((*(_QWORD *)(v14 + 8) >> 43) & 0x3FF) != v71 || v5 && ((*(_DWORD *)v14 >> 22) & 3) != v17 )
      return 0LL;
    v14 += 48LL;
  }
  v23 = v3;
  if ( !v5 )
    si128 = 0LL;
  v24 = 0;
  v25 = 56320 * v11;
  v26 = v6;
  v27 = *((_QWORD *)v77 + 2) + v25;
  v74 = v27;
  v28 = (_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL);
  v29 = 0x10000000000LL;
  while ( v26 != v16 )
  {
    v30 = *(_DWORD *)(v26 + 32);
    if ( v26 == v73 )
    {
      v31 = *(_QWORD *)(v26 + 16);
      if ( (v30 & 0x70000) != 0 )
      {
        if ( v31 )
          DemandZeroPte = v31 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4);
        *(_QWORD *)(v26 + 16) = DemandZeroPte;
      }
      else
      {
        *(_QWORD *)(v26 + 16) = v31 & 0xFFFFFFFFFFFFFC1FuLL;
      }
    }
    else
    {
      if ( v23 > qword_140E2D920
        || (*v28 & 0x40000000000000LL) == 0
        || ((*(_QWORD *)(v26 + 40) >> 43) & 0x3FF) != (_WORD)v15
        || (v30 & 0x70000u) > 0x10000 )
      {
        goto LABEL_66;
      }
      if ( v26 != v4 && _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        v2 = 2;
LABEL_66:
        v36 = 48 * v3 - 0x220000000000LL;
        if ( v75 < v26 )
        {
          v37 = v73;
          do
          {
            if ( v36 != v37 )
            {
              MiReturnFreeZeroPage(v36, 512LL, v15);
              v37 = v73;
            }
            if ( v36 != v4 )
              _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v36 += 48LL;
          }
          while ( v36 < v26 );
        }
        if ( v24 )
        {
          v38 = *(_QWORD *)(v74 + 14104);
          do
          {
            v39 = (v38 - 1) ^ (v38 ^ (v38 - 1)) & 0xFFFFFFFFFFFF0000uLL;
            if ( (_WORD)v38 == 1 )
              v39 ^= (v39 ^ (v39 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
            v40 = v38;
            v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 14104), v39, v38);
          }
          while ( v40 != v38 );
        }
        return v2;
      }
      if ( (*(_DWORD *)(v26 + 32) & 0x70000u) > 0x10000
        || ((*(_QWORD *)(v26 + 40) >> 43) & 0x3FF) != (_WORD)v15
        || (*(_DWORD *)(v26 + 32) & 0x40000000) != 0
        || v73 && ((*(_DWORD *)(v26 + 32) >> 22) & 3) != v17
        || (*(_QWORD *)(v26 + 40) & v29) != 0 )
      {
        goto LABEL_64;
      }
      if ( !v24 )
      {
        v33 = *(_QWORD *)(v27 + 14104);
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v27 + 14104),
                  (v33 + 1) ^ (v33 ^ (v33 + 1)) & 0xFFFFFFFFFFFF0000uLL,
                  v33);
        }
        while ( v34 != v33 );
        v24 = 1;
      }
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v23, 0LL, 0x100u) )
      {
LABEL_64:
        if ( v26 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_66;
      }
      v29 = 0x10000000000LL;
      v27 = v74;
      v16 = v76;
      if ( !v73 )
      {
        v35 = (*(_DWORD *)(v26 + 32) >> 22) & 3;
        ++si128.m128i_i32[v35];
      }
    }
    v15 = v71;
    v26 += 48LL;
    ++v23;
    v28 += 6;
  }
  if ( v73 )
  {
    v41 = 0LL;
  }
  else
  {
    v41 = 0LL;
    v69 = si128.m128i_i32[0];
    v70 = si128.m128i_u32[1];
    v17 = 0;
    if ( !si128.m128i_i32[0] )
      v69 = 0;
    LOBYTE(v17) = si128.m128i_i32[0] == 0;
    if ( v69 >= si128.m128i_i32[1] )
      v70 = v69;
    else
      v17 = 1;
    if ( v70 < si128.m128i_i32[2] )
      v17 = 2;
  }
  if ( v72 != 1 )
  {
    while ( 1 )
    {
      v26 -= 48LL;
      if ( (unsigned int)MiPfnZeroingNeeded(v26, v17, v41) )
        break;
      if ( v26 == v68 )
        goto LABEL_83;
    }
    v72 = v67;
  }
LABEL_83:
  v42 = v16 - 48;
  v43 = v41;
  v44 = v41;
  do
  {
    if ( !v73 && ((*(_DWORD *)(v42 + 32) >> 22) & 3) != v17 )
    {
      MiChangePageAttribute(v42, v17, 1LL);
      LODWORD(v41) = 0;
    }
    v45 = *(_QWORD *)(v42 + 16);
    if ( qword_140E2D8C0 && (v45 & 0x10) == 0 )
      HIDWORD(v45) &= HIDWORD(qword_140E2D8C8);
    *(_QWORD *)(v42 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    ++v44;
    v42 -= 48LL;
    v43 |= (HIDWORD(v45) != -3) + 1;
  }
  while ( v44 < 0x10 );
  if ( (stru_140E366D8.WaitRegister.Flags & 2) == 0
    || (stru_140E366D8.WaitRegister.Flags & 4) != 0
    || v74 && (*(_DWORD *)(v74 + 14096) & 2) != 0 )
  {
    v46 = (stru_140E366D8.WaitRegister.Flags & 1) == 0 || v74 && (*(_DWORD *)(v74 + 14096) & 2) != 0 || (v43 & 1) == 0;
    v47 = v72;
  }
  else
  {
    v47 = v72;
    if ( v72 == 1 )
    {
      v46 = (v43 & 1) == 0;
    }
    else
    {
      v46 = v41;
      if ( (v43 & 2) != 0 )
      {
        v79.m128i_i64[0] = 0LL;
        si128 = 0LL;
        if ( (stru_140E366D8.WaitRegister.Flags & 4) == 0 )
        {
          MiInitializePageHeatList(&si128, 0LL, 0LL, 1LL);
          MiAddPageToHeatList(&si128, v3, 2LL);
        }
      }
    }
  }
  MiInitializeAllResidentPageBasePfns((_DWORD)v77, v3, 16, 2, v17, v46, 1);
  v48 = *v77;
  v49 = 16LL;
  v50 = v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140E2EC00);
  v51 = _mm_load_si128((const __m128i *)&xmmword_140E2EC10);
  v79.m128i_i64[0] = v51.m128i_i64[0];
  v52 = _mm_load_si128((const __m128i *)&xmmword_140E2EC20);
  v80.m128i_i64[0] = v52.m128i_i64[0];
  v53 = (__m128i *)(48 * v3 - 0x220000000000LL);
  v80.m128i_i64[1] = (v48 << 43) ^ ((v48 << 43) ^ v52.m128i_i64[1]) & 0xFFE007FFFFFFFFFFuLL;
  v79.m128i_i64[1] = v51.m128i_i64[1] | 0x8000000000000000uLL;
  v54 = _mm_loadu_si128(&v79);
  v55 = _mm_loadu_si128(&si128);
  v80.m128i_i32[0] = (v17 << 22) ^ v52.m128i_i32[0] & 0xFF3FFFFF;
  v56 = _mm_loadu_si128(&v80);
  do
  {
    if ( (v50 & 0xF) == 0 )
    {
      if ( !--v49 )
        break;
      ++v50;
      v53 += 3;
    }
    v57 = 16 - (v50 & 0xF);
    if ( ((v50 ^ (v50 + v49 - 1)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      v57 = v49;
    v58 = v57 >> 1;
    if ( v57 >> 1 )
    {
      v59 = v53 + 2;
      v60 = v53 + 1;
      do
      {
        _mm_stream_si128(v53, v55);
        _mm_stream_si128(v60, v54);
        _mm_stream_si128(v59, v56);
        _mm_stream_si128(v53 + 3, v55);
        _mm_stream_si128(v60 + 3, v54);
        v53 += 6;
        v60 += 6;
        _mm_stream_si128(v59 + 3, v56);
        v59 += 6;
        --v58;
      }
      while ( v58 );
    }
    if ( (v57 & 1) != 0 )
    {
      _mm_stream_si128(v53, v55);
      _mm_stream_si128(v53 + 1, v54);
      _mm_stream_si128(v53 + 2, v56);
    }
    _mm_sfence();
    v50 += v57;
    v53 = (__m128i *)(48 * v50 - 0x220000000000LL);
    v49 -= v57;
  }
  while ( v49 );
  v61 = v75 + 48;
  for ( k = 1; k < 0x10; ++k )
  {
    if ( v61 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v61 += 48LL;
  }
  MiInsertPageInFreeOrZeroedList(v3, (unsigned int)(v47 != 0) + 1);
  if ( v75 != v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v63 = *(_QWORD *)(v74 + 14104);
  do
  {
    v64 = (v63 - 1) ^ (v63 ^ (v63 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v63 == 1 )
      v64 ^= (v64 ^ (v64 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v65 = v63;
    v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 14104), v64, v63);
  }
  while ( v65 != v63 );
  return 1LL;
}
