/*
 * XREFs of HamQueryPackageStateSummary @ 0x180012160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamQueryPackageStateSummary(_QWORD *a1, __int64 a2, void *a3, _DWORD *a4)
{
  CLIENT_CALL_RETURN result; // rax
  ULONG v9; // [rsp+30h] [rbp-28h]
  _DWORD v10[2]; // [rsp+40h] [rbp-18h] BYREF
  CLIENT_CALL_RETURN v11; // [rsp+48h] [rbp-10h]

  v10[0] = 0;
  v11.Simple = 0LL;
  v9 = RtlLengthSid(a3);
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DD98, 4u, 0LL, *a1, a2, a3, v9, v10).Pointer;
  v11.Pointer = result.Pointer;
  v10[1] = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *a4 = v10[0];
    return 0LL;
  }
  return result;
}
