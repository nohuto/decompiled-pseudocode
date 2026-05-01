/*
 * XREFs of ?_GetNullableNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@PEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180037674
 * Callers:
 *     ?get_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038CD0 (-get_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@.c)
 *     ?get_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038CF0 (-get_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?get_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038D70 (-get_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 *     ?get_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038D90 (-get_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming.c)
 *     ?get_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038DB0 (-get_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Pr.c)
 *     ?get_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180038DD0 (-get_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_GetNullableNumericValue(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    *a3 = *a2;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
