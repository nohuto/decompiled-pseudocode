/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x14022C3CC
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x14005593C (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1402F2CE8 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, signed int a3, __int64 a4, __int16 a5)
{
  __m128i *v7; // rdx
  signed int v8; // r11d
  __int32 v10; // esi
  int v11; // r10d
  __int32 v12; // r8d
  __int32 v13; // r9d
  int v14; // r13d
  int v15; // eax
  int v16; // r14d
  int v17; // r14d
  int *v18; // rcx
  __int8 *v19; // rbx
  int v20; // r15d
  int v21; // esi
  int v22; // edi
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  LONG v26; // eax
  LONG top; // ecx
  int v28; // eax
  int v29; // eax
  LONG left; // ecx
  int v31; // esi
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  signed int v34; // [rsp+38h] [rbp-C8h]
  HDC v35; // [rsp+40h] [rbp-C0h]
  __m128i v36; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v37[48]; // [rsp+60h] [rbp-A0h] BYREF

  v35 = a1;
  v34 = a3;
  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = v7->m128i_i32[2];
  v11 = _mm_cvtsi128_si32(*v7);
  v12 = HIDWORD(v7->m128i_i64[1]) - HIDWORD(v7->m128i_i64[0]);
  v36 = *v7;
  v13 = v10 - v11;
  if ( v12 < v10 - v11 )
  {
    v16 = 1;
    v33 = 1;
    v15 = v13 / v12;
    v14 = v13 / v12;
    v32 = v13 / v12;
  }
  else
  {
    v14 = 1;
    v32 = 1;
    v15 = v12 / v13;
    v16 = v12 / v13;
    v33 = v12 / v13;
  }
  v17 = a3 * v16;
  v18 = &v32;
  v19 = &v36.m128i_i8[12];
  if ( v12 >= v13 )
    v18 = &v33;
  *v18 = v15;
  v20 = v32;
  v21 = v10 - v32;
  v22 = v33;
  v23 = v36.m128i_i32[3] - v33;
  v36.m128i_i32[2] = v21;
  if ( v34 < v8 )
    v19 = &v36.m128i_i8[4];
  v36.m128i_i32[3] -= v33;
  if ( v11 <= v21 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v36.m128i_i32[1] > v23 )
      {
LABEL_29:
        if ( v8 )
          GrePolyPatBlt(v35, 0xF00021u, (struct _POLYPATBLT *)v37, v8);
        return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
      }
      v25 = 3 * v24;
      ++v8;
      ++v24;
      if ( (a5 & 0x800) != 0 )
      {
        if ( v22 > 1 )
        {
          v37[2 * v25] = v11;
          v37[2 * v25 + 2] = v20;
          if ( (a5 & 1) != 0 )
          {
            top = a2->top;
            v28 = v22 + *(_DWORD *)v19 - top;
          }
          else
          {
            top = *(_DWORD *)v19;
            v28 = a2->bottom - *(_DWORD *)v19;
          }
          v37[2 * v25 + 1] = top;
          v37[2 * v25 + 3] = v28;
          *(_QWORD *)&v37[2 * v25 + 4] = 0LL;
          goto LABEL_25;
        }
        *(_QWORD *)&v37[2 * v25 + 4] = 0LL;
        v37[2 * v25 + 1] = *(_DWORD *)v19;
        if ( (a5 & 2) != 0 )
        {
          v29 = a2->right - v11;
          v37[2 * v25] = v11;
        }
        else
        {
          left = a2->left;
          v37[2 * v25] = a2->left;
          v29 = v20 + v11 - left;
        }
        v37[2 * v25 + 2] = v29;
      }
      else
      {
        v26 = *(_DWORD *)v19;
        *(_QWORD *)&v37[2 * v25 + 4] = 0LL;
        v37[2 * v25 + 1] = v26;
        v37[2 * v25] = v11;
        v37[2 * v25 + 2] = v20;
      }
      v37[2 * v25 + 3] = v22;
LABEL_25:
      v31 = v11 + v14;
      v36.m128i_i32[0] = v11 + v14;
      *(_DWORD *)v19 -= v17;
      if ( v24 == 8 )
      {
        GrePolyPatBlt(v35, 0xF00021u, (struct _POLYPATBLT *)v37, 8u);
        v8 = 0;
        v24 = 0LL;
      }
      if ( v31 > v36.m128i_i32[2] )
        goto LABEL_29;
      v23 = v36.m128i_i32[3];
      v11 = v36.m128i_i32[0];
    }
  }
  return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
}
