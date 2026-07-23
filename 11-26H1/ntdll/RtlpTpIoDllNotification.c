/*
 * XREFs of RtlpTpIoDllNotification @ 0x1800B4B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTpIoDllNotification(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return RtlpTpIoDllLoaded(a2);
  else
    return RtlpTpIoDllUnloaded(a2);
}
