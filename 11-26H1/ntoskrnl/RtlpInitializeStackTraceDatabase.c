/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x14080832C
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     RtlStdInitializeStackDatabase @ 0x1408081EC (RtlStdInitializeStackDatabase.c)
 *     NtFreeVirtualMemory @ 0x140A04B90 (NtFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // edx
  PVOID BaseAddress; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+20h] BYREF

  RegionSize = 0LL;
  if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &RegionSize);
  if ( v4 >= 0
    && _InterlockedCompareExchange64(
         (volatile signed __int64 *)&NormalizationListLock.WaitRegister.Flags,
         RegionSize,
         0LL) )
  {
    BaseAddress = (PVOID)RegionSize;
    RegionSize = *(_QWORD *)(RegionSize + 184) - RegionSize;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 3221225994LL;
  }
  return (unsigned int)v4;
}
