/*
 * XREFs of ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B9F10
 * Callers:
 *     ?ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6620 (-ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  unsigned int v3; // r8d
  size_t v4; // r15
  char *v5; // r12
  unsigned int v6; // r9d
  char *v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rcx
  size_t v11; // r8
  __m128i *Pool2; // rax
  __m128i *v13; // r13
  __m128i *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  char *v17; // r13
  __m128i v18; // xmm1
  int v19; // esi
  unsigned int v20; // ebp
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // [rsp+50h] [rbp-58h]
  __m128i *v25; // [rsp+B8h] [rbp+10h]
  __int64 v26; // [rsp+C0h] [rbp+18h]
  __m128i *v27; // [rsp+C8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v26 = v1;
  v3 = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        11,
        116,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(char **)(v1 + 40);
  v6 = *(_DWORD *)(v1 + 52);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v5;
  if ( (unsigned int)v4 >= 0x18 )
  {
    do
    {
      v8 = *((unsigned int *)v7 + 2);
      v24 = *((_QWORD *)v7 + 2);
      v9 = v8 + v24 + 203;
      v10 = v8 + 24;
      v3 += v9 & 0xFFFFFFF8;
      if ( v10 <= (unsigned int)(HIDWORD(*((_QWORD *)v7 + 1)) + v24) )
        LODWORD(v10) = HIDWORD(*((_QWORD *)v7 + 1)) + v24;
      v6 -= v10;
      v7 += (unsigned int)v10;
    }
    while ( v6 >= 0x18 );
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < v3 )
  {
    *(_DWORD *)(v1 + 56) = v3;
    v11 = v4;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_11:
    memset(v5, 0, v11);
    return;
  }
  Pool2 = (__m128i *)ExAllocatePool2(66LL, v4, 2021082190LL);
  v27 = Pool2;
  v13 = Pool2;
  v11 = v4;
  if ( !Pool2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_11;
  }
  memmove(Pool2, v5, v4);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v14 = v13;
  v15 = 0;
  v25 = v13;
  if ( (unsigned int)v4 >= 0x18 )
  {
    v16 = 0;
    v17 = v5;
    do
    {
      v18 = *v14;
      v19 = v14[1].m128i_i64[0];
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(*v14, 8));
      *((_DWORD *)v17 + 37) = HIDWORD(v14->m128i_i64[0]);
      *((_DWORD *)v17 + 40) = 196;
      *(_DWORD *)v17 = 12845440;
      *((_DWORD *)v17 + 2) = _mm_cvtsi128_si32(v18);
      *((_DWORD *)v17 + 42) = v20 + 196;
      *((_DWORD *)v17 + 3) = 1;
      *((_DWORD *)v17 + 41) = v20;
      *((_DWORD *)v17 + 43) = v19;
      memmove(v17 + 196, &v14[1].m128i_u64[1], v20);
      v21 = HIDWORD(_mm_srli_si128(v18, 8).m128i_u64[0]);
      memmove(&v17[*((unsigned int *)v17 + 42)], &v25->m128i_i8[v21], *((unsigned int *)v17 + 43));
      v22 = v20 + 24;
      v16 += (v20 + v19 + 203) & 0xFFFFFFF8;
      if ( (unsigned __int64)v20 + 24 <= (unsigned int)(v21 + v19) )
        v22 = v21 + v19;
      LODWORD(v4) = v4 - v22;
      v14 = (__m128i *)((char *)v25 + v22);
      v23 = v16;
      v25 = v14;
      if ( (unsigned int)v4 < 0x18 )
        v23 = 0LL;
      *((_DWORD *)v17 + 38) = v23;
      v17 = &v5[v23];
    }
    while ( (unsigned int)v4 >= 0x18 );
    v13 = v27;
    v15 = v16;
    v1 = v26;
  }
  *(_DWORD *)(v1 + 52) = v15;
  *(_DWORD *)(v1 + 56) = v15;
  ExFreePoolWithTag(v13, 0);
}
