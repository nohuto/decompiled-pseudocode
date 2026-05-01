/*
 * XREFs of _lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_ @ 0x1802F4CFC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long_::_DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long_ @ 0x1802F4DF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F4DF0.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802FD3F8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$5 @ 0x1806BA0CA (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_47284ee12e316a93415fcd6b809ad33f_::__lambda_47284ee12e316a93415fcd6b809ad33f_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
