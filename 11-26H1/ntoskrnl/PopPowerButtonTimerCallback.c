/*
 * XREFs of PopPowerButtonTimerCallback @ 0x14060FE10
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb);
  if ( (PopPdcDeviceListLock.WaitBlockFill6[104] & 1) != 0
    && *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[108] == a2 )
  {
    *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[104] = PopPdcDeviceListLock.WaitBlockFill6[104] & 1 | ((*(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[104] & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&PopPdcDeviceListLock.WaitBlockFill11[64], CriticalWorkQueue);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb);
}
