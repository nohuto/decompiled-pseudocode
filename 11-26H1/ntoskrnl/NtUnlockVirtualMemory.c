/*
 * XREFs of NtUnlockVirtualMemory @ 0x140A06230
 * Callers:
 *     DifNtUnlockVirtualMemoryWrapper @ 0x140694140 (DifNtUnlockVirtualMemoryWrapper.c)
 * Callees:
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiLockUnlockVmCleanup @ 0x140A063BC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiLockUnlockCommon @ 0x140A068FC (MiLockUnlockCommon.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v9; // rdx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rbx
  __int64 v15; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v18[7]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-98h]
  __int64 v20; // [rsp+A8h] [rbp-90h]
  __int64 v21; // [rsp+B0h] [rbp-88h]

  v15 = 0LL;
  v16 = 0LL;
  memset_0(v17, 0, 0xA0uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, PreviousMode, (__int64)&v15, (__int64)&v16, (__int64)v18);
  if ( result >= 0 )
  {
    v19 = v15;
    v20 = v16 - 1 + v15;
    v10 = MiLockUnlockVmPrepare(v17);
    if ( v10 < 0 )
    {
      MiLockUnlockVmCleanup(v17);
      if ( v10 == -1073741819 )
        return -1073741782;
      return v10;
    }
    v10 = MiTrimUnlockedVirtualAddreses((__int64)v17, v9, v11);
    if ( v10 < 0 )
    {
      MiLockUnlockVmCleanup(v17);
      return v10;
    }
    MiUnlockVirtualAddreses((__int64)v17, v12, v13);
    MiLockUnlockVmCleanup(v17);
    v14 = (void *)(v19 & 0xFFFFFFFFFFFFF000uLL);
    if ( PreviousMode )
      RtlWriteULong64ToUser(RegionSize, v21 << 12);
    else
      *RegionSize = v21 << 12;
    if ( PreviousMode )
      RtlWriteULong64ToUser(BaseAddress, (__int64)v14);
    else
      *BaseAddress = v14;
    return 0;
  }
  return result;
}
