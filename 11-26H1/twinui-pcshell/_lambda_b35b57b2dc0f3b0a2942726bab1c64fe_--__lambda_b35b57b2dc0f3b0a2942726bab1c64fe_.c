/*
 * XREFs of _lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_ @ 0x1802DD054
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::_CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x1802DD0F4 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--_CDelayedOpe.c)
 *     _CApplicationManager::SwitchToDesktopOnMonitor_::_1_::dtor$3 @ 0x1806DEA77 (_CApplicationManager--SwitchToDesktopOnMonitor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
