/*
 * XREFs of MiInitializeAllResidentPageBasePfns @ 0x14028DA04
 * Callers:
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

signed __int64 __fastcall MiInitializeAllResidentPageBasePfns(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __m128i v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r12
  __m128i *v11; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int64 result; // rax
  __int8 v14; // r9
  char v15; // r10
  __m128i *v16; // rsi
  int v17; // r14d
  unsigned __int64 v18; // rcx
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  __m128i v20; // [rsp+30h] [rbp-38h] BYREF
  __m128i v21; // [rsp+40h] [rbp-28h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_140E2EC30);
  v20 = _mm_load_si128((const __m128i *)&xmmword_140E2EC40);
  v8 = _mm_load_si128((const __m128i *)&xmmword_140E2EC50);
  v9 = *a1;
  v10 = MiPageSizes[a4];
  v21.m128i_i32[0] = v8.m128i_i32[0];
  v21.m128i_i64[1] = (v9 << 43) ^ (v8.m128i_i64[1] ^ (v9 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v21.m128i_i32[1] = v8.m128i_i32[1] ^ (v8.m128i_i32[1] ^ ((unsigned __int8)(3 - a4) << 27)) & 0x18000000;
  v11 = (__m128i *)(48 * a2 - 0x220000000000LL);
  if ( a7 )
  {
    v20.m128i_i64[1] |= 0x8000000000000000uLL;
LABEL_3:
    CurrentIrql = 17;
    goto LABEL_4;
  }
  if ( (MiFlags & 0x30) == 0 )
    goto LABEL_3;
  v18 = 0x8000000000000000uLL;
  v20.m128i_i64[1] |= 0x8000000000000000uLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v18) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v18, 2LL);
  }
LABEL_4:
  result = v21.m128i_u32[0];
  v21.m128i_i32[0] ^= (v21.m128i_i32[0] ^ (a5 << 22)) & 0xC00000;
  v14 = v21.m128i_i8[2];
  v15 = v21.m128i_i8[2] & 0xF8 | 5;
  if ( !a6 )
  {
    result = MiUpdatePageFileHighInPte(v20.m128i_i64[0], 0xFFFFFFFD);
    v20.m128i_i64[0] = result;
  }
  v21.m128i_i8[2] = v15 ^ (v15 ^ v14) & 7;
  if ( a3 )
  {
    v16 = v11;
    do
    {
      v17 = 0;
      if ( !a7 )
      {
        result = MiFlags;
        if ( (MiFlags & 0x30) != 0 )
        {
          v17 = 1;
          a5 = 0;
          while ( _interlockedbittestandset64(&v11[1].m128i_i32[2], 0x3FuLL) )
          {
            do
            {
              KeYieldProcessorEx(&a5);
              result = v11[1].m128i_i64[1];
            }
            while ( result < 0 );
          }
        }
      }
      *v11 = _mm_loadu_si128(&si128);
      v11[1] = _mm_loadu_si128(&v20);
      v11[2] = _mm_loadu_si128(&v21);
      if ( v17 )
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64(&v11[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      }
      v16 += 3 * v10;
      v11 = v16;
      a3 -= v10;
    }
    while ( a3 );
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
