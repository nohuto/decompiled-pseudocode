/*
 * XREFs of IommupDeviceUnregisterFaultCallback @ 0x1405A2E70
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     IommuSetDeviceFaultReportingEx @ 0x1405A21F0 (IommuSetDeviceFaultReportingEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IommupDeviceUnregisterFaultCallback(__int64 a1)
{
  char v2; // si
  volatile LONG *v3; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  Interval.QuadPart = -10000LL;
  v2 = 1;
  v3 = (volatile LONG *)(a1 + 416);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    if ( !*(_BYTE *)(a1 + 420) )
    {
      v2 = 0;
      *(_QWORD *)(a1 + 96) = 0LL;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( !v2 )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
