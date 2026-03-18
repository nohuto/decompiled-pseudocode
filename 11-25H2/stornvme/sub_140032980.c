/*
 * XREFs of sub_140032980 @ 0x140032980
 * Callers:
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400024C0 @ 0x1400024C0 (sub_1400024C0.c)
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     sub_140006B50 @ 0x140006B50 (sub_140006B50.c)
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140011210 @ 0x140011210 (sub_140011210.c)
 *     sub_14001A2D4 @ 0x14001A2D4 (sub_14001A2D4.c)
 *     sub_14001E044 @ 0x14001E044 (sub_14001E044.c)
 *     sub_14001F138 @ 0x14001F138 (sub_14001F138.c)
 *     sub_1400209C8 @ 0x1400209C8 (sub_1400209C8.c)
 *     sub_140020A08 @ 0x140020A08 (sub_140020A08.c)
 *     sub_140024570 @ 0x140024570 (sub_140024570.c)
 *     sub_1400246D0 @ 0x1400246D0 (sub_1400246D0.c)
 *     sub_140025B40 @ 0x140025B40 (sub_140025B40.c)
 *     sub_140027E40 @ 0x140027E40 (sub_140027E40.c)
 *     sub_140027EFC @ 0x140027EFC (sub_140027EFC.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 *     sub_14002A02C @ 0x14002A02C (sub_14002A02C.c)
 *     sub_14002A194 @ 0x14002A194 (sub_14002A194.c)
 *     sub_14002A6B0 @ 0x14002A6B0 (sub_14002A6B0.c)
 *     sub_14002BA4C @ 0x14002BA4C (sub_14002BA4C.c)
 *     sub_14002C7E8 @ 0x14002C7E8 (sub_14002C7E8.c)
 *     sub_14002E2D0 @ 0x14002E2D0 (sub_14002E2D0.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_140032980(char *a1, char *a2, unsigned __int64 a3)
{
  __m128 *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  char *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  unsigned __int64 v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  unsigned __int64 i; // r9
  unsigned __int64 v43; // r8

  result = (__m128 *)a1;
  if ( a3 < 8 )
  {
    if ( a3 )
    {
      v7 = a2 < a1;
      v8 = a2 - a1;
      if ( v7 )
      {
        v10 = &a1[a3];
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --a3;
          *v10 = v11;
        }
        while ( a3 );
      }
      else
      {
        do
        {
          v9 = a1[v8];
          ++a1;
          --a3;
          *(a1 - 1) = v9;
        }
        while ( a3 );
      }
    }
  }
  else if ( a3 > 0x10 )
  {
    if ( a3 > 0x20 )
    {
      v12 = &a2[a3];
      v7 = a2 < a1;
      v13 = a2 - a1;
      if ( v7 && v12 > a1 )
      {
        v31 = &a1[a3];
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = a3 - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)&a1[v13];
        v15 = (unsigned __int64)(a1 + 16);
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + a3 - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)&a2[a3 - 16];
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)&a1[a3 - 16] = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)&a2[a3 - 8];
    *(_QWORD *)a1 = v4;
    *(_QWORD *)&a1[a3 - 8] = v5;
  }
  return result;
}
