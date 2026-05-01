/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1806D83A5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180203528 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D83FC (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_3(
        __int64 a1,
        _QWORD *a2)
{
  _OWORD *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // rbx

  v3 = (_OWORD *)a2[21];
  a2[7] = v3;
  v4 = (__int64 *)a2[4];
  a2[8] = v4;
  v5 = a2[23];
  a2[9] = &v3[2 * v5];
  std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(
    (__int64)&v3[2 * v5],
    (__int64)&v3[4 * v5],
    v3);
  a2[6] = 0LL;
  v6 = (__int64)&v3[2 * v5];
  v7 = (__int64)&v3[4 * v5];
  v8 = (__int64 *)a2[5];
  std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
    v7,
    *v8,
    v6);
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v4, (__int64 *)*v8);
  *v8 = (__int64)v4;
  throw;
}
