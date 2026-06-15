/*
 * XREFs of sub_140058634 @ 0x140058634
 * Callers:
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 * Callees:
 *     sub_140056A90 @ 0x140056A90 (sub_140056A90.c)
 *     sub_1400582D0 @ 0x1400582D0 (sub_1400582D0.c)
 *     sub_140058A10 @ 0x140058A10 (sub_140058A10.c)
 *     sub_140058EC8 @ 0x140058EC8 (sub_140058EC8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140058634(__int64 a1, unsigned int a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebp
  __m128i v11; // xmm1
  __int64 v12; // r8
  __int64 v13; // rdx
  __m128i v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+58h] [rbp-30h] BYREF

  v9 = sub_140058EC8(&v17, a1, a5);
  v10 = 1;
  v11 = *(__m128i *)v9;
  v16 = *(_QWORD *)(v9 + 16);
  v15 = *(__m128i *)v9;
  if ( qword_1400E8520 && (!a5 || a5 - 100 <= 0x31) )
  {
    sub_1400B6010(a2);
    v11 = v15;
  }
  if ( _mm_cvtsi128_si32(v11) )
  {
    sub_1400582D0((char *)&dword_1400E7BC8, a2, a1);
    v11 = v15;
  }
  v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
  if ( (_DWORD)v12 )
    sub_140058A10(a2, (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)), v12);
  if ( !(_DWORD)v16 )
    sub_140056A90((__int64)&dword_1400E7BC8);
  if ( a3 )
  {
    v13 = a5;
    LODWORD(v13) = a5 | 0x80000000;
    if ( !a4 )
      v13 = a5;
    sub_140058A10(a2, v13, 0LL);
  }
  if ( (_DWORD)v16 )
  {
    return 0;
  }
  else if ( qword_1400E8530 )
  {
    sub_1400B6010(a2);
  }
  return v10;
}
