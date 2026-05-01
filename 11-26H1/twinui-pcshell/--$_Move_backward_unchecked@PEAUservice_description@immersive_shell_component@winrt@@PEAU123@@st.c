/*
 * XREFs of ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D8394
 * Callers:
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x180188B04 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 * Callees:
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v5 = a2 + 16;
    do
    {
      v6 = v5;
      a3 -= 32LL;
      v5 -= 32LL;
      *(_OWORD *)a3 = *(_OWORD *)(v6 - 48);
      winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)(a3 + 16), (__int64 *)v5);
      *(_DWORD *)(a3 + 24) = *(_DWORD *)(v5 + 8);
    }
    while ( v5 - 16 != a1 );
  }
  return a3;
}
