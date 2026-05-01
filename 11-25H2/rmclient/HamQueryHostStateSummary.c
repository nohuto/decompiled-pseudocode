/*
 * XREFs of HamQueryHostStateSummary @ 0x18001AD50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18001C04E (memset_0.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

CLIENT_CALL_RETURN __fastcall HamQueryHostStateSummary(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  _OWORD *v7; // rax
  __int64 v8; // rcx
  _BYTE v9[576]; // [rsp+40h] [rbp-268h] BYREF

  memset_0(v9, 0, 0x238uLL);
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EDF8, 5u, 0LL, *a1, a2, v9).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v7 = v9;
    v8 = 4LL;
    do
    {
      *a3 = *v7;
      a3[1] = v7[1];
      a3[2] = v7[2];
      a3[3] = v7[3];
      a3[4] = v7[4];
      a3[5] = v7[5];
      a3[6] = v7[6];
      a3 += 8;
      *(a3 - 1) = v7[7];
      v7 += 8;
      --v8;
    }
    while ( v8 );
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    *((_QWORD *)a3 + 6) = *((_QWORD *)v7 + 6);
    return 0LL;
  }
  return result;
}
