/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(
        _RTL_SRWLOCK *a1,
        char *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // rbp
  ULONG_PTR v7; // r14
  unsigned int v8; // ebx
  char *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v5 = a1 + 18;
  v7 = 8LL * a4;
  RegionSize = v7;
  v8 = a4;
  OldProtect = 0;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v11 = &a2[v7];
      v12 = a3 - (_QWORD)a2;
      do
      {
        v11 -= 8;
        --v8;
        v13 = *(_QWORD *)&v11[v12];
        if ( v13 )
          *(_QWORD *)v11 = v13;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v14 = LdrpUnsuppressAddressTakenIat(a1[6].Ptr);
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        937,
        (__int64)"LdrpWriteBackProtectedDelayLoad",
        0,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        a1[6].Ptr,
        v14);
    }
  }
  RtlReleaseSRWLockExclusive(v5);
}
