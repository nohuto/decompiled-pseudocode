/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___ @ 0x180049168
 * Callers:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180048F50 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x180049050 (std--_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 i; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 8LL )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 32LL))(*(_QWORD *)i + 8LL) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
