/*
 * XREFs of ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800DBB68
 * Callers:
 *     ??1?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAA@XZ @ 0x1800DB238 (--1-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_descript.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800DB470 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800DB784 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1800DB830 (-ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
