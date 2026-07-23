/*
 * XREFs of gen_bitlen @ 0x1406399C0
 * Callers:
 *     build_tree @ 0x1406392F4 (build_tree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall gen_bitlen(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // r11d
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rdx
  __m128i v10; // xmm0
  int v11; // ebp
  __int64 result; // rax
  __int64 v13; // r9
  int *v14; // rbx
  __int64 v15; // r10
  int v16; // esi
  __int64 v17; // r14
  int v18; // ecx
  int v19; // r10d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r11
  int v23; // r9d
  int *v24; // r10
  __int64 v25; // rbx
  int v26; // ecx
  int v27; // [rsp+40h] [rbp+8h]

  v3 = *a2;
  v27 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v5 = (__int64 *)a2[2];
  v6 = *v5;
  v7 = v5[1];
  v8 = *((_DWORD *)v5 + 4);
  v9 = *((int *)v5 + 6);
  v10 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0), 0);
  *(__m128i *)(a1 + 3032) = v10;
  *(__m128i *)(a1 + 3048) = v10;
  *(_WORD *)(v3 + 4LL * *(int *)(a1 + 4LL * *(int *)(a1 + 5360) + 3064) + 2) = 0;
  v11 = *(_DWORD *)(a1 + 5360) + 1;
  result = v11;
  if ( v11 < 573LL )
  {
    v13 = 573LL - v11;
    v14 = (int *)(a1 + 3064 + 4LL * v11);
    do
    {
      v15 = *v14;
      v16 = v9;
      v17 = v15;
      result = (unsigned int)(v4 + 1);
      if ( *(unsigned __int16 *)(v3 + 4LL * *(unsigned __int16 *)(v3 + 4 * v15 + 2) + 2) + 1 <= (int)v9 )
      {
        result = (unsigned int)v4;
        v16 = *(unsigned __int16 *)(v3 + 4LL * *(unsigned __int16 *)(v3 + 4 * v15 + 2) + 2) + 1;
      }
      *(_WORD *)(v3 + 4 * v15 + 2) = v16;
      v4 = result;
      if ( (int)v15 <= v27 )
      {
        ++*(_WORD *)(a1 + 2LL * v16 + 3032);
        v18 = 0;
        if ( (int)v15 >= v8 )
          v18 = *(_DWORD *)(v7 + 4LL * ((int)v15 - v8));
        v19 = *(unsigned __int16 *)(v3 + 4 * v15);
        result = (unsigned int)(v19 * (v16 + v18));
        *(_DWORD *)(a1 + 5964) += result;
        if ( v6 )
        {
          result = v19 * (v18 + (unsigned int)*(unsigned __int16 *)(v6 + 4 * v17 + 2));
          *(_DWORD *)(a1 + 5968) += result;
        }
      }
      ++v14;
      --v13;
    }
    while ( v13 );
    if ( v4 )
    {
      do
      {
        v20 = v9 - 1;
        if ( !*(_WORD *)(a1 + 2 * v9 + 3030) )
        {
          do
            v21 = v20--;
          while ( !*(_WORD *)(a1 + 2 * v21 + 3030) );
        }
        result = v20;
        v4 -= 2;
        --*(_WORD *)(a1 + 2LL * v20 + 3032);
        *(_WORD *)(a1 + 2LL * v20 + 3034) += 2;
        --*(_WORD *)(a1 + 2 * v9 + 3032);
      }
      while ( v4 > 0 );
      if ( (_DWORD)v9 )
      {
        v22 = 573LL;
        do
        {
          result = (int)v9;
          v23 = *(unsigned __int16 *)(a1 + 2LL * (int)v9 + 3032);
          if ( *(_WORD *)(a1 + 2LL * (int)v9 + 3032) )
          {
            v24 = (int *)(a1 + 3064 + 4 * v22);
            do
            {
              --v24;
              --v22;
              result = *v24;
              if ( (int)result <= v27 )
              {
                v25 = *v24;
                result = *(unsigned __int16 *)(v3 + 4 * result + 2);
                if ( (_DWORD)result != (_DWORD)v9 )
                {
                  v26 = v9 - result;
                  result = *(unsigned __int16 *)(v3 + 4 * v25);
                  *(_DWORD *)(a1 + 5964) += result * v26;
                  *(_WORD *)(v3 + 4 * v25 + 2) = v9;
                }
                --v23;
              }
            }
            while ( v23 );
          }
          LODWORD(v9) = v9 - 1;
        }
        while ( (_DWORD)v9 );
      }
    }
  }
  return result;
}
