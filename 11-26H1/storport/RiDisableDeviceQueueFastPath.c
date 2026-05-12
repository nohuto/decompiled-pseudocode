/*
 * XREFs of RiDisableDeviceQueueFastPath @ 0x14002DED0
 * Callers:
 *     RaidDeleteDeviceQueueEntry @ 0x140012998 (RaidDeleteDeviceQueueEntry.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 *     RaidLunQueueWaitForQuiescence @ 0x14002DD9C (RaidLunQueueWaitForQuiescence.c)
 *     RaidRemovePendingDeviceQueue @ 0x140057CFC (RaidRemovePendingDeviceQueue.c)
 *     RaidAdapterDeviceBusy @ 0x140060A68 (RaidAdapterDeviceBusy.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 *     RaidFreezeUnitQueue @ 0x1400A6784 (RaidFreezeUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RiDisableDeviceQueueFastPath(struct _EX_RUNDOWN_REF *a1, char a2)
{
  signed __int64 Count; // rbx
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int64 v6; // rax

  Count = a1[11].Count;
  if ( a2 )
  {
    if ( (Count & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease(a1 + 10);
      ExRundownCompleted(a1 + 10);
      do
      {
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 1, Count);
        v4 = Count == v5;
        Count = v5;
      }
      while ( !v4 && (v5 & 1) == 0 );
    }
  }
  else if ( (Count & 3) == 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 2, Count);
      v4 = Count == v6;
      Count = v6;
    }
    while ( !v4 && (v6 & 3) == 0 );
  }
}
