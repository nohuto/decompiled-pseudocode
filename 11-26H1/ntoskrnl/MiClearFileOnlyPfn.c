/*
 * XREFs of MiClearFileOnlyPfn @ 0x140524B44
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeFileOnlyReaper @ 0x140524C90 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiClearFileOnlyPfn(__m128i *a1)
{
  unsigned __int32 v2; // eax
  __int32 v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v8; // [rsp+20h] [rbp-30h] BYREF
  __m128i v9; // [rsp+30h] [rbp-20h] BYREF
  __m128i v10; // [rsp+40h] [rbp-10h] BYREF

  v9.m128i_i64[0] = 0LL;
  v10.m128i_i64[0] = 4521984LL;
  v9.m128i_i64[1] = 0xC000000000000000uLL;
  v10.m128i_i64[1] = ((unsigned __int64)(unsigned __int16)MiSystemPartition << 43) ^ ((unsigned __int64)(unsigned __int16)MiSystemPartition << 43) & 0xFFE007FFFFFFFFFFuLL | 0x40000000000000LL;
  v2 = (unsigned __int32)a1[2].m128i_i32[0] >> 30;
  v8 = 0LL;
  if ( (v2 & 1) != 0 )
    v10.m128i_i8[3] |= 0x40u;
  v3 = a1[2].m128i_i32[0];
  v10.m128i_i64[1] |= 0x20000000000000uLL;
  v10.m128i_i32[0] = v3 & 0xFF000000 ^ (v10.m128i_i32[0] ^ v3 & 0xFF000000) & 0xF8FFFFFF;
  *a1 = _mm_loadu_si128(&v8);
  a1[1] = _mm_loadu_si128(&v9);
  a1[2] = _mm_loadu_si128(&v10);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E39B60);
  a1->m128i_i64[0] = qword_140E2D298;
  qword_140E2D298 = (__int64)a1;
  if ( !qword_140E2D2A0 )
    qword_140E2D2A0 = (__int64)a1;
  ++qword_140E2D2A8;
  MiWakeFileOnlyReaper(v5, v4, v6, v7);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
}
