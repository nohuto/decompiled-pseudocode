/*
 * XREFs of WmsgpDisconnect @ 0x1402D3B38
 * Callers:
 *     ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401D9640 (-CleanupWinlogonRpcHandleWorker@@YAXXZ.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall WmsgpDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
