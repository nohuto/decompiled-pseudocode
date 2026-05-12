/*
 * XREFs of sub_1400775D0 @ 0x1400775D0
 * Callers:
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_1400775D0(__int64 a1)
{
  unsigned int v2; // ebp
  __int32 v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  if ( *(_DWORD *)(a1 + 548) == 4 || (v3 = 1, (*(_BYTE *)(a1 + 505) & 1) != 0) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)4, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      *(_BYTE *)(a1 + 505) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x42u, (__int64)&unk_14014C778);
      }
      v3 = 0;
    }
    else
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x41u, (__int64)&unk_14014C778);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1892), v3);
  }
  return v2;
}
