/*
 * XREFs of VrpUpdateKeyInformation @ 0x1409394EC
 * Callers:
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140938F20 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  _DWORD *v11; // r14
  unsigned int *v12; // r13
  __m128i *v13; // rbp
  unsigned int v14; // ecx
  void *v15; // r12
  unsigned int v16; // edx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  _WORD *v20; // r8
  int *v21; // r9
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // r8
  __int16 v24; // ax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // xmm0_8
  _WORD *v27; // r11
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rbx
  int *v31; // [rsp+20h] [rbp-48h]
  __m128i v32; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v32 = 0LL;
  switch ( a1 )
  {
    case 0:
      v21 = a2 + 3;
      v14 = 16;
      v15 = a2 + 4;
LABEL_31:
      v31 = v21;
      v22 = _mm_cvtsi128_si32(*a5);
      v32 = *a5;
      v23 = v22;
      v24 = 0;
      v25 = v23 >> 1;
      v26 = _mm_srli_si128(v32, 8).m128i_u64[0];
      v32.m128i_i16[0] = 0;
      if ( v25 )
      {
        v27 = (_WORD *)(v26 - 2 + 2 * v25);
        do
        {
          if ( *v27 == 92 )
            break;
          v24 += 2;
          --v27;
          --v25;
        }
        while ( v25 );
        v32.m128i_i16[0] = v24;
      }
      v32.m128i_i16[1] = v24;
      v13 = &v32;
      v32.m128i_i64[1] = v26 + 2 * v25;
      if ( a1 == 1 )
      {
        v18 = *a4;
        if ( *a4 < v14 )
          return (unsigned int)-1073741789;
        v16 = v18 + v32.m128i_u16[0];
        if ( v16 < v18 )
        {
          *a4 = -1;
          return (unsigned int)-2147483643;
        }
        v31 = v21;
        goto LABEL_6;
      }
LABEL_5:
      v16 = (_DWORD)v15 + v13->m128i_u16[0] - (_DWORD)a2;
LABEL_6:
      *a4 = v16;
      if ( a3 >= v14 )
      {
        if ( a3 >= v16 )
        {
          if ( !v11 )
            goto LABEL_9;
          v28 = *v12;
          if ( !*v12 )
            goto LABEL_9;
          v29 = (unsigned int)*v11;
          if ( (unsigned int)v29 + v28 >= (unsigned int)v29 && (unsigned int)v29 + v28 <= a3 )
          {
            v30 = (v13->m128i_u16[0] + 27) & 0xFFFFFFFC;
            memmove((char *)a2 + v30, (char *)a2 + v29, v28);
            memset_0((char *)a2 + v30 + *v12, 0, a3 - (_DWORD)v30 - *v12);
            *v11 = v30;
LABEL_9:
            memmove(v15, (const void *)v13->m128i_i64[1], v13->m128i_u16[0]);
            *v31 = v13->m128i_u16[0];
            return v6;
          }
        }
        return (unsigned int)-2147483643;
      }
      return (unsigned int)-1073741789;
    case 1:
      v11 = a2 + 3;
      v14 = 24;
      v12 = (unsigned int *)(a2 + 4);
      v21 = a2 + 5;
      v15 = a2 + 6;
      goto LABEL_31;
    case 3:
      v13 = a5;
      v14 = 4;
      v31 = a2;
      v15 = a2 + 1;
      goto LABEL_5;
  }
  if ( a1 != 4 )
  {
    if ( a1 != 8 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v19 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v19 )
  {
    v20 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v19);
    do
    {
      if ( *v20 == 92 )
        break;
      --v20;
      --v19;
    }
    while ( v19 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v19;
  return v6;
}
