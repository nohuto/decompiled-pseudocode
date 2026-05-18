/*
 * XREFs of sub_1800262D4 @ 0x1800262D4
 * Callers:
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180053E8C @ 0x180053E8C (sub_180053E8C.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800262D4(__int64 a1)
{
  __int64 v2; // r14
  __m128i *p_si128; // rdi
  unsigned __int32 v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 *result; // rax
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h]
  __m128i si128; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+4Ch] [rbp-34h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 3984);
  sub_180012BF8(a1 + 8, &v14);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801914B0);
  v12 = 4;
  v13 = 5;
  p_si128 = &si128;
  do
  {
    v4 = p_si128->m128i_i32[0];
    v5 = sub_180012C40(&v16, &v14);
    sub_180024B24(v2, &v9, v5);
    sub_180029310(v9, 2LL, 0LL);
    sub_180053E8C(v9, v4, v6, a1);
    v7 = sub_180012C40(&v17, &v9);
    sub_18006BC20(a1 + 608, v7, v4);
    if ( v10 )
      sub_180010EC8(v10);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    result = &v14;
  }
  while ( p_si128 != (__m128i *)&v14 );
  if ( v15 )
    return (__int64 *)sub_180010EC8(v15);
  return result;
}
