/*
 * XREFs of WmsgpDisconnect @ 0x1402CA6D8
 * Callers:
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 *     ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401B6A90 (-CleanupWinlogonRpcHandleWorker@@YAXXZ.c)
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
