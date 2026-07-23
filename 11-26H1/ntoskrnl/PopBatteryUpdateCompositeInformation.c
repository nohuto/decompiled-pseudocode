/*
 * XREFs of PopBatteryUpdateCompositeInformation @ 0x1409BE914
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 PopBatteryUpdateCompositeInformation()
{
  __int64 v0; // rcx
  __m128i v1; // xmm2
  unsigned int v2; // r10d
  int v3; // r8d
  unsigned int v4; // r11d
  unsigned __int32 v5; // ebx
  int v6; // edx
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-60h]
  __m128i v19; // [rsp+50h] [rbp-30h]
  __m128i v20; // [rsp+60h] [rbp-20h]

  v0 = qword_140F10650;
  v1 = 0LL;
  v20 = 0LL;
  v2 = 0;
  v3 = 0;
  v19 = 0LL;
  if ( (__int64 *)qword_140F10650 == &qword_140F10650 )
  {
    v7 = _mm_cvtsi128_si32((__m128i)0LL);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v7 |= *(_DWORD *)(v0 + 48);
      v8 = *(_DWORD *)(v0 + 60);
      if ( v8 != -1 )
      {
        v6 += v8;
        v19.m128i_i32[3] = v6;
      }
      v9 = *(_DWORD *)(v0 + 64);
      if ( v9 != -1 )
        v3 += v9;
      if ( v5 < *(_DWORD *)(v0 + 68) )
        v5 = *(_DWORD *)(v0 + 68);
      if ( v2 < *(_DWORD *)(v0 + 72) )
        v2 = *(_DWORD *)(v0 + 72);
      v10 = *(_DWORD *)(v0 + 76);
      v0 = *(_QWORD *)v0;
      if ( v4 < v10 )
        v4 = v10;
    }
    while ( (__int64 *)v0 != &qword_140F10650 );
    v19.m128i_i32[0] = v7;
    v1 = v19;
    v20.m128i_i64[1] = __PAIR64__(v4, v2);
    v20.m128i_i32[1] = v5;
  }
  dword_140F106A8 = 0;
  xmmword_140F10688 = (__int128)v1;
  if ( !v3 )
    v3 = v6;
  v20.m128i_i32[0] = v3;
  xmmword_140F10698 = (__int128)v20;
  DbgPrintEx(
    0x92u,
    2u,
    "\n"
    "Composite Information\n"
    "|-- Capabilities        = 0x%08x\n"
    "|-- DesignedCapacity    = %u\n"
    "|-- FullChargedCapacity = %u\n"
    "|-- DefaultAlert1       = %u\n"
    "|-- DefaultAlert2       = %u\n"
    "|-- CriticalBias        = %u\n",
    v7,
    _mm_srli_si128(v1, 8).m128i_i32[1],
    v3,
    v20.m128i_i32[1],
    v2,
    _mm_srli_si128(v20, 8).m128i_i32[1]);
  PopAcquirePolicyLock(v12, v11);
  if ( HIBYTE(PpmIdlePolicyLock.Padding[4]) )
  {
    HIBYTE(PpmIdlePolicyLock.Padding[4]) = 0;
    PopResetCurrentPolicies();
  }
  return PopReleasePolicyLock(v14, v13, v15, v16, v18);
}
