/*
 * XREFs of Microsoft::WRL::ComPtr_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____::_ComPtr_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____ @ 0x1801B3BC4
 * Callers:
 *     _ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2____::_1_::dtor$1 @ 0x1806C9515 (_ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____::_ComPtr_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
