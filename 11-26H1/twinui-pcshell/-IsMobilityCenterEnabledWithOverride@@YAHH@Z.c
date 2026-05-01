/*
 * XREFs of ?IsMobilityCenterEnabledWithOverride@@YAHH@Z @ 0x1806029B8
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall IsMobilityCenterEnabledWithOverride()
{
  POWER_PLATFORM_ROLE v0; // eax
  HKEY hKey; // [rsp+30h] [rbp-78h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+40h] [rbp-68h] BYREF

  if ( !`IsMobilityCenterEnabledWithOverride'::`2'::bChecked )
  {
    `IsMobilityCenterEnabledWithOverride'::`2'::bChecked = 1;
    if ( GetSystemMetrics(67)
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1,
          v0 = PowerDeterminePlatformRole(),
          v0 != PlatformRoleMobile)
      && (v0 != PlatformRoleDesktop
       || (memset_0(&spc, 0, sizeof(spc)), !GetPwrCapabilities(&spc))
       || !spc.SystemBatteriesPresent
       || spc.BatteriesAreShortTerm)
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1,
          (unsigned int)SHWindowsPolicy(&POLID_NoMobilityCenter))
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1,
          hKey = 0LL,
          RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\explorer\\ControlPanel\\NameSpace\\{5ea4f148-308c-46d7-98a9-49041b1dd468}",
            0,
            1u,
            &hKey)) )
    {
      `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 0;
    }
    else
    {
      RegCloseKey(hKey);
    }
  }
  return (unsigned int)`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled;
}
