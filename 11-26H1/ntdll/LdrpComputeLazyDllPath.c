/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180098B3C
 * Callers:
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  unsigned int v2; // edi
  int DllPath; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h]

  v8 = 0LL;
  v7 = 0LL;
  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(*(PCWSTR *)(a1 + 32), a1 + 120, a1 + 40, (__int64)&v7);
    v2 = DllPath;
    if ( DllPath < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        1588,
        (__int64)"LdrpComputeLazyDllPath",
        0,
        "Lazy DLL search path computation failed with status: 0x%08lx.\n",
        DllPath);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v7;
      v5 = v8;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v5;
      v6 = *(_QWORD *)(a1 + 16);
      if ( v6 )
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1613,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v6,
          v5);
      else
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1607,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v5);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
