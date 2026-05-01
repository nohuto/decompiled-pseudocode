/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$4 @ 0x1806D843D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180203528 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_4(
        __int64 a1,
        _QWORD *a2)
{
  _OWORD *v3; // r8
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v3 = (_OWORD *)a2[21];
  a2[7] = v3;
  v4 = a2[4];
  a2[8] = v4;
  v5 = (__int64 *)a2[20];
  a2[9] = v5;
  v6 = (__int64 *)a2[5];
  std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>((__int64)v5, *v6, v3);
  a2[6] = 0LL;
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v5, (__int64 *)*v6);
  *v6 = v4;
  throw;
}
