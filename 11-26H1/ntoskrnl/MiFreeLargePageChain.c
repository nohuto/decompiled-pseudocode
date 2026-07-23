/*
 * XREFs of MiFreeLargePageChain @ 0x1403D35CC
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x140367634 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiConvertBaseLargePage @ 0x140476F40 (MiConvertBaseLargePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall MiFreeLargePageChain(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *result; // rax
  __int64 v5; // r8
  __int64 *i; // rbx
  __int64 v7; // rdx
  __int64 CurrentIrql; // rcx
  int v9; // r9d
  ULONG_PTR v10; // rcx
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  result = MiUnlinkPageChainHead(a1);
  for ( i = result; result; i = result )
  {
    v7 = (unsigned __int128)((__int64)(i + 0x44000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    if ( (_BYTE)v2 == 2 )
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( i[3] < 0 );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( i[3] < 0 );
      }
    }
    MiConvertBaseLargePage(i, 0LL, v5, (i[2] & 0x3E0) != 0);
    v10 = (__int64)(i + 0x44000000000LL) / 48;
    if ( (i[5] & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64(i + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v10, v9 + 1);
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v10);
      _InterlockedAnd64(i + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (unsigned __int8)v2 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
      __writecr8(v2);
    }
    result = MiUnlinkPageChainHead(a1);
  }
  return result;
}
