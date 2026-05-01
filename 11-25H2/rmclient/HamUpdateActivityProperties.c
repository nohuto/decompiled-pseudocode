/*
 * XREFs of HamUpdateActivityProperties @ 0x18000E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamUpdateActivityProperties(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( !a1[1] )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xAu, 0LL, *a1, a2, a3);
  return (CLIENT_CALL_RETURN)HampInProcUpdateActivityProperties(a1[1]);
}
