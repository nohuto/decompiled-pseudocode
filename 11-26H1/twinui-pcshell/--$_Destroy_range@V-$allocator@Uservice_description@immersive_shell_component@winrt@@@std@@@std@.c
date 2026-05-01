/*
 * XREFs of ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18
 * Callers:
 *     ??$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEBU123@_KPEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800DB7B4 (--$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V-$allocator@U.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800DBB68 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x180188B04 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x1801D9BB4 (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180203528 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??1_Reallocation_guard@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D8B20 (--1_Reallocation_guard@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocat.c)
 *     ??1_Vaporization_guard@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D8B5C (--1_Vaporization_guard@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocat.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1806D83A5 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1806D83A5.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$4 @ 0x1806D843D (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1806D843D.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      if ( *v3 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v3);
      v3 += 4;
      result = v3 - 2;
    }
    while ( v3 - 2 != a2 );
  }
  return result;
}
