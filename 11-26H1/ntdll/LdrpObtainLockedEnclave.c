/*
 * XREFs of LdrpObtainLockedEnclave @ 0x18004BF20
 * Callers:
 *     LdrInitializeEnclave @ 0x180070B80 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180070CC0 (LdrpIssueEnclaveCall.c)
 *     LdrIsEnclaveAddress @ 0x180110A04 (LdrIsEnclaveAddress.c)
 *     LdrDeleteEnclave @ 0x1801265D0 (LdrDeleteEnclave.c)
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *v4; // rbx
  __int64 *i; // r8
  unsigned __int64 v6; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    for ( i = (__int64 *)LdrpEnclaveList; i != &LdrpEnclaveList; v4 = 0LL )
    {
      v6 = i[9];
      v4 = i;
      if ( a2 )
      {
        if ( a1 == v6 )
          break;
      }
      else if ( a1 >= v6 && a1 - v6 < i[10] )
      {
        break;
      }
      i = (__int64 *)*i;
    }
    if ( !v4 )
      break;
    _InterlockedIncrement((volatile signed __int32 *)v4 + 15);
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    RtlEnterCriticalSection((__int64)(v4 + 2));
    if ( v4[9] )
      return v4;
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 15, 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap_0();
      RtlFreeHeap_0();
    }
  }
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
  return 0LL;
}
