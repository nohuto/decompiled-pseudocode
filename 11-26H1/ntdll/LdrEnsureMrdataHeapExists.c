/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x1800792EC
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

NTSTATUS LdrEnsureMrdataHeapExists()
{
  int v0; // eax
  NTSTATUS result; // eax
  void *Heap; // rax
  void *v3; // rbx
  _DWORD *Heap_0; // rax
  void *v5; // rdi
  void *v6; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 || LdrpMrdataHeap )
    return 0;
  RegionSize = LdrpAllocationGranularity;
  BaseAddress = 0LL;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( result >= 0 )
  {
    Heap = (void *)RtlpCreateHeap(2, BaseAddress, 0LL, 0LL, 0LL, 0LL, 1);
    v3 = Heap;
    if ( Heap )
    {
      Heap_0 = RtlAllocateHeap_0(Heap, 0, 4uLL);
      v5 = Heap_0;
      v6 = v3;
      if ( Heap_0 )
      {
        *Heap_0 = 0;
        RtlProtectHeap(v3, 1u);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = (__int64)v5;
          LdrpMrdataHeap = v3;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v3, 0);
        RtlFreeHeap_0(v3, 0, v5);
        v6 = v3;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return LdrpMrdataHeap == 0LL ? 0xC0000017 : 0;
  }
  return result;
}
