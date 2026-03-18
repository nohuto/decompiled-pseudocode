/*
 * XREFs of IommupDeviceUnregisterFaultCallback @ 0x1405A0660
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140587958 (HalpIommuDeleteDevice.c)
 *     IommuSetDeviceFaultReportingEx @ 0x14059FA00 (IommuSetDeviceFaultReportingEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
