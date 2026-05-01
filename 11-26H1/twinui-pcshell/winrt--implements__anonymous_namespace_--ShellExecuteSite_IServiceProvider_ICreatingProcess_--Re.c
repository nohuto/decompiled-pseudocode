/*
 * XREFs of winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::Release @ 0x1805F9E90
 * Callers:
 *     sub_1805F9EE0 @ 0x1805F9EE0 (sub_1805F9EE0.c)
 * Callees:
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference @ 0x1800E7178 (winrt--impl--root_implements__anonymous_namespace_--ShellExecuteSite_IServiceProvider_ICreatingP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi

  v1 = (_QWORD *)(a1 + 16);
  v2 = winrt::impl::root_implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::subtract_final_reference(a1 + 16);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 1);
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 8LL))(v1, v2 + 1);
  }
  return v2;
}
