/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180099A0C
 * Callers:
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int DllPath; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v3 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock, a2);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                (unsigned int)&v10,
                (unsigned int)&v8,
                a1 + 120,
                a1 + 40,
                (__int64)&v9);
    v3 = DllPath;
    if ( DllPath < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrutil.c",
        1588,
        (__int64)"LdrpComputeLazyDllPath",
        0,
        "Lazy DLL search path computation failed with status: 0x%08lx.\n",
        DllPath);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)(a1 + 16) = v9;
      v6 = v10;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v6;
      v7 = *(_QWORD *)(a1 + 16);
      if ( v7 )
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrutil.c",
          1613,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v7,
          v6);
      else
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrutil.c",
          1607,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v6);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v3;
}
