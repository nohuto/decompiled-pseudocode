/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1806AF803
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802C7CBC (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_3(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 **v3; // rdi

  v2 = (__int64 *)a2[17];
  v3 = (__int64 **)a2[4];
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(&v2[4 * a2[19]], *v3);
  *v3 = v2;
  throw;
}
