/*
 * XREFs of PopValidatePowerSettingData @ 0x1409FA478
 * Callers:
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 */

__int64 __fastcall PopValidatePowerSettingData(_QWORD *a1, int a2, _DWORD *a3)
{
  _QWORD *v3; // r11
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = a1;
  v4 = -1073741275;
  v5 = *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DISK_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v5 && a2 == 4 && a3 && *a3 && !SSHSupportIsPlatformAoAc() && *a3 < 0xFu )
  {
    *a3 = 15;
    v4 = 0;
  }
  v6 = *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 - *v3;
  if ( *(_QWORD *)&GUID_STANDBY_TIMEOUT.Data1 == *v3 )
    v6 = *(_QWORD *)GUID_STANDBY_TIMEOUT.Data4 - v3[1];
  if ( !v6 && a2 == 4 && a3 && *a3 && *a3 < 0x1Eu )
  {
    *a3 = 30;
    v4 = 0;
  }
  v7 = *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 - *v3;
  if ( *(_QWORD *)&GUID_HIBERNATE_TIMEOUT.Data1 == *v3 )
    v7 = *(_QWORD *)GUID_HIBERNATE_TIMEOUT.Data4 - v3[1];
  if ( !v7 && a2 == 4 && a3 && *a3 && *a3 < 0x3Cu )
  {
    *a3 = 60;
    return 0;
  }
  return v4;
}
