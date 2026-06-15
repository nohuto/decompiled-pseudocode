/*
 * XREFs of sub_14003FB30 @ 0x14003FB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003FB30(__int64 a1, void *a2)
{
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  Type = 0;
  if ( I_RpcBindingInqTransportType(a2, &Type) )
    return 5LL;
  else
    return Type != 4 ? 5 : 0;
}
