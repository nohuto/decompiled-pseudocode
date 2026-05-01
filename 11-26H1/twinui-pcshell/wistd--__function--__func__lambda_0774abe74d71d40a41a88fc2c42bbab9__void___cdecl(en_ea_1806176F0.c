/*
 * XREFs of wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil::RegistryChangeKind)_::__clone @ 0x1806176F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl_enum_wil::RegistryChangeKind__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_18075BE00;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 2);
}
