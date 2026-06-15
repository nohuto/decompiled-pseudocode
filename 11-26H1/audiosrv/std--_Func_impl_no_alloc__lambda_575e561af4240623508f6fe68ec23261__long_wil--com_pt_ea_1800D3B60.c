/*
 * XREFs of std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800D3B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180073B6C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800D3334 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  CAudioSessionManager *v4; // rdx

  CAudioSessionManager::Disconnect(*(struct _RTL_CRITICAL_SECTION **)(*(_QWORD *)a2 + 96LL), 1u, 1);
  v4 = *(CAudioSessionManager **)(*(_QWORD *)a2 + 96LL);
  *(_QWORD *)(*(_QWORD *)a2 + 96LL) = 0LL;
  if ( v4 )
    std::default_delete<CAudioSessionManager>::operator()(v3, v4);
  return 0LL;
}
