/*
 * XREFs of wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl(enum_wil::RegistryChangeKind)_::__clone @ 0x1805F3040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_4a70f611901877ea210a1c4f25e97126__void___cdecl_enum_wil::RegistryChangeKind__::__clone(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = &off_1807041B8;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  return Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a2 + 40));
}
