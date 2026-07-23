/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x180070BB8
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180070444 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180071028 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800E387C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157E60 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__m128i *a1, int a2)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // rdi
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 v7; // al
  unsigned __int64 v8; // xmm1_8
  __m128i v9; // [rsp+20h] [rbp-30h]
  __m128i v10; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF

  v12 = 0LL;
  v3 = *a1;
  v9 = *a1;
  if ( !a2 )
  {
    v7 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 3));
    v10.m128i_i32[3] = 0;
    if ( v7 )
      v10.m128i_i32[0] = v7 - 1;
    else
      v10.m128i_i32[0] = -1;
    v10.m128i_i32[1] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v3, 1));
    v10.m128i_i32[2] = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v3, 2));
    if ( (_mm_cvtsi128_si32(v3) & 8) != 0 )
      v10.m128i_i32[3] = 1;
    v8 = _mm_srli_si128(v3, 8).m128i_u64[0];
    v11 = v8;
    RtlpHpVaMgrCtxAllocatorDereference(&unk_1801C6958, &v10);
    if ( BYTE1(a1->m128i_i64[0]) == 5 )
    {
      v10 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v8, &v10);
    }
    return 0LL;
  }
  if ( v3.m128i_i8[1] == 5 )
  {
    v10 = *a1;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               &RtlpHpHeapVaCallbacksRegistrar,
               _mm_srli_si128(v3, 8).m128i_u64[0],
               &v12,
               &v10);
    if ( (int)result < 0 )
      return result;
    v4 = v12;
    v9.m128i_i64[1] = v12;
  }
  else
  {
    v4 = a1->m128i_u64[1];
  }
  v10.m128i_i32[3] = 0;
  if ( v9.m128i_i8[3] )
    v10.m128i_i32[0] = v9.m128i_u8[3] - 1;
  else
    v10.m128i_i32[0] = -1;
  v10.m128i_i32[1] = v9.m128i_u8[1];
  v10.m128i_i32[2] = v9.m128i_u8[2];
  if ( (v9.m128i_i8[0] & 8) != 0 )
    v10.m128i_i32[3] = 1;
  v11 = v4;
  v5 = RtlpHpVaMgrCtxAllocatorReference((__int64)&unk_1801C6958, (__int64)&v10);
  if ( v5 != -1 )
  {
    v9.m128i_i8[3] = v5 + 1;
    *a1 = v9;
    return 0LL;
  }
  if ( BYTE1(a1->m128i_i64[0]) == 5 )
  {
    v10 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v4, &v10);
  }
  return 3221225626LL;
}
