/*
 * XREFs of RaidDeleteDeviceQueueEntry @ 0x140012998
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterCheckWaitTimeout @ 0x14004B9A8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RiDeleteDeviceQueueEntry @ 0x14003AD8C (RiDeleteDeviceQueueEntry.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 */

void __fastcall RaidDeleteDeviceQueueEntry(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // bl

  if ( a2 )
    RaUnitUnlockForwardIo(a1 - 720, 0LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  LOBYTE(v5) = 1;
  v6 = v4;
  RiDisableDeviceQueueFastPath(a1, v5);
  RiDeleteDeviceQueueEntry(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
}
