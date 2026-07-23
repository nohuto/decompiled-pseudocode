/*
 * XREFs of MiGetBestPageToZero @ 0x1403CE888
 * Callers:
 *     MiGetSinglePageToZero @ 0x1403CE6F0 (MiGetSinglePageToZero.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiSetPageZeroInProgress @ 0x1403CEB0C (MiSetPageZeroInProgress.c)
 */

__int64 __fastcall MiGetBestPageToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 v12; // rsi
  _QWORD *v13; // r12
  __int64 v14; // r11
  unsigned int v15; // ebx
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  unsigned int v20; // ecx
  unsigned int Cache; // esi
  unsigned int v22; // r10d
  __int64 v23; // r11
  int v24; // r9d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // r8
  unsigned int v28; // esi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  char v32; // cl
  unsigned int v33; // ebx
  char v34; // r14
  _QWORD *v35; // r13
  unsigned int v36; // r12d
  unsigned __int64 v37; // rdi
  __int64 v38; // r15
  unsigned int v39; // ecx
  unsigned int v40; // esi
  unsigned int v41; // r11d
  int v42; // r14d
  unsigned int v43; // eax
  unsigned int v44; // r10d
  char v45; // cl
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // r8
  unsigned int v49; // esi
  unsigned int v50; // ecx
  int v51; // r10d
  unsigned __int64 v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-30h] BYREF
  __int64 v54; // [rsp+28h] [rbp-28h]
  __int64 *v55; // [rsp+30h] [rbp-20h]
  int v56; // [rsp+38h] [rbp-18h]
  unsigned int v57; // [rsp+3Ch] [rbp-14h]
  int v58; // [rsp+40h] [rbp-10h]
  int v59; // [rsp+44h] [rbp-Ch]
  __int64 v60; // [rsp+48h] [rbp-8h]
  unsigned int v61; // [rsp+98h] [rbp+48h]
  unsigned int v62; // [rsp+98h] [rbp+48h]
  int v63; // [rsp+A0h] [rbp+50h]
  __int64 v64; // [rsp+A8h] [rbp+58h]

  v3 = a3 >> 8;
  v5 = a2 + ((unsigned __int64)(HIWORD(a3) & 3) << 10);
  v54 = 0LL;
  v59 = 0;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v7 = (_QWORD *)(a2 + 16LL * (BYTE1(a3) & 1) + 14072);
  else
    v7 = (_QWORD *)(v5 + 16);
  if ( !*v7 )
    return 0LL;
  v60 = a1;
  v55 = &MiFreeThenFree;
  v53 = a2;
  v56 = 1;
  v57 = a3;
  v58 = 0;
  result = MiSetPageZeroInProgress(&v53);
  if ( result )
    return result;
  v9 = (a3 >> 15) & 1;
  v10 = (a3 >> 18) & 3;
  v11 = HIWORD(a3) & 3;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v12 = v3 & 1;
  else
    v12 = 0LL;
  v13 = 0LL;
  v14 = v5 + 32 * ((unsigned int)v9 + 4LL + v10 + 2LL * (unsigned int)v9);
  v15 = v57;
  v54 = *(_QWORD *)(a2 + 8 * (v10 + v12 + 4 * v9 + 2 * (v12 + 4 * v9) + ((unsigned __int64)v11 << 7)) + 848);
  v64 = v14;
  v61 = v57;
  v16 = *(&MiState + (HIWORD(v57) & 3) + 1152);
  v17 = v16;
  v18 = 0LL;
  v19 = 0LL;
  Cache = MiColorGetCache(v57);
  v24 = v58 & 0x40;
  v63 = v24;
  if ( (v58 & 0x40) != 0 )
  {
    v31 = MiColorGetCache(v20) & 0xF;
    do
    {
      v32 = v31;
      v31 += 16;
      v19 |= 1LL << (v32 & 0x3F);
    }
    while ( v31 < 0x40 && v31 < v16 );
    goto LABEL_20;
  }
  do
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23 + 24);
      v26 = (unsigned __int64)Cache >> 6;
      v27 = (_QWORD *)(v25 + 8 * v26);
      if ( v13 != v27 )
      {
        v13 = (_QWORD *)(v25 + 8 * v26);
        v18 = ~((1LL << Cache) - 1) & *v27;
        if ( v24 )
          v18 &= ~v19;
        if ( ((Cache ^ (unsigned __int64)v17) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v18 &= (1LL << v17) - 1;
      }
      v28 = Cache & 0xFFFFFFC0;
      if ( !v18 )
        break;
      _BitScanForward64(&v30, v18);
      Cache = v30 + v28;
      v15 ^= (unsigned __int8)(v15 ^ Cache);
      v57 = v15;
      v18 &= ~(1LL << v30);
      result = MiSetPageZeroInProgress(&v53);
      if ( result )
        return result;
      v22 = v61;
      v23 = v64;
LABEL_20:
      v24 = v63;
    }
    Cache = v28 + 64;
  }
  while ( Cache < v17 );
  v13 = 0LL;
  if ( (unsigned int)MiColorGetCache(v22) && v17 == v16 )
  {
    v17 = MiColorGetCache(v29);
    Cache = 0;
    goto LABEL_20;
  }
  result = 0LL;
  if ( (v58 & 0x400) == 0 && (v58 & 2) != 0 )
  {
    v33 = v57;
    v58 |= 0x400u;
    v34 = v58;
    v62 = v57;
    v35 = 0LL;
    v36 = *(&MiState + (HIWORD(v57) & 3) + 1152);
    v37 = 0LL;
    v38 = 0LL;
    v40 = MiColorGetCache(v57);
    v42 = v34 & 0x40;
    if ( v42 )
    {
      v43 = MiColorGetCache(v39) & 0xF;
      do
      {
        v45 = v43;
        v43 += 16;
        v38 |= 1LL << (v45 & 0x3F);
      }
      while ( v43 < 0x40 && v43 < v44 );
    }
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v46 = (unsigned __int64)v40 >> 6;
          v47 = *(_QWORD *)(v64 + 24);
          v48 = (_QWORD *)(v47 + 8 * v46);
          if ( v35 != v48 )
          {
            v35 = (_QWORD *)(v47 + 8 * v46);
            v37 = ~((1LL << v40) - 1) & *v48;
            if ( v42 )
              v37 &= ~v38;
            if ( ((v40 ^ (unsigned __int64)v36) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
              v37 &= (1LL << v36) - 1;
          }
          v49 = v40 & 0xFFFFFFC0;
          if ( !v37 )
            break;
          _BitScanForward64(&v52, v37);
          v40 = v52 + v49;
          v33 ^= (unsigned __int8)(v33 ^ v40);
          v57 = v33;
          v37 &= ~(1LL << v52);
          result = MiSetPageZeroInProgress(&v53);
          if ( result )
            return result;
          v41 = v62;
        }
        v40 = v49 + 64;
      }
      while ( v40 < v36 );
      v35 = 0LL;
      if ( !(unsigned int)MiColorGetCache(v41) || v36 != v51 )
        break;
      v36 = MiColorGetCache(v50);
      v40 = 0;
    }
    return 0LL;
  }
  return result;
}
