/*
 * XREFs of KeFlushEntireTb @ 0x1405F0BC0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140CF9848 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiFlushAddressSpaceTb @ 0x14024FEF8 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14025128C (KxFlushEntireTb.c)
 *     ExFlushTb @ 0x14041D5A8 (ExFlushTb.c)
 *     KiPreprocessFlushTb @ 0x140430BB0 (KiPreprocessFlushTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  KiPreprocessFlushTb(1, 2LL, 2, &v5, &v6);
  if ( v5 )
  {
    LOBYTE(v2) = 1;
    LOBYTE(v1) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v1, v2);
  }
  else
  {
    result = KxFlushEntireTb(2LL, v0, v1);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(0, 0LL, 2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
