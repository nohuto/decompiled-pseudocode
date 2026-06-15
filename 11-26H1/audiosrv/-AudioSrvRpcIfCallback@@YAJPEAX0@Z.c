/*
 * XREFs of ?AudioSrvRpcIfCallback@@YAJPEAX0@Z @ 0x180079E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioSrvRpcIfCallback(void *a1, void *a2)
{
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  Type = 0;
  if ( I_RpcBindingInqTransportType(a2, &Type) )
    return 5LL;
  else
    return Type != 4 ? 5 : 0;
}
