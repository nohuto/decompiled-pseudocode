/*
 * XREFs of HamTerminateSelfOnProcessExit @ 0x18001B4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateSelfOnProcessExit(_QWORD *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v6; // [rsp+30h] [rbp-28h]

  v6 = a4;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFD0, 0xBu, 0LL, *a1, a2, a3, v6);
}
