/*
 * XREFs of MxConstructLoaderMemoryTree @ 0x140CFB74C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MiSearchNumaNodeTable @ 0x1402AFDE0 (MiSearchNumaNodeTable.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MxApplyMemoryLimits @ 0x140CFB348 (MxApplyMemoryLimits.c)
 *     MxComputePageTablesNeeded @ 0x140CFB5E8 (MxComputePageTablesNeeded.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CFD8DC (MxInsertFreeZeroMemoryDescriptor.c)
 */

LARGE_INTEGER __fastcall MxConstructLoaderMemoryTree(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // r9
  __int64 *v6; // r10
  __m128i v7; // xmm1
  __int64 *v8; // rcx
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm0_8
  ULONG_PTR v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r13
  ULONG_PTR v16; // rsi
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v18; // rbx
  _RTL_RB_TREE *v19; // rcx
  unsigned __int64 v20; // rdx
  BOOLEAN v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v24; // r15
  unsigned int v25; // ebx
  ULONG_PTR v26; // r14
  _QWORD *v27; // rax
  ULONG_PTR v28; // rdx
  ULONG_PTR v29; // r8
  const __m128i *v30; // rcx
  __int64 v31; // rdx
  __m128i *v32; // rax
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  LARGE_INTEGER result; // rax
  __int64 v39; // [rsp+70h] [rbp+8h]
  __int64 v40; // [rsp+80h] [rbp+18h]

  v1 = 64;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (v1 = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    v3 = qword_141000840;
    v4 = v1;
    v5 = qword_141000850;
    v6 = qword_141000860;
    do
    {
      v7 = _mm_loadl_epi64((const __m128i *)&_xmm);
      v8 = v3 - 8;
      v3[1] = (__int64)v3;
      *v3 = (__int64)v3;
      v3[3] = (__int64)v5;
      v5 += 250;
      v3[2] = (__int64)(v3 + 2);
      v3[5] = (__int64)v6;
      v6 += 250;
      v3[4] = (__int64)(v3 + 4);
      v9 = _mm_add_epi64(
             _mm_slli_epi64(_mm_unpacklo_epi32(v7, (__m128i)0LL), 5u),
             _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v3 - 8), (__m128i)(unsigned __int64)(v3 - 8)));
      *(v3 - 7) = v9.m128i_i64[0];
      v10 = _mm_srli_si128(v9, 8).m128i_u64[0];
      *(v3 - 3) = v10;
      *(v3 - 4) = v10;
      v3 += 250;
      *v8 = v9.m128i_i64[0];
      --v4;
    }
    while ( v4 );
  }
  MxApplyMemoryLimits(a1);
  v11 = 0LL;
  v12 = a1 + 32;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = 0LL;
  v39 = 0LL;
  v15 = 2LL;
  while ( v13 != v12 )
  {
    v16 = *(_QWORD *)(v13 + 32);
    BugCheckParameter4 = *(_QWORD *)(v13 + 40);
    v40 = *(_QWORD *)v13;
    if ( v16 < v11 )
      KeBugCheckEx(0x1Au, 0x303031EuLL, v11, v16, BugCheckParameter4);
    v18 = *(int *)(v13 + 24);
    v11 = v16 + BugCheckParameter4;
    if ( (_DWORD)v18 == 2 || (_DWORD)v18 == 24 )
    {
      v24 = 0LL;
      v25 = 0;
      v26 = *(_QWORD *)(v13 + 40);
      if ( BugCheckParameter4 )
      {
        do
        {
          v27 = MiSearchNumaNodeTable(v16);
          v28 = v26;
          v29 = v27[2];
          if ( v26 + v16 > v29 )
            v28 = v29 - v16;
          if ( v28 >= v24 )
          {
            v25 = *((_DWORD *)v27 + 2);
            v24 = v28;
          }
          v26 -= v28;
        }
        while ( v26 );
      }
      MxInsertFreeZeroMemoryDescriptor((PRTL_RB_TREE)&MxBootState[250 * v25], (PRTL_BALANCED_NODE)v13);
      v11 = v16 + BugCheckParameter4;
      v14 = v39;
LABEL_35:
      if ( !v14 )
        qword_140E3D540 = v16;
      MxComputePageTablesNeeded(v14, v13);
      v39 = v13;
      v14 = v13;
      BugCheckParameter3 = BugCheckParameter4 + v16 - 1;
      goto LABEL_38;
    }
    v19 = (_RTL_RB_TREE *)(a1 + 352);
    v20 = *(_QWORD *)(a1 + 352);
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)v19;
    v21 = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( v16 < *(_QWORD *)(v20 + 32) )
        {
          v22 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( !v22 )
              break;
            v22 ^= v20;
          }
          if ( !v22 )
            break;
        }
        else
        {
          v22 = *(_QWORD *)(v20 + 8);
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_19;
            v22 ^= v20;
          }
          if ( !v22 )
          {
LABEL_19:
            v21 = 1;
            break;
          }
        }
        v20 = v22;
      }
    }
    RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)v20, v21, (PRTL_BALANCED_NODE)v13);
    if ( (unsigned int)v18 > 0x2C )
      goto LABEL_35;
    v23 = 0x15C5C0C00048LL;
    if ( !_bittest64(&v23, v18) )
      goto LABEL_35;
LABEL_38:
    v13 = v40;
    v12 = a1 + 32;
  }
  v30 = (const __m128i *)&qword_14101FC38;
  v31 = 2LL;
  v32 = (__m128i *)&qword_14101FC38;
  do
  {
    *v32 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), _mm_loadu_si128(v32));
    ++v32;
    --v31;
  }
  while ( v31 );
  v33 = 0LL;
  qword_14101FC38 *= 513LL;
  do
  {
    v34 = _mm_loadu_si128(v30++);
    v33 = _mm_add_epi64(v33, v34);
    --v15;
  }
  while ( v15 );
  qword_14101FC08 += (_mm_add_epi64(v33, _mm_srli_si128(v33, 8)).m128i_u64[0] + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v35 = ((unsigned __int64)(qword_140E2D888 + 98304) >> 12) + (((qword_140E2D888 + 98304) & 0xFFF) != 0);
  v36 = 0LL;
  v37 = 4LL;
  do
  {
    v36 += v35;
    v35 = (v35 >> 9) + 1;
    --v37;
  }
  while ( v37 );
  qword_14101FC08 += ((unsigned __int16)KeNumberNodes << 9) + ((v36 + 511) & 0xFFFFFFFFFFFFFE00uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = KeQueryPerformanceCounter(0LL);
  qword_140FFC958 = result.QuadPart;
  return result;
}
