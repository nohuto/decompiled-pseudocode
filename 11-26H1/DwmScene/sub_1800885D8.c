/*
 * XREFs of sub_1800885D8 @ 0x1800885D8
 * Callers:
 *     sub_18008966C @ 0x18008966C (sub_18008966C.c)
 *     sub_1800896CC @ 0x1800896CC (sub_1800896CC.c)
 * Callees:
 *     sub_180077FD8 @ 0x180077FD8 (sub_180077FD8.c)
 *     sub_180087CE4 @ 0x180087CE4 (sub_180087CE4.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 *     sub_1800896FC @ 0x1800896FC (sub_1800896FC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800885D8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17[4]; // [rsp+50h] [rbp-20h] BYREF

  sub_180087CE4(v17);
  v5 = 0LL;
  HIDWORD(v15) = 1065353216;
  do
  {
    v6 = 0LL;
    *((float *)&v15 + 2) = (float)(int)v5 * 0.14285715;
    v7 = v5 << 10;
    do
    {
      v8 = 0LL;
      *((float *)&v15 + 1) = (float)(int)v6 * 0.14285715;
      v9 = v7;
      do
      {
        *(float *)&v15 = (float)(int)v8 * 0.14285715;
        v16 = v15;
        v10 = *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800887CFLL);
        }
        (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v14, &v16);
        v14 = _mm_min_ps(_mm_max_ps(v14, (__m128)xmmword_1800FA320), (__m128)xmmword_1800FA310);
        *(__m128 *)(v17[0] + v9) = v14;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < 8 );
      ++v6;
      v7 += 128LL;
    }
    while ( v6 < 8 );
    ++v5;
  }
  while ( v5 < 8 );
  sub_1800896FC(a1, 8LL, v17);
  sub_18008819C(a1);
  result = sub_180077FD8((__int64)v17);
  v13 = *(_QWORD *)(a3 + 56);
  if ( v13 )
  {
    LOBYTE(v12) = v13 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
