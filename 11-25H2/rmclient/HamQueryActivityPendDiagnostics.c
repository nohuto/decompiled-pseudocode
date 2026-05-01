/*
 * XREFs of HamQueryActivityPendDiagnostics @ 0x18001AB90
 * Callers:
 *     ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001A1BC (-WaitForStarted@HamActivityWrapper@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamQueryActivityPendDiagnostics(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( !v4 )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xBu, 0LL, *a1, a2, a3);
  return (CLIENT_CALL_RETURN)HampInProcQueryActivityPendDiagnostics(v4, a2, a3, a1);
}
