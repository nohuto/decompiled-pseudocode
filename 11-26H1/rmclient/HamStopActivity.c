/*
 * XREFs of HamStopActivity @ 0x18000F630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamStopActivity(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( !v4 )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 9u, 0LL, *a1, a2);
  return (CLIENT_CALL_RETURN)HampInProcStopActivity(v4, a2, a3, a1);
}
