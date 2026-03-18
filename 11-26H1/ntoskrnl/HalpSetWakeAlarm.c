/*
 * XREFs of HalpSetWakeAlarm @ 0x1404515F8
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x140594734 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliSetWakeAlarm @ 0x140C0A6E0 (HaliSetWakeAlarm.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140451A90 (HalpAcquireCmosSpinLockAndWait.c)
 */

__int64 __fastcall HalpSetWakeAlarm(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  unsigned __int8 v7; // al

  HalpAcquireCmosSpinLockAndWait();
  v4 = a2[10];
  __outbyte(0x70u, 1u);
  __outbyte(0x71u, v4 + 6 * (v4 / 0xA));
  v5 = a2[8];
  __outbyte(0x70u, 3u);
  __outbyte(0x71u, v5 + 6 * (v5 / 0xA));
  v6 = a2[6];
  __outbyte(0x70u, 5u);
  __outbyte(0x71u, v6 + 6 * ((unsigned int)v6 / 0xA));
  if ( HalpDeviceBlockUnblockPushLock.SchedulerApc.Size > 9u )
  {
    v6 = a2[4];
    __outbyte(0x70u, HalpDeviceBlockUnblockPushLock.SchedulerApc.Size);
    __outbyte(0x71u, v6 + 6 * ((unsigned int)v6 / 0xA));
    if ( HalpDeviceBlockUnblockPushLock.SchedulerApc.SpareByte1 > 9u )
    {
      v6 = a2[2];
      __outbyte(0x70u, HalpDeviceBlockUnblockPushLock.SchedulerApc.SpareByte1);
      __outbyte(0x71u, v6 + 6 * ((unsigned int)v6 / 0xA));
    }
  }
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  LOBYTE(v6) = v7 & 0x41 | 0x22;
  __outbyte(0x71u, v6);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock(v6, 113LL, v3);
  return 0LL;
}
