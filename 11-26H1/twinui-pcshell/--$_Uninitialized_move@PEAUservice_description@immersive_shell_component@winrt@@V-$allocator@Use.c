/*
 * XREFs of ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180203528
 * Callers:
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x180188B04 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1806D83A5 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1806D83A5.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$4 @ 0x1806D843D (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1806D843D.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rax
  char *v5; // r8
  __int64 v6; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      *v3 = *(_OWORD *)(v4 - 16);
      v6 = *(_QWORD *)v4;
      v3 += 2;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v6;
      *(_DWORD *)&v5[v4 + 8] = *(_DWORD *)(v4 + 8);
      v4 += 32LL;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v3, v3);
  return v3;
}
