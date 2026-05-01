/*
 * XREFs of winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_ @ 0x1805F91C4
 * Callers:
 *     sub_1805F9210 @ 0x1805F9210 (sub_1805F9210.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::_root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_ @ 0x1805B9A5C (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvid_ea_1805B9A5C.c)
 */

void *__fastcall winrt::impl::heap_implements__anonymous_namespace_::ShellExecuteSite_::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::_root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_((__int64)a1 + 16);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
