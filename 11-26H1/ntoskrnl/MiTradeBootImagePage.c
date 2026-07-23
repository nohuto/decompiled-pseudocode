/*
 * XREFs of MiTradeBootImagePage @ 0x140D071EC
 * Callers:
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x140293AD0 (MiCopyPfnEntryEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiTransformValidPteUsingAccessedBit @ 0x140344608 (MiTransformValidPteUsingAccessedBit.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     KeCopyPrivilegedPage @ 0x1404C3DB4 (KeCopyPrivilegedPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradeBootImagePage(volatile unsigned __int64 *a1, ULONG_PTR a2)
{
  volatile unsigned __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  __m128i *v5; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // r15d
  int valid; // edi
  char v9; // al
  __int64 v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+48h]
  int v15; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+58h]

  v14 = a2;
  v2 = *a1;
  v12 = 0LL;
  v3 = (v2 >> 12) & 0xFFFFFFFFFFLL;
  v16 = (__int64)((_QWORD)a1 << 25) >> 16;
  v4 = 48 * v3 - 0x220000000000LL;
  v5 = (__m128i *)(48 * a2 - 0x220000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v15 = 0;
  while ( _interlockedbittestandset64(&v5[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( v5[1].m128i_i64[1] < 0 );
  }
  MiCopyPfnEntryEx(v5, (const __m128i *)(48 * v3 - 0x220000000000LL), 0);
  v7 = 0;
  if ( (MiFlags & 0x10000) == 0 || ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
  {
    v7 = (MiFlags & 0x10000) != 0 ? 38 : 4;
    MiCopyPage(v14, (v2 >> 12) & 0xFFFFFFFFFFLL, v7);
    if ( (v7 & 0x20) != 0 )
    {
      valid = 1;
      goto LABEL_20;
    }
  }
  else
  {
    *(_QWORD *)&v12 = v16;
    KeCopyPrivilegedPage(v14, (int)&v12, v2 >> 12, (int)&v12, 0LL, 1);
  }
  valid = MiTransformValidPteUsingAccessedBit(
            (volatile signed __int64 *)a1,
            (unsigned __int64)a1,
            (v14 << 12) ^ (v2 ^ (v14 << 12)) & 0xFFF0000000000FFFuLL,
            0x40u,
            0);
  if ( !valid )
  {
    if ( !v7 )
    {
      v12 = v16;
      KeCopyPrivilegedPage(v3, (int)&v12, v14, (int)&v12, 0LL, 1);
    }
    v4 = (__int64)v5;
    v5 = (__m128i *)(48 * v3 - 0x220000000000LL);
  }
LABEL_20:
  *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
  if ( valid )
  {
    _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    MiFlushSingleTbEntry(v16, 0xFFFFFFFFLL);
    if ( (MiFlags & 0x10000) == 0 && ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v4, 12LL);
  }
  else
  {
    if ( v7 )
      MiCopyPage(v3, v14, v7);
    _InterlockedAnd64(&v5[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  v9 = *(_BYTE *)(v4 + 34);
  *(_BYTE *)(v4 + 35) &= ~8u;
  if ( (v9 & 7) != 6 )
    MiBadShareCount(v4);
  v10 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = ((v10 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v10 ^ ((v10 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v10 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    result = MiPfnShareCountIsZero(v4, 0LL);
  else
    result = *(_QWORD *)(v4 + 8);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
