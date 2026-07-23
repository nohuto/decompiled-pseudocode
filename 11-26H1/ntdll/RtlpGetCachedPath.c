/*
 * XREFs of RtlpGetCachedPath @ 0x18009AF00
 * Callers:
 *     RtlGetExePath @ 0x18009A000 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x18009A250 (RtlGetSearchPath.c)
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  void *v11; // r12
  __int64 v12; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v11 = 0LL;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v9 = *a1;
    if ( *a1
      && *(_QWORD *)(v9 + 96) == LdrpAppPackagesPathVersion
      && (*(_BYTE *)(v9 + 116) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    v11 = 0LL;
  }
  result = a2(a3, a4);
  v12 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
      if ( *a1 == v9 )
      {
        *a1 = v12;
        ++*(_QWORD *)(v12 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v11 = (void *)v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v11 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    return v12;
  }
  return result;
}
