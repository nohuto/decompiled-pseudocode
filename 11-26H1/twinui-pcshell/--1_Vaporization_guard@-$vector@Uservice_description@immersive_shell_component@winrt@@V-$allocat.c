/*
 * XREFs of ??1_Vaporization_guard@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D8B5C
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::dtor$2 @ 0x1806D8393 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_winrt--immersi.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Vaporization_guard::~_Vaporization_guard(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
      (__int64 *)a1[3],
      *(__int64 **)(v1 + 8));
    result = a1[1];
    *(_QWORD *)(v1 + 8) = result;
  }
  return result;
}
