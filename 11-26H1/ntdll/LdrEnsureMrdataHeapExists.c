/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x180081F4C
 * Callers:
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  _DWORD *Heap; // rbx
  _DWORD *Heap_0; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  if ( !LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v8 = LdrpAllocationGranularity;
  v7 = 0LL;
  result = ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v8, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = (_DWORD *)RtlpCreateHeap(2, v7, 0LL, 0LL, 0LL, 0LL, 1u);
    if ( Heap )
    {
      Heap_0 = (_DWORD *)RtlAllocateHeap_0();
      v4 = (__int64)Heap_0;
      v5 = (__int64)Heap;
      if ( Heap_0 )
      {
        *Heap_0 = 0;
        RtlProtectHeap(Heap, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v6);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (__int64)Heap;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(Heap, 0);
        RtlFreeHeap_0();
        v5 = (__int64)Heap;
      }
      RtlDestroyHeap(v5, v3);
    }
    ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
    return LdrpMrdataHeap == 0 ? 0xC0000017 : 0;
  }
  return result;
}
