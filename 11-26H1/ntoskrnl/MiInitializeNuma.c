/*
 * XREFs of MiInitializeNuma @ 0x1406E7EDC
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiInitializeSlabAllocator @ 0x14070BF18 (MiInitializeSlabAllocator.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiInitializeHugeIoRanges @ 0x14086E0C0 (MiInitializeHugeIoRanges.c)
 *     MiInitializeChannelOrdering @ 0x14087C32C (MiInitializeChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  _DWORD *v3; // rdi
  __m128i si128; // xmm0
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // rsi
  int *v8; // r11
  __int64 v9; // rbp
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rbp
  char *v20; // r14
  __int64 v21; // r15
  char *v22; // r12
  _DWORD *v23; // rsi
  __int64 v24; // r13
  int *v25; // rsi
  unsigned int v26; // ebp
  int v27; // eax
  _DWORD *v28; // rbp
  unsigned int i; // esi
  unsigned int v31; // [rsp+68h] [rbp+10h]
  __int64 v32; // [rsp+70h] [rbp+18h]

  v1 = 0;
  v31 = 0;
  v2 = a1;
  v32 = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    v3 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 56156LL);
    do
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_QWORD *)(v3 - 10565) = v2;
      *(v3 - 10525) = v1;
      *((_BYTE *)v3 - 52004) = 8;
      *((_BYTE *)v3 - 52002) = 8;
      *(__m128i *)(v3 - 10499) = si128;
      MiInitializeChannelOrdering(v2, v1);
      MiInitializeHugeIoRanges(v5);
      v6 = v3 - 14007;
      v7 = 4LL;
      v8 = dword_140E2D900;
      do
      {
        v9 = (unsigned int)*v8;
        v10 = v6 + 24;
        v11 = v6;
        v12 = 2LL;
        do
        {
          v13 = 3LL;
          do
          {
            v14 = 2LL;
            do
            {
              v11[1] = v10;
              v10 += 4;
              *v11 = v9;
              v11 += 2;
              --v14;
            }
            while ( v14 );
            --v13;
          }
          while ( v13 );
          --v12;
        }
        while ( v12 );
        v6 += 128;
        ++v8;
        --v7;
      }
      while ( v7 );
      v15 = (unsigned int)dword_140E2D90C;
      v16 = v3 - 10591;
      v17 = v3 - 10597;
      v18 = 2LL;
      do
      {
        *v17 = v16;
        v16 += 8;
        *(v17 - 1) = v15;
        v17 += 2;
        --v18;
      }
      while ( v18 );
      v19 = v3 - 12992;
      v20 = (char *)(v3 - 12647);
      v21 = 8LL;
      do
      {
        v22 = v20;
        v23 = v19;
        v24 = 2LL;
        do
        {
          *(_QWORD *)(v23 - 3) = 0LL;
          *v23 = 2;
          *(_QWORD *)(v23 - 7) = 0x3FFFFFFFFFLL;
          *(_QWORD *)(v23 - 5) = 0x3FFFFFFFFFLL;
          v23[1] = 0;
          memset_0(v22, -1, 0x200uLL);
          v22 += 4096;
          v23 += 176;
          --v24;
        }
        while ( v24 );
        v20 += 512;
        v19 += 22;
        --v21;
      }
      while ( v21 );
      v25 = v3 - 10469;
      v26 = 0;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v25 - 10));
        v27 = -(v26++ - 1 > 1);
        *v25 = v27 & 5;
        v25[1] = v31;
        v25 += 16;
      }
      while ( v26 < 8 );
      v2 = a1;
      v28 = v3 - 10351;
      for ( i = 0; i < 9; ++i )
      {
        MiInitializeSlabAllocator(v28, i, v31, a1);
        v28 += 58;
      }
      *(v3 - 17) = 8;
      *(_QWORD *)(v3 - 15) = v3 - 13;
      *(_QWORD *)(v3 - 3) = 0LL;
      *v3 = 5;
      *(_QWORD *)(v3 - 7) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v3 - 5) = 0x3FFFFFFFFFLL;
      v3[1] = 0;
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        if ( v31 == dword_140FBF274 )
          *(v3 - 10515) |= 2u;
      }
      else
      {
        *(v3 - 10515) ^= (*(_DWORD *)(56320LL * v31 + qword_140E37E50 + 14096) ^ *(v3 - 10515)) & 2;
      }
      v1 = v31 + 1;
      v32 += 56320LL;
      v3 += 14080;
      v31 = v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
}
