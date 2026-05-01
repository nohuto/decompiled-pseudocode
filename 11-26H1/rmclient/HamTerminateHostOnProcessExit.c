/*
 * XREFs of HamTerminateHostOnProcessExit @ 0x180019A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateHostOnProcessExit(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 v8; // rcx
  CLIENT_CALL_RETURN result; // rax
  int v12; // [rsp+40h] [rbp-28h]

  v8 = a1[1];
  if ( v8 )
  {
    result.Simple = HampInProcTerminateHostOnProcessExit(v8, a2, a3, a4, a5, a6);
  }
  else
  {
    v12 = a6;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x11u, 0LL, *a1, a2, a3, a4, a5, v12).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
