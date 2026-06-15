/*
 * XREFs of _lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator() @ 0x180087D60
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x180085014 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C2BBC (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v8);
  v5 = *result - *(_QWORD *)a1;
  if ( *result == *(_QWORD *)a1 )
    v5 = result[1] - *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v6 = **(_QWORD **)(a1 + 16);
    if ( !v6 )
      return (_QWORD *)wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(
                         *(_QWORD *)(a1 + 16),
                         a2);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    if ( v7 < (__int64)result )
      return (_QWORD *)wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(
                         *(_QWORD *)(a1 + 16),
                         a2);
  }
  return result;
}
