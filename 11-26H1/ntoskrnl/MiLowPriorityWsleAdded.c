/*
 * XREFs of MiLowPriorityWsleAdded @ 0x14029D6F8
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLowPriorityWsleAdded(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  result = *(_QWORD *)(v1 + 21216);
  if ( *(_QWORD *)(a1 + 112) >= result )
    return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 21392), 5, 0);
  return result;
}
