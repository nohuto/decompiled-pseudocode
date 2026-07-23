/*
 * XREFs of MiReadyLargeAwePageForFree @ 0x140707164
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 *     MiFreeAwePagesFromMdl @ 0x140706390 (MiFreeAwePagesFromMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiClearAweLargePageMetadata @ 0x140705C64 (MiClearAweLargePageMetadata.c)
 */

__int64 __fastcall MiReadyLargeAwePageForFree(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiClearAweLargePageMetadata(a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v3 + 1;
  v5 = (v3 ^ (v3 + 1)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = v4 ^ v5;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
