/*
 * XREFs of wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_::___func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_ @ 0x18041A57C
 * Callers:
 *     wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x18041A5B0 (wistd--__function--__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(en_ea_18041A5B0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl_enum_wil::RegistryChangeKind__::___func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl_enum_wil::RegistryChangeKind__(
        _QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  void **result; // rax

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
