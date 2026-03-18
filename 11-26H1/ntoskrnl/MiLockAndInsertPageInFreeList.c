/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140293098
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 *     MiHandleForkValidPteCopy @ 0x14030DAD8 (MiHandleForkValidPteCopy.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1407102D0 (MiComputeCacheAttributeSpeeds.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 *     MiFreeBootPageTable @ 0x140CF2B30 (MiFreeBootPageTable.c)
 *     MxFreeEmptyBootPageTable @ 0x140CF6AA4 (MxFreeEmptyBootPageTable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v3 = (a1 + 0x220000000000LL) / 48;
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v2);
    }
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
  }
  MiInsertPageInFreeOrZeroedList(v3, 2LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
