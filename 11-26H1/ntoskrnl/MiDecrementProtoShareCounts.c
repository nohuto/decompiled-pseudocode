/*
 * XREFs of MiDecrementProtoShareCounts @ 0x1406FE214
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDecrementProtoShareCounts(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    v4 = v3 + 24;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v7);
        while ( *(__int64 *)v4 < 0 );
      }
      if ( (*(_BYTE *)(v4 + 10) & 7) != 6 )
        MiBadShareCount(v3);
      a2 = (*(_QWORD *)v4 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v4 = a2 ^ (*(_QWORD *)v4 ^ a2) & 0xC000000000000000uLL;
      if ( !a2 )
        MiPfnShareCountIsZero(v3, 0LL);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v4, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      v3 += 48LL;
      v4 += 48LL;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
