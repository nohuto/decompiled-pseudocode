/*
 * XREFs of PopFxLockDevice @ 0x1403C13A4
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403C1310 (PoFxNotifySurprisePowerOn.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B08574 (PopFxUnregisterDeviceOrWait.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, int a2, char a3)
{
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r14

  v6 = 0LL;
  if ( a1 )
  {
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v6 = *(_QWORD *)(a1 + 80);
    v8 = v7;
    if ( !a3
      || (_m_prefetchw((const void *)(a1 + 296)), (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 4) != 0) )
    {
      if ( v6 && (int)PopFxTryReferenceDevice(v6, a2) < 0 )
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v8);
  }
  return v6;
}
