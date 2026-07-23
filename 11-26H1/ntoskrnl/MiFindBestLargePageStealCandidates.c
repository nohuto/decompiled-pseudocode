/*
 * XREFs of MiFindBestLargePageStealCandidates @ 0x14041A958
 * Callers:
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8 (MiFindContiguousPagesInOptimizedCandidates.c)
 * Callees:
 *     MiFindNextLowerLargePageCandidate @ 0x14041AF4C (MiFindNextLowerLargePageCandidate.c)
 *     MiCollapseRunTopDown @ 0x14041B070 (MiCollapseRunTopDown.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 __fastcall MiFindBestLargePageStealCandidates(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int *a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  int v11; // r10d
  unsigned int v12; // esi
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r11
  unsigned int v15; // r15d
  int v16; // ebx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int *v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 result; // rax
  unsigned int *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rbx
  __int64 i; // r9
  int v30; // ebx
  unsigned __int64 v31; // rdx
  int v32; // ebx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 *v40; // r8
  __int64 v41; // r10
  _DWORD *v42; // r9
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rax
  __int64 v45; // [rsp+28h] [rbp-C9h]
  int v46; // [rsp+30h] [rbp-C1h]
  __int64 v47; // [rsp+38h] [rbp-B9h]
  _DWORD v48[2]; // [rsp+40h] [rbp-B1h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-A9h]
  unsigned __int64 v50; // [rsp+50h] [rbp-A1h]
  unsigned __int64 v51; // [rsp+58h] [rbp-99h]
  unsigned int *v52; // [rsp+60h] [rbp-91h]
  unsigned __int64 v53; // [rsp+68h] [rbp-89h]
  unsigned __int64 v54; // [rsp+70h] [rbp-81h]
  unsigned __int64 v55; // [rsp+78h] [rbp-79h]
  _QWORD v56[2]; // [rsp+80h] [rbp-71h]
  __m128i si128; // [rsp+90h] [rbp-61h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-51h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp-49h]
  unsigned __int64 v60; // [rsp+B0h] [rbp-41h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-39h]
  unsigned __int64 v62; // [rsp+C0h] [rbp-31h]
  unsigned __int64 v63; // [rsp+C8h] [rbp-29h]
  unsigned __int64 v64; // [rsp+D0h] [rbp-21h]
  __int64 v65; // [rsp+D8h] [rbp-19h]
  _QWORD v66[10]; // [rsp+E0h] [rbp-11h] BYREF
  __int64 v67; // [rsp+140h] [rbp+4Fh]
  int v69; // [rsp+150h] [rbp+5Fh]
  char v70; // [rsp+158h] [rbp+67h]
  unsigned __int64 v71; // [rsp+160h] [rbp+6Fh]

  v67 = a1;
  v7 = (__int64)a7;
  v8 = a3;
  v9 = 0;
  v65 = 0LL;
  v10 = 0;
  v11 = 0;
  v69 = 0;
  v12 = *a7;
  v13 = a7 + 6;
  v14 = MiPageSizes[v8];
  v15 = 0;
  v16 = MiLargePageShifts[v8];
  v17 = v14 >> 2;
  v46 = 0;
  v50 = 0LL;
  if ( (_DWORD)v8 != 2 )
    v17 = v14 >> 4;
  v55 = v17;
  v49 = v14;
  v70 = v16;
  v45 = -1LL;
  v53 = 3 * (v14 >> 2);
  v54 = v14 - (v14 >> 4);
  if ( v14 <= 0x200 && *(_BYTE *)(a1 + 16486) )
    v47 = a1 + 16712;
  else
    v47 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( (_DWORD)v8 )
  {
    v36 = 0LL;
    v37 = 0LL;
    do
    {
      v48[v36] = MiLargePageShifts[v36] - v16;
      if ( (_DWORD)v8 == 2 )
      {
        v38 = (unsigned __int64)MiPageSizes[v37] >> 3;
        v56[v37] = v38;
        if ( !v9 )
          v56[v37] = v38 >> 1;
      }
      else
      {
        v56[v37] = v14;
      }
      ++v9;
      ++v36;
      ++v37;
    }
    while ( v9 < (unsigned int)v8 );
    a1 = v67;
    v11 = 0;
  }
  if ( a4 < 0x100000 && a5 > 0x100000 && *(_QWORD *)(a1 + 22280) > 0x100000uLL )
    a4 = 0x100000LL;
  v18 = *((_QWORD *)a7 + 2) - 1LL;
  v60 = a4;
  v19 = a2;
  v20 = v14 + v18;
  v62 = v14;
  v64 = v14;
  if ( a5 < v20 )
    v20 = a5;
  v63 = v14;
  result = *a2;
  v61 = v20;
  v22 = &a2[4 * result + 4];
  v52 = v22;
  while ( (_DWORD)result )
  {
    v71 = (unsigned int)(result - 1);
    result = 16 * v71;
    v58 = *(_QWORD *)&v19[4 * v71 + 4];
    v59 = *(_QWORD *)&v19[4 * v71 + 6] + v58;
    if ( v60 >= v59 )
      break;
    if ( a6 >= 0 )
    {
      result = v71;
      if ( v22[2 * v71] != a6 )
        continue;
    }
    if ( !(unsigned int)MiCollapseRunTopDown(&v58, v71) )
    {
LABEL_52:
      v11 = v69;
      goto LABEL_86;
    }
    v23 = v59;
    v24 = v59 >> v16;
    v51 = v58 >> v16;
    if ( (_DWORD)v8 )
    {
      v40 = v66;
      v41 = v8;
      v42 = v48;
      v43 = v58 >> v16;
      do
      {
        v44 = v43 >> *v42++;
        *v40++ = v44;
        --v41;
      }
      while ( v41 );
      v7 = (__int64)a7;
    }
    v25 = v23 - v49;
    v26 = v24 - 1;
    v27 = v45;
    *(_QWORD *)(v7 + 16) = v25;
    while ( 1 )
    {
      v28 = v25 >> 18;
      if ( v47 )
      {
        if ( v28 != v27 )
        {
          v45 = v25 >> 18;
          if ( _bittest64(*(const signed __int64 **)(v47 + 8), v28) )
          {
            v33 = v25 & 0xFFFFFFFFFFFC0000uLL;
            *(_QWORD *)(v7 + 16) = v33;
            result = MiFindNextLowerLargePageCandidate(v67, v33);
            v26 = result >> v70;
            v27 = v28;
            *(_QWORD *)(v7 + 16) = result;
            v45 = v28;
LABEL_44:
            v11 = v69;
            goto LABEL_29;
          }
        }
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
      {
        v30 = v48[i];
        v31 = v26 >> v30;
        if ( si128.m128i_i64[i] != v26 >> v30 )
        {
          v34 = v56[i];
          si128.m128i_i64[i] = v31;
          while ( 1 )
          {
            v35 = (_DWORD)i
                ? *(_WORD *)(*(_QWORD *)(v67 + 16768) + 2 * v31) & 0x3FF
                : *(_DWORD *)(*(_QWORD *)(v67 + 16824) + 4 * v31) & 0x7FFFFu;
            if ( v35 >= v34 )
              break;
            v26 = (v31 << v30) - 1;
            result = v26 << v70;
            *(_QWORD *)(v7 + 16) = v26 << v70;
            if ( !v31 )
            {
              v11 = v69;
              goto LABEL_83;
            }
            if ( --v31 < v66[i] )
            {
              LOBYTE(v16) = v70;
              goto LABEL_52;
            }
          }
        }
      }
      if ( (_DWORD)v8 == 2 )
        result = ((unsigned __int64)*(unsigned __int16 *)(qword_140E3BFB8 + 2 * v26) >> 5) & 0x1F;
      else
        result = (_DWORD)v8 == 1
               ? *(_WORD *)(*(_QWORD *)(v67 + 16768) + 2 * v26) & 0x3FF
               : *(_DWORD *)(*(_QWORD *)(v67 + 16824) + 4 * v26) & 0x7FFFFu;
      if ( result >= v53 )
      {
        if ( result < v54 )
        {
          v13[v69] = v26;
        }
        else
        {
          v13[v69] = v13[v46];
          v13[v46++] = v26;
        }
        result = v12 - v15;
        if ( v69 == (_DWORD)result )
          --v15;
        else
          ++v10;
        v11 = v69 + 1;
        v69 = v11;
        if ( v11 == v12 )
          goto LABEL_33;
        v27 = v45;
      }
      else
      {
        v27 = v45;
        if ( result < v55 )
          goto LABEL_44;
        v11 = v69;
        if ( v10 < v12 )
        {
          ++v15;
          result = v12 - v15;
          ++v10;
          v13[result] = v26;
        }
      }
LABEL_29:
      if ( !v26 )
        goto LABEL_83;
      --v26;
      v25 = *(_QWORD *)(v7 + 16) - v49;
      result = v50 + 1;
      *(_QWORD *)(v7 + 16) = v25;
      v50 = result;
      if ( v26 < v51 )
        break;
      if ( result >= 0x20000 )
      {
        _InterlockedIncrement(&dword_140EF9230[v8]);
LABEL_33:
        v32 = 0;
        goto LABEL_34;
      }
    }
    LOBYTE(v16) = v70;
LABEL_86:
    v22 = v52;
    result = v71;
    v19 = a2;
  }
LABEL_83:
  v32 = 1;
LABEL_34:
  if ( v15 )
  {
    v39 = v12 - v15;
    if ( v11 != (_DWORD)v39 )
      result = (unsigned __int64)memmove(&v13[v11], &v13[v39], 8LL * v15);
  }
  if ( v10 )
  {
    result = v10;
    do
    {
      *v13++ <<= v70;
      --result;
    }
    while ( result );
  }
  if ( v32 )
    *(_QWORD *)(v7 + 16) = -1LL;
  *(_DWORD *)(v7 + 4) = v10;
  return result;
}
