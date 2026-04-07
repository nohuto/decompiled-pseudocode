/*
 * XREFs of ?LoadScalingOverrides@@YAXXZ @ 0x180053274
 * Callers:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18005316C (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 *     ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180053340 (-_GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800EA4E4 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     <none>
 */

void LoadScalingOverrides(void)
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
      L"LegacyAppScaleFactor",
      0x20000018u,
      0LL,
      &g_legacyCompatScalingOverride,
      &pcbData);
  }
  if ( !g_windowOverride )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
      L"WindowOverride",
      0x20000018u,
      0LL,
      &g_windowOverride,
      &pcbData);
    if ( !g_windowOverride )
      g_windowOverride = 100;
  }
}
