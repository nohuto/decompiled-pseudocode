/*
 * XREFs of MiDeleteDynamicPfns @ 0x1406ECE7C
 * Callers:
 *     MiUnmapPfns @ 0x14086D48C (MiUnmapPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageCombiningActive @ 0x1402A8AC0 (MiPageCombiningActive.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 */

__int64 __fastcall MiDeleteDynamicPfns(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rbx
  ULONG *v7; // r10
  unsigned __int64 v8; // r8
  int v9; // edx
  __m128i *v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // di
  int v13; // r14d
  __m128i *v14; // r12
  int v15; // eax
  int v16; // edx
  __m128i v17; // xmm0
  __int64 result; // rax
  __m128i v19; // [rsp+20h] [rbp-60h] BYREF
  __m128i v20; // [rsp+30h] [rbp-50h] BYREF
  __m128i v21; // [rsp+40h] [rbp-40h] BYREF
  __m128i v22; // [rsp+50h] [rbp-30h] BYREF
  __m128i v23; // [rsp+60h] [rbp-20h] BYREF
  __m128i v24; // [rsp+70h] [rbp-10h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h]
  int v26; // [rsp+D0h] [rbp+50h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = 48 * a1 - 0x220000000000LL;
  if ( (a3 & 2) == 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, a1, a2, 0);
  v7 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  v23.m128i_i64[1] = 0x8000000000000000uLL;
  v20.m128i_i64[1] = 0x8000000000000000uLL;
  v8 = (unsigned __int64)*(unsigned __int16 *)v7 << 43;
  v21.m128i_i32[0] = v21.m128i_i32[0] & 0xFFF8FFFF | 0x50000;
  v25 = (__int64)v7;
  v9 = v21.m128i_i32[2];
  v21.m128i_i64[1] = v8 ^ (v21.m128i_i64[1] ^ v8) & 0xFFE007FFFFFFFFFFuLL;
  if ( v7 != &MiSystemPartition )
    MiUpdatePartitionChildPageCounts(
      &MiSystemPartition,
      v7,
      a1,
      a2,
      v19.m128i_i64[0],
      v19.m128i_i64[1],
      v20.m128i_i64[0],
      v20.m128i_i64[1],
      v21.m128i_i64[0],
      v21.m128i_i64[1],
      v22.m128i_i64[0],
      v22.m128i_i64[1],
      v23.m128i_i64[0],
      v23.m128i_i64[1],
      v24.m128i_i64[0],
      v24.m128i_i64[1]);
  v10 = (__m128i *)(48 * a2 + v6);
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
  }
  if ( a2 )
  {
    v13 = a3 & 0x20;
    v14 = v10 + 2;
    while ( 1 )
    {
      v14 -= 3;
      v26 = 0;
      v10 -= 3;
      while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( v10[1].m128i_i64[1] < 0 );
      }
      if ( (v10[2].m128i_i32[0] & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(v10, 0LL, 0LL);
      LOBYTE(v15) = MiPageCombiningActive(v25);
      if ( !v15 )
        break;
      *v10 = _mm_loadu_si128(&v19);
      v10[1] = _mm_loadu_si128(&v20);
      v10[2] = _mm_loadu_si128(&v21);
      MiAbortCombineScan((__int64)v10);
      if ( v13 )
        goto LABEL_21;
LABEL_23:
      _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v11 & 0x3F) == 0 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
        }
      }
      if ( v11 >= a2 )
        goto LABEL_31;
    }
    if ( v13 )
    {
LABEL_21:
      *v10 = _mm_loadu_si128(&v22);
      v10[1] = _mm_loadu_si128(&v23);
      v17 = _mm_loadu_si128(&v24);
    }
    else
    {
      *v10 = _mm_loadu_si128(&v19);
      v10[1] = _mm_loadu_si128(&v20);
      v17 = _mm_loadu_si128(&v21);
    }
    v10[2] = v17;
    goto LABEL_23;
  }
LABEL_31:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
