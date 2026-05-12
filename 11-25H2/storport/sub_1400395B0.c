/*
 * XREFs of sub_1400395B0 @ 0x1400395B0
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 *     sub_1400406A0 @ 0x1400406A0 (sub_1400406A0.c)
 * Callees:
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_1400395B0(__int64 a1)
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
    sub_14000F4A0(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055930(off_140168120->AttachedDevice, 64LL, &unk_14014C778);
      }
      *(_BYTE *)(a1 + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v3 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930(off_140168120->AttachedDevice, 63LL, &unk_14014C778);
      }
      sub_14000D4EC(a1);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1888), v3);
  }
  return v2;
}
