/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cf1ffbf4768438001d13675b422808c7__void_::_Do_call @ 0x1800E7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18001AD04 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_cf1ffbf4768438001d13675b422808c7__void_::_Do_call(__int64 a1)
{
  std::unique_ptr<_RecurringTask>::reset((__int64 *)(*(_QWORD *)(a1 + 8) + 256LL), 0LL);
  CBtAudioResourceManagerBase::ReevaluateGameModeOperation(*(CBtAudioResourceManagerBase **)(a1 + 8));
}
