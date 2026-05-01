/*
 * XREFs of wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_::__move @ 0x1802124F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl_enum_wil::RegistryChangeKind__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180723F10;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
