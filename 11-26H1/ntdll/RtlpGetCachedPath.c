/*
 * XREFs of RtlpGetCachedPath @ 0x18009BDD0
 * Callers:
 *     RtlGetExePath @ 0x18009AED0 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x18009B120 (RtlGetSearchPath.c)
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v11 = 0LL;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, (__int64)a2);
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
  v13 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v12);
      if ( *a1 == v9 )
      {
        *a1 = v13;
        ++*(_QWORD *)(v13 + 80);
        if ( v9 )
        {
          if ( (*(_QWORD *)(v9 + 80))-- == 1LL )
            v11 = v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v11 )
        RtlFreeHeap_0();
    }
    return v13;
  }
  return result;
}
