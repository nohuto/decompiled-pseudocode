/*
 * XREFs of NtGetWriteWatch @ 0x140A927B0
 * Callers:
 *     DifNtGetWriteWatchWrapper @ 0x14067D560 (DifNtGetWriteWatchWrapper.c)
 * Callees:
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiGetWriteWatchFinish @ 0x140A92888 (MiGetWriteWatchFinish.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 */

NTSTATUS __cdecl NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  _QWORD v14[3]; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v15; // [rsp+38h] [rbp-C8h]
  PVOID v16; // [rsp+40h] [rbp-C0h]
  SIZE_T v17; // [rsp+48h] [rbp-B8h]
  PULONG v18; // [rsp+50h] [rbp-B0h]

  memset_0(v14, 0, 0x8C8uLL);
  v14[2] = ProcessHandle;
  v15 = Flags;
  v16 = BaseAddress;
  v17 = RegionSize;
  v14[0] = UserAddressArray;
  v14[1] = EntriesInUserAddressArray;
  v18 = Granularity;
  v12 = MiPrepareWriteWatchPacket(v14);
  if ( v12 >= 0 )
    MiWalkPtesForWriteWatchState((__int64)v14, v11);
  MiGetWriteWatchFinish(v14, (unsigned int)v12);
  return v12;
}
