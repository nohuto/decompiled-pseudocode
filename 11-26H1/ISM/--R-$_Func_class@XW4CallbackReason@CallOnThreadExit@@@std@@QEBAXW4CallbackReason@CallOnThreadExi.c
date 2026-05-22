/*
 * XREFs of ??R?$_Func_class@XW4CallbackReason@CallOnThreadExit@@@std@@QEBAXW4CallbackReason@CallOnThreadExit@@@Z @ 0x180133C98
 * Callers:
 *     ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180133CE0 (-CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,enum CallOnThreadExit::CallbackReason>::operator()(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3[0] = 0;
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v1 + 16LL))(v1, v3);
}
