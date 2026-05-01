/*
 * XREFs of HamRegisterDesktopProcessWithAppContainerToken @ 0x1800194C0
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 *     HamCreateAutoRestartActivityForDesktopBridge @ 0x18000E5E0 (HamCreateAutoRestartActivityForDesktopBridge.c)
 *     HamCloseActivityForDesktopBridge @ 0x18001A210 (HamCloseActivityForDesktopBridge.c)
 */

__int64 __fastcall HamRegisterDesktopProcessWithAppContainerToken(__int64 a1, int a2, __int64 a3)
{
  CLIENT_CALL_RETURN v6; // rbx
  int v8; // [rsp+28h] [rbp-50h]
  _QWORD v9[6]; // [rsp+48h] [rbp-30h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+98h] [rbp+20h] BYREF

  v9[0] = 0LL;
  Binding = 0LL;
  LODWORD(v6.Pointer) = CempRpcBindToServer(&unk_18001DC80, &Binding);
  if ( SLODWORD(v6.Simple) >= 0 )
  {
    v8 = a2;
    v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x18u, 0LL, Binding, a1, v8, a3).Pointer;
    v9[1] = v6.Pointer;
    if ( SLODWORD(v6.Simple) >= 0 )
    {
      LODWORD(v6.Pointer) = HamCreateAutoRestartActivityForDesktopBridge(a1, (__int64)v9);
      if ( SLODWORD(v6.Simple) >= 0 )
      {
        LODWORD(v6.Pointer) = 0;
        v9[0] = 0LL;
      }
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( v9[0] )
    HamCloseActivityForDesktopBridge(a1);
  return LODWORD(v6.Pointer);
}
