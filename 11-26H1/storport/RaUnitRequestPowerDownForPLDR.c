/*
 * XREFs of RaUnitRequestPowerDownForPLDR @ 0x14007F158
 * Callers:
 *     RaidRequestDIrpForAssociatedUnits @ 0x140080438 (RaidRequestDIrpForAssociatedUnits.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerDownForPLDR(PVOID Context)
{
  __int32 v1; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1073741823;
  if ( _interlockedbittestandset((volatile signed __int32 *)Context + 128, 6u) == 1 )
  {
    result = 3221226614LL;
    **(_DWORD **)(*((_QWORD *)Context + 3) + 6208LL) |= 4u;
    return result;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) == 4 || (*((_BYTE *)Context + 505) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v3 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           RaidUnitSetDevicePowerCompletionRoutineForPLDR,
           Context,
           0LL);
    if ( v3 == 259 )
    {
      *((_BYTE *)Context + 505) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x47u,
          (__int64)&WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids);
      }
      v1 = 0;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x46u,
          (__int64)&WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    _InterlockedExchange((volatile __int32 *)Context + 473, v1);
    if ( v3 == 259 )
      return v3;
  }
  _interlockedbittestandreset((volatile signed __int32 *)Context + 128, 6u);
  return v3;
}
