/*
 * XREFs of MiRevertPrivateZeroFault @ 0x1404ED7F4
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiRevertPrivateZeroFault(unsigned __int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 PteShadow; // rax
  __int64 v4; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v6[0] = *(_QWORD *)(a1 + 16);
  if ( (v6[0] & 8) != 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~8uLL;
    PteShadow = v6[0];
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v6, v6[0]);
    v6[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
  }
  *(_QWORD *)(a1 + 16) &= ~4uLL;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v4 ^ ((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiLockAndDecrementShareCount(v2, 2LL);
}
