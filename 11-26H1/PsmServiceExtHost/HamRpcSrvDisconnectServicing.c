/*
 * XREFs of HamRpcSrvDisconnectServicing @ 0x18006A700
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040958 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvDisconnectServicing(struct _HAM_CLIENT_CONTEXT **a1)
{
  __int64 result; // rax

  HamSrvDisconnect(*a1);
  result = 0LL;
  *a1 = 0LL;
  return result;
}
