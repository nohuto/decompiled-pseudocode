/*
 * XREFs of RtlAppendPathElement @ 0x1800991B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180099740 (RtlMultiAppendUnicodeStringBuffer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAppendPathElement(int a1, unsigned __int16 *a2, __m128i *a3)
{
  __int128 v3; // xmm2
  __int16 v5; // bx
  char v6; // r15
  __int16 v7; // r10
  __int16 v8; // si
  __int16 v9; // di
  __int64 result; // rax
  __int16 v11; // dx
  __m128i v12; // xmm1
  unsigned int i; // ecx
  __int16 *v14; // r14
  __int16 v15; // r8
  __int16 v16; // r8
  __int16 *v17; // xmm0_8
  unsigned __int16 v18; // r8
  __int16 v19; // r9
  const wchar_t *v20; // rax
  __int16 *v21; // rax
  __m128i v22; // [rsp+28h] [rbp-39h]
  __int128 v23; // [rsp+38h] [rbp-29h]
  __int128 v24; // [rsp+48h] [rbp-19h]
  _OWORD v25[3]; // [rsp+58h] [rbp-9h] BYREF
  int v26; // [rsp+88h] [rbp+27h] BYREF
  __int16 v27; // [rsp+8Ch] [rbp+2Bh]
  __int16 v28; // [rsp+8Eh] [rbp+2Dh] BYREF

  v3 = RtlpEmptyString;
  v26 = 0;
  v5 = 0;
  v28 = 0;
  v6 = a1;
  v27 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v23 = RtlpEmptyString;
  *(_QWORD *)&v24 = RtlpEmptyString;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a3 )
    return 3221225485LL;
  v11 = (a1 & 1) != 0 ? 92 : 47;
  if ( !a3->m128i_i16[0] )
    return 0LL;
  v12 = *a3;
  v22 = *a3;
  if ( *a2 )
  {
    for ( i = 0; i < 3 && i < *a2 >> 1; ++i )
    {
      v14 = (__int16 *)*((_QWORD *)a2 + 1);
      v15 = v14[i];
      if ( v15 == v11 || v15 == 92 )
      {
        if ( (v6 & 2) != 0 )
        {
          v7 = v14[i];
          LOWORD(v26) = v7;
        }
        else
        {
          v7 = *v14;
          LOWORD(v26) = *v14;
        }
        break;
      }
    }
    v16 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
    if ( v16 == v11 || v16 == 92 )
    {
      v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1) - 2);
      HIWORD(v26) = v8;
    }
  }
  v17 = (__int16 *)_mm_srli_si128(v12, 8).m128i_u64[0];
  if ( *v17 == v11 || *v17 == 92 )
  {
    v9 = *v17;
    v27 = *v17;
  }
  v18 = _mm_cvtsi128_si32(v12);
  v19 = v17[((unsigned __int64)v18 >> 1) - 1];
  if ( v19 == v11 || v19 == 92 )
  {
    v5 = v17[((unsigned __int64)v18 >> 1) - 1];
    v28 = v5;
  }
  if ( v8 )
  {
    if ( !v5 )
    {
      LOWORD(v24) = 2;
      v20 = (const wchar_t *)&v26 + 1;
      if ( (v6 & 1) != 0 )
        v20 = L"\\";
      *((_QWORD *)&v24 + 1) = v20;
      v3 = v24;
    }
    if ( v9 )
    {
      v22.m128i_i64[1] = (__int64)(v17 + 1);
      v22.m128i_i16[1] -= 2;
      v22.m128i_i16[0] = v18 - 2;
      v12 = v22;
    }
  }
  else if ( !v9 )
  {
    LOWORD(v23) = 2;
    *((_QWORD *)&v23 + 1) = L"\\";
    if ( (v6 & 1) == 0 )
    {
      if ( v5 )
      {
        v21 = &v28;
      }
      else
      {
        if ( !v7 )
          goto LABEL_30;
        v21 = (__int16 *)&v26;
      }
      *((_QWORD *)&v23 + 1) = v21;
    }
  }
LABEL_30:
  v25[0] = v23;
  v25[1] = v12;
  v25[2] = v3;
  result = RtlMultiAppendUnicodeStringBuffer(a2, 3LL, v25);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
