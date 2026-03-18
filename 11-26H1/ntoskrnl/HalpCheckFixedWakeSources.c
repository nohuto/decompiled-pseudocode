/*
 * XREFs of HalpCheckFixedWakeSources @ 0x140C0D340
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterAvailable @ 0x14046B360 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 */

__int64 HalpCheckFixedWakeSources()
{
  int v0; // edi
  unsigned __int8 UserAffinity; // bp
  int v2; // ebx
  __int16 v3; // si
  __int64 result; // rax
  __int16 v5; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(_DWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[8];
  UserAffinity = (unsigned __int8)HalpDeviceBlockUnblockPushLock.UserAffinity;
  v5 = 0;
  v2 = 0;
  v3 = 0;
  result = HalpAcpiPmRegisterAvailable(0);
  if ( (int)result >= 0 )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v5, 2u, 0LL);
    v3 = v5;
    result = HalpAcpiPmRegisterAvailable(3);
    if ( (int)result >= 0 )
    {
      result = HalpAcpiPmRegisterRead(3, 0, (__int64)&v5, 2u, 0LL);
      v3 |= v5;
    }
  }
  if ( (v0 & 0x10) == 0 )
  {
    result = 1LL;
    if ( (v3 & 0x100) != 0 )
      v2 = 1;
  }
  if ( (v0 & 0x20) == 0 && (v3 & 0x200) != 0 )
    v2 |= 2u;
  if ( (v0 & 0x40) == 0 && (v3 & 0x400) != 0 )
  {
    v2 |= 4u;
    if ( HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[16] )
    {
      if ( (v0 & 0x80u) == 0 || UserAffinity >= 4u && (v0 & 0x10000) == 0 )
        v2 &= ~4u;
    }
  }
  LODWORD(stru_140F11D08.Timer.TimerListEntry.Blink) |= v2;
  return result;
}
