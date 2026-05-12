/*
 * XREFs of RaUnitRequestPowerUp @ 0x140034934
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14004CC60 (RaAcquirePowerRefWorkRoutine.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUp(__int64 a1)
{
  unsigned int v2; // esi
  __int32 v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 548) == 1 || *(char *)(a1 + 504) < 0 || *(_BYTE *)(a1 + 556) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    RaidPauseUnitQueue(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 64LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids);
      }
      *(_BYTE *)(a1 + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v3 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids);
      }
      RaidResumeUnitQueue(a1);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1888), v3);
  }
  return v2;
}
