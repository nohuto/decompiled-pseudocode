/*
 * XREFs of wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_f9d92d283d219251b39b1fca3d115af1__void_ @ 0x1802C0518
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F91FC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_f9d92d283d219251b39b1fca3d115af1__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  a1[14] = 0LL;
  a1[1] = &off_180723F10;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[2] = *a2;
  a1[3] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[14] = a1 + 1;
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
