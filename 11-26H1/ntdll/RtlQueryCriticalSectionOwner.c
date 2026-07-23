/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800758F0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18003B260 (RtlTryAcquireSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r12
  void *v4; // r14
  _UNKNOWN **v5; // rbx
  _QWORD *v6; // rsi
  char v7; // di
  __int64 v8; // rdx
  __int128 Buffer; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v2 = v1;
  Buffer = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v4 = 0LL;
  if ( !EventHandle || !RtlTryAcquireSRWLockShared(&RtlCriticalSectionLock) )
    return 0LL;
  v5 = (_UNKNOWN **)RtlCriticalSectionList;
  v6 = RtlCriticalSectionList;
  v7 = 0;
  while ( v5 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v5 - 8) )
    {
      v8 = (__int64)*(v5 - 1);
      if ( (!v2 || EventHandle == (HANDLE)(v8 + 8))
        && ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v8, &Buffer, 0x28uLL, 0LL) >= 0
        && (v2 || *((HANDLE *)&v11 + 1) == EventHandle) )
      {
        v4 = (void *)v11;
        break;
      }
    }
    v5 = (_UNKNOWN **)*v5;
    if ( v5 == v6 )
      break;
    if ( v7 )
      v6 = (_QWORD *)*v6;
    v7 ^= 1u;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v4;
}
