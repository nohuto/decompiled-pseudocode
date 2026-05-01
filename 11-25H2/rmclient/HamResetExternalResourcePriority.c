/*
 * XREFs of HamResetExternalResourcePriority @ 0x18001AFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamResetExternalResourcePriority(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  CLIENT_CALL_RETURN result; // rax
  int v6; // [rsp+28h] [rbp-20h]

  v4 = a1[1];
  if ( v4 )
  {
    result.Simple = HampInProcResetExternalResourcePriority(v4, a2, a3, a1);
  }
  else
  {
    v6 = (unsigned __int8)a3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xEu, 0LL, *a1, a2, v6).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
