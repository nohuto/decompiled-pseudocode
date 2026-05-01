/*
 * XREFs of HamSessionStateLogoffUser @ 0x18001B180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamSessionStateLogoffUser(_QWORD *a1, void *a2, int a3)
{
  ULONG v6; // [rsp+28h] [rbp-30h]

  v6 = RtlLengthSid(a2);
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EA50, 2u, 0LL, *a1, a2, v6, a3);
}
