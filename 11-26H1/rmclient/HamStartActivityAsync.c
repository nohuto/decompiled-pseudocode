/*
 * XREFs of HamStartActivityAsync @ 0x18000DE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamStartActivityAsync(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v8; // [rsp+28h] [rbp-30h]

  v6 = a1[1];
  if ( v6 )
  {
    return (CLIENT_CALL_RETURN)HampInProcStartActivityAsync(v6, a2, a3, a4);
  }
  else
  {
    v8 = a3;
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 8u, 0LL, *a1, a2, v8, a4);
  }
}
