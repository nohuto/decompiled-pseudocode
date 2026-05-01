/*
 * XREFs of wistd::__function::__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl(enum_wil::RegistryChangeKind)_::__clone @ 0x1805F2FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_03899bd9ba5a14c04410ab955a36d1b6__void___cdecl_enum_wil::RegistryChangeKind__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_180731660;
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 2);
}
