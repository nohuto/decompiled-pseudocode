/*
 * XREFs of sub_140077720 @ 0x140077720
 * Callers:
 *     sub_140078A18 @ 0x140078A18 (sub_140078A18.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_140077720(PVOID Context)
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
    **(_DWORD **)(*((_QWORD *)Context + 3) + 6144LL) |= 4u;
    return result;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) == 4 || (*((_BYTE *)Context + 505) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v3 = PoRequestPowerIrp(*((PDEVICE_OBJECT *)Context + 1), 2u, (POWER_STATE)4, sub_1400797A0, Context, 0LL);
    if ( v3 == 259 )
    {
      *((_BYTE *)Context + 505) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x47u, (__int64)&unk_14014C778);
      }
      v1 = 0;
    }
    else
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 4) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x46u, (__int64)&unk_14014C778);
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
