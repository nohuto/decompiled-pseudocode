/*
 * XREFs of ?ReadRegistryDwords@CSettingsManager@@UEAAJW4DwmSettingType@@PEAUDwordRegistrySetting@@I@Z @ 0x1400028A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z @ 0x140002A8C (-GetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGPEAK@Z.c)
 */

__int64 __fastcall CSettingsManager::ReadRegistryDwords(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < a4; ++i )
  {
    result = CSettingsManager::GetDword(a1, a2, *(_QWORD *)(a3 + 16LL * i), *(_QWORD *)(a3 + 16LL * i + 8));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
