/*
 * XREFs of LdrpObtainLockedEnclave @ 0x1800364A0
 * Callers:
 *     LdrInitializeEnclave @ 0x180090FD0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180091110 (LdrpIssueEnclaveCall.c)
 *     LdrIsEnclaveAddress @ 0x180110594 (LdrIsEnclaveAddress.c)
 *     LdrDeleteEnclave @ 0x180126340 (LdrDeleteEnclave.c)
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *v4; // rbx
  __int64 *i; // r8
  unsigned __int64 v6; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
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
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    if ( v4[9] )
      return v4;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 15, 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap_0(LdrpHeap, 0, (PVOID)v4[14]);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  RtlLeaveCriticalSection(&LdrpEnclaveListLock);
  return 0LL;
}
