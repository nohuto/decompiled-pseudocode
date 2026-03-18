/*
 * XREFs of HalpCmciResetStateAMD @ 0x14045480C
 * Callers:
 *     HalpCmciHandler @ 0x14052080C (HalpCmciHandler.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140454888 (HalpCmciSetProcessorConfigAMD.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
