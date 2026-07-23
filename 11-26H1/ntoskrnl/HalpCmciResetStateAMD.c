/*
 * XREFs of HalpCmciResetStateAMD @ 0x14044C93C
 * Callers:
 *     HalpCmciHandler @ 0x140522EB0 (HalpCmciHandler.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14044C9B8 (HalpCmciSetProcessorConfigAMD.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpCmciResetStateAMD(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
  }
  HalpCmciSetProcessorConfigAMD(v1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
