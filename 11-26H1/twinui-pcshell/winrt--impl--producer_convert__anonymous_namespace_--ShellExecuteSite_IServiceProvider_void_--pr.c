/*
 * XREFs of winrt::impl::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_ @ 0x1805F904C
 * Callers:
 *     winrt::impl::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___::producers_base__anonymous_namespace_::ShellExecuteSite_std::tuple_IServiceProvider_ICreatingProcess___ @ 0x1805F9070 (winrt--impl--producers_base__anonymous_namespace_--ShellExecuteSite_std--tuple_IServiceProvider_.c)
 * Callees:
 *     winrt::impl::producer__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_ @ 0x1805F9034 (winrt--impl--producer__anonymous_namespace_--ShellExecuteSite_IServiceProvider_void_--producer__.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer_convert__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_::producer__anonymous_namespace_::ShellExecuteSite_IServiceProvider_void_(a1);
  result = v1;
  *v1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  return result;
}
