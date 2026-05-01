/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C85F0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider___&_IXamlLauncherState____::_1_::dtor$1 @ 0x1806D9870 (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServi.c)
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$9 @ 0x1806EDB32 (_XamlLauncher--XamlLauncher_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
}
