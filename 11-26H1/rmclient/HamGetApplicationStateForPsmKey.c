/*
 * XREFs of HamGetApplicationStateForPsmKey @ 0x18000EA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamGetApplicationStateForPsmKey(_QWORD *a1, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  ULONG v10; // [rsp+30h] [rbp-38h]

  if ( RtlValidSid(a3) )
  {
    v10 = RtlLengthSid(a3);
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DD98, 2u, 0LL, *a1, a2, a3, v10, a4, a5);
  }
  else
  {
    return (CLIENT_CALL_RETURN)3221225713LL;
  }
}
