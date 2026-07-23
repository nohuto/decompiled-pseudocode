/*
 * XREFs of HalpReleaseCmosSpinLock @ 0x140449BA4
 * Callers:
 *     HalSetBusDataByOffset @ 0x14042C360 (HalSetBusDataByOffset.c)
 *     HalpWriteStdCmosData @ 0x1404492E0 (HalpWriteStdCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140449344 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x1404493B8 (HalpSetClockBeforeSleep.c)
 *     HalpWriteCmosTime @ 0x14044943C (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x140449728 (HalpSetWakeAlarm.c)
 *     HalpReadRtcStdPCAT @ 0x140449870 (HalpReadRtcStdPCAT.c)
 *     HalpWriteRtcStdPCAT @ 0x1404498F0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadCmosTime @ 0x1404499A8 (HalpReadCmosTime.c)
 *     HalpReadStdCmosData @ 0x140449B40 (HalpReadStdCmosData.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140449BC0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1404ED634 (HalpGetSetCmosData.c)
 *     HalpSetCmosData @ 0x1404FAC94 (HalpSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x14057E860 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057E900 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x1405812C0 (HalMakeBeep.c)
 *     x86BiosReadCmosPortByte @ 0x140583338 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x1405834B0 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseCmosSpinLock()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.WriteTransferCount) )
    _enable();
  return result;
}
