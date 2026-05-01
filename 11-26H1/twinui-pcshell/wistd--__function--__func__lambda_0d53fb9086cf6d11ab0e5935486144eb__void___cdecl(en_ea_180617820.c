/*
 * XREFs of wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::__move @ 0x180617820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl_enum_wil::RegistryChangeKind__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_18075BDD0;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
