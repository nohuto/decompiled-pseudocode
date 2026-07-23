/*
 * XREFs of MiDeleteTopLevelPage @ 0x14047DA4C
 * Callers:
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiClearContainingMapping @ 0x14047DBC0 (MiClearContainingMapping.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int IsZero; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v2 = 48 * a2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  IsZero = 2;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  LODWORD(v8) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  MiClearContainingMapping(v2);
  *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
    goto LABEL_8;
  v5 = (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v2 + 24) = v5 ^ (*(_QWORD *)(v2 + 24) ^ v5) & 0xC000000000000000uLL;
  if ( !v5 )
    MiPfnShareCountIsZero(v2, 0LL);
  if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
LABEL_8:
    MiBadShareCount(v2);
  v6 = (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v2 + 24) = v6 ^ (*(_QWORD *)(v2 + 24) ^ v6) & 0xC000000000000000uLL;
  if ( !v6 )
    IsZero = MiPfnShareCountIsZero(v2, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return IsZero;
}
