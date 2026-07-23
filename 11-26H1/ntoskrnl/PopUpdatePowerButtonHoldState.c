/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1404FE890
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1406067D0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 */

void __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  KIRQL v4; // di
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << (BYTE4(PopPdcDeviceListLock.QueueListEntry.Blink) + LOBYTE(PopPdcDeviceListLock.NextProcessor));
  if ( a1 )
  {
    PopPdcDeviceListLock.Process = (_KPROCESS *)((__int64)PopPdcDeviceListLock.Process | v5);
    v3 = 1;
    ++PopPdcDeviceListLock.NextProcessor;
  }
  else
  {
    PopPdcDeviceListLock.Process = (_KPROCESS *)((__int64)PopPdcDeviceListLock.Process & ~v5);
    ++HIDWORD(PopPdcDeviceListLock.QueueListEntry.Blink);
  }
  if ( v3 != (PopPdcDeviceListLock.WaitBlockFill6[104] & 1) )
  {
    if ( a1 )
    {
      ++*(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[108];
      *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[104] |= 1u;
    }
    else
    {
      *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[104] = 0;
    }
    PopQueueWorkItem((__int64)&PopPdcDeviceListLock.WaitBlockFill11[64], CriticalWorkQueue);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb, v4);
}
