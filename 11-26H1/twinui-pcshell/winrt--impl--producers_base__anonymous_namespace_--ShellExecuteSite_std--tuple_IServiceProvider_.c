/*
 * XREFs of winrt::impl::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___ @ 0x1805F9070
 * Callers:
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F966C (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 * Callees:
 *     winrt::impl::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_ @ 0x1805F904C (winrt--impl--producer_convert__anonymous_namespace_--ShellExecuteSite_IServiceProvider_void_--pr.c)
 */

_QWORD *__fastcall winrt::impl::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___(
        _QWORD *a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_(a1);
  winrt::impl::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_((_QWORD *)(v1 + 8));
  *v2 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  result = v3;
  *v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
