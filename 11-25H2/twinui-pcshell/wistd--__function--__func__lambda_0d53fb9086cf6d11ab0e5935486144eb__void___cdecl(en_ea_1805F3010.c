/*
 * XREFs of wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl(enum_wil::RegistryChangeKind)_::__clone @ 0x1805F3010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_0d53fb9086cf6d11ab0e5935486144eb__void___cdecl_enum_wil::RegistryChangeKind__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_180731638;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 2);
}
