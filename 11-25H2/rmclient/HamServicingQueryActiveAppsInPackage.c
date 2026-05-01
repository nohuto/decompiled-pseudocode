/*
 * XREFs of HamServicingQueryActiveAppsInPackage @ 0x180010FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamServicingQueryActiveAppsInPackage(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  CLIENT_CALL_RETURN v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+88h] [rbp+20h]

  v11 = a4;
  v8 = 0LL;
  v10 = 0;
  v9.Simple = 0LL;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001F000, 4u, 0LL, *a1, a2, a3, &v8, &v10).Pointer;
  v9.Pointer = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *a4 = v8;
    *a5 = v10;
    return 0LL;
  }
  return result;
}
