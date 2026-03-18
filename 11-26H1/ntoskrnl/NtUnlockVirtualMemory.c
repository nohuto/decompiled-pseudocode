/*
 * XREFs of NtUnlockVirtualMemory @ 0x140960970
 * Callers:
 *     DifNtUnlockVirtualMemoryWrapper @ 0x140690560 (DifNtUnlockVirtualMemoryWrapper.c)
 * Callees:
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiLockUnlockCommon @ 0x140961048 (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v17[7]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-98h]
  __int64 v19; // [rsp+A8h] [rbp-90h]
  __int64 v20; // [rsp+B0h] [rbp-88h]

  v14 = 0LL;
  v15 = 0LL;
  memset_0(v16, 0, 0xA0uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = MiLockUnlockCommon(BugCheckParameter1, PreviousMode, (__int64)&v14, (__int64)&v15, (__int64)v17);
  if ( (int)result >= 0 )
  {
    v18 = v14;
    v19 = v15 - 1 + v14;
    v9 = MiLockUnlockVmPrepare(v16);
    if ( v9 < 0 )
    {
      MiLockUnlockVmCleanup(v16);
      if ( v9 == -1073741819 )
        return (unsigned int)-1073741782;
      return (unsigned int)v9;
    }
    v9 = MiTrimUnlockedVirtualAddreses((__int64)v16, v8, v10);
    if ( v9 < 0 )
    {
      MiLockUnlockVmCleanup(v16);
      return (unsigned int)v9;
    }
    MiUnlockVirtualAddreses((__int64)v16, v11, v12);
    MiLockUnlockVmCleanup(v16);
    v13 = v18 & 0xFFFFFFFFFFFFF000uLL;
    if ( PreviousMode )
      RtlWriteULong64ToUser(a3, v20 << 12);
    else
      *a3 = v20 << 12;
    if ( PreviousMode )
      RtlWriteULong64ToUser(a2, v13);
    else
      *a2 = v13;
    return 0LL;
  }
  return result;
}
