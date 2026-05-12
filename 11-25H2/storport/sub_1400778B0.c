/*
 * XREFs of sub_1400778B0 @ 0x1400778B0
 * Callers:
 *     sub_140078A18 @ 0x140078A18 (sub_140078A18.c)
 * Callees:
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_1400778B0(__int64 Context)
{
  __int32 v1; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1073741823;
  if ( _interlockedbittestandset((volatile signed __int32 *)(Context + 512), 5u) == 1 )
  {
    result = 3221226614LL;
    **(_DWORD **)(*(_QWORD *)(Context + 24) + 6144LL) |= 2u;
    return result;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
  if ( *(_DWORD *)(Context + 548) == 1 || *(char *)(Context + 504) < 0 || *(_BYTE *)(Context + 556) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    sub_14000F4A0(Context);
    v3 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(Context + 8), 2u, (POWER_STATE)1, sub_1400797A0, (PVOID)Context, 0LL);
    if ( v3 == 259 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x45u, (__int64)&unk_14014C778);
      }
      *(_BYTE *)(Context + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v1 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x44u, (__int64)&unk_14014C778);
      }
      sub_14000D4EC(Context);
    }
    _InterlockedExchange((volatile __int32 *)(Context + 1888), v1);
    if ( v3 == 259 )
      return v3;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(Context + 512), 5u);
  return v3;
}
