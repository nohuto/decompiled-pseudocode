/*
 * XREFs of PopDirectedDripsRefreshDisengageState @ 0x140AC4F18
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CC5D0 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     PopDirectedDripsDiagTraceDisengageReasonChange @ 0x140AC4F9C (PopDirectedDripsDiagTraceDisengageReasonChange.c)
 *     PopDirectedDripsSuspendDevices @ 0x140AC5204 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC5364 (PopDirectedDripsResumeDevices.c)
 */

__int64 __fastcall PopDirectedDripsRefreshDisengageState(__int64 a1)
{
  unsigned int v1; // esi
  __int64 result; // rax
  int v4; // ett
  int v5; // edi
  bool v6; // zf

  v1 = *(_DWORD *)(a1 + 148);
  _m_prefetchw((const void *)(a1 + 152));
  LODWORD(result) = *(_DWORD *)(a1 + 152);
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), result, result);
  }
  while ( v4 != (_DWORD)result );
  v5 = result;
  if ( v1 != (_DWORD)result )
  {
    result = PopDirectedDripsDiagTraceDisengageReasonChange(v1, (unsigned int)result);
    v6 = *(_BYTE *)(a1 + 168) == 0;
    *(_DWORD *)(a1 + 148) = v5;
    if ( !v6 )
    {
      if ( v1 )
      {
        if ( !v5 )
          return PopDirectedDripsSuspendDevices(a1);
      }
      else
      {
        return PopDirectedDripsResumeDevices(a1, 0LL);
      }
    }
  }
  return result;
}
