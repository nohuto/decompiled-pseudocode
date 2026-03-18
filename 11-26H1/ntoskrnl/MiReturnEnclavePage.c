/*
 * XREFs of MiReturnEnclavePage @ 0x140341F44
 * Callers:
 *     MiAllocateEnclavePages @ 0x1403378DC (MiAllocateEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     MiDeleteEnclavePages @ 0x140C01AD8 (MiDeleteEnclavePages.c)
 *     MiReturnReservedEnclavePages @ 0x140C01D98 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v3 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  *(_QWORD *)(v3 + 24) &= 0xFFFFFF0000000000uLL;
  MiInsertPageInFreeOrZeroedList(v2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
