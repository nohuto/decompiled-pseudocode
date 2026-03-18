/*
 * XREFs of ExDeletePoolTagTable @ 0x1406CBB38
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf

  v1 = a1;
  v2 = *((_QWORD *)&stru_140EFEF90.CurrentRunTime + a1);
  v3 = 80 * (PoolTrackTableSize + 1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v5 = KiIrqlFlags == 0;
  *((_QWORD *)&stru_140EFEF90.CurrentRunTime + v1) = 0LL;
  if ( !v5 )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v2, v3);
}
