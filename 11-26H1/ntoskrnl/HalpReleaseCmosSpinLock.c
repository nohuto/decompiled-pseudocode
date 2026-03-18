/*
 * XREFs of HalpReleaseCmosSpinLock @ 0x140451A74
 * Callers:
 *     HalSetBusDataByOffset @ 0x140439AB0 (HalSetBusDataByOffset.c)
 *     HalpWriteStdCmosData @ 0x1404511B0 (HalpWriteStdCmosData.c)
 *     HalpSetClockAfterSleep @ 0x140451214 (HalpSetClockAfterSleep.c)
 *     HalpSetClockBeforeSleep @ 0x140451288 (HalpSetClockBeforeSleep.c)
 *     HalpWriteCmosTime @ 0x14045130C (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x1404515F8 (HalpSetWakeAlarm.c)
 *     HalpReadRtcStdPCAT @ 0x140451740 (HalpReadRtcStdPCAT.c)
 *     HalpWriteRtcStdPCAT @ 0x1404517C0 (HalpWriteRtcStdPCAT.c)
 *     HalpReadCmosTime @ 0x140451878 (HalpReadCmosTime.c)
 *     HalpReadStdCmosData @ 0x140451A10 (HalpReadStdCmosData.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140451A90 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetSetCmosData @ 0x1404F4054 (HalpGetSetCmosData.c)
 *     HalpSetCmosData @ 0x1405014A4 (HalpSetCmosData.c)
 *     HalGetEnvironmentVariable @ 0x14057C330 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057C3D0 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x14057EDA0 (HalMakeBeep.c)
 *     x86BiosReadCmosPortByte @ 0x140580E18 (x86BiosReadCmosPortByte.c)
 *     x86BiosWriteCmosPortByte @ 0x140580F90 (x86BiosWriteCmosPortByte.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseCmosSpinLock()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( BYTE4(HalpDeviceBlockUnblockPushLock.TracingPrivate[0]) )
    _enable();
  return result;
}
