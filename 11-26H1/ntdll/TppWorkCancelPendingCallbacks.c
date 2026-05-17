/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180054160
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010DD60 (TppETWCallbackCancel.c)
 */

unsigned __int64 __fastcall TppWorkCancelPendingCallbacks(signed __int64 *a1)
{
  unsigned __int64 result; // rax
  int v3; // ett
  unsigned int v4; // edi
  __int64 v5; // rcx

  _m_prefetchw(a1 + 29);
  result = *((unsigned int *)a1 + 58);
  if ( (unsigned int)result >= 2 )
  {
    _m_prefetchw(a1 + 29);
    LODWORD(result) = *((_DWORD *)a1 + 58);
    do
    {
      v3 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, result & 1, result);
    }
    while ( v3 != (_DWORD)result );
    v4 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      TppBarrierAdjust(a1 + 7, -v4, 0);
      result = (unsigned __int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned __int64)NtCurrentPeb();
        v5 = *(_QWORD *)(result + 144) + 556LL;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        return TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
    }
  }
  return result;
}
