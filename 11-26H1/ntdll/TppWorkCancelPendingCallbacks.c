/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x18003E6E0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010D8B0 (TppETWCallbackCancel.c)
 */

int __fastcall TppWorkCancelPendingCallbacks(_RTL_SRWLOCK *a1)
{
  struct _PEB *v2; // rax
  int v3; // ett
  unsigned int v4; // edi
  __int64 v5; // rcx

  _m_prefetchw(&a1[29]);
  LODWORD(v2) = a1[29].0;
  if ( (unsigned int)v2 >= 2 )
  {
    _m_prefetchw(&a1[29]);
    LODWORD(v2) = a1[29].0;
    do
    {
      v3 = (int)v2;
      LODWORD(v2) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&a1[29],
                      (unsigned __int8)v2 & 1,
                      (signed __int32)v2);
    }
    while ( v3 != (_DWORD)v2 );
    v4 = (unsigned int)v2 >> 1;
    if ( (unsigned int)v2 >> 1 )
    {
      TppBarrierAdjust(a1 + 7, -v4, 0);
      LODWORD(v2) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v2 )
      {
        v2 = NtCurrentPeb();
        v5 = (__int64)v2->SharedData + 556;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        LODWORD(v2) = TppETWCallbackCancel(a1[18].Value, (int)a1 + 200, a1[10].Value, a1[11].Value, a1[13].Value, v4);
    }
  }
  return (int)v2;
}
