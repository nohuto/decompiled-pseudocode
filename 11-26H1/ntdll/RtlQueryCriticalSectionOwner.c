/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x180090B90
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x180050CE0 (RtlTryAcquireSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(__int64 a1, char a2)
{
  __int64 v4; // r14
  _UNKNOWN **v5; // rbx
  _QWORD *v6; // rsi
  char v7; // di
  __int64 v8; // rdx
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v4 = 0LL;
  if ( !a1 || !RtlTryAcquireSRWLockShared((__int64)&RtlCriticalSectionLock) )
    return 0LL;
  v5 = (_UNKNOWN **)RtlCriticalSectionList;
  v6 = RtlCriticalSectionList;
  v7 = 0;
  while ( v5 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v5 - 8) )
    {
      v8 = (__int64)*(v5 - 1);
      if ( (!a2 || a1 == v8 + 8)
        && (int)ZwReadVirtualMemory(-1LL, v8, &v10, 40LL, 0LL) >= 0
        && (a2 || *((_QWORD *)&v11 + 1) == a1) )
      {
        v4 = v11;
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
