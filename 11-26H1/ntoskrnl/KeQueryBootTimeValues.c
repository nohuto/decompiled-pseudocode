/*
 * XREFs of KeQueryBootTimeValues @ 0x1404CD5EC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PipHardwareConfigInit @ 0x140CC1BEC (PipHardwareConfigInit.c)
 *     EtwpFixBootSystemTime @ 0x140CE0810 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE0F50 (EtwpInitializeBootTimeStamps.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBootTimeValues(_QWORD *a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  _QWORD *v5; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *v5 = MEMORY[0xFFFFF78000000014];
  *a2 = KeBootTime;
  *a3 = KeBootTimeBias;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
