/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x140177758
 * Callers:
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x140177920 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x14018A9C8 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        int *a7)
{
  int v7; // edi
  int v8; // r14d
  __int64 result; // rax
  __int64 DeviceFromName; // rbx
  __int64 v14; // rcx
  __int64 i; // rdx

  v7 = 0;
  v8 = a4;
  if ( (_DWORD)a4 == 1 )
  {
    if ( a5 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry0(5LL);
      result = 4294967293LL;
      WdLogGlobalForLineNumber = 25834;
      return result;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry0(5LL);
      result = 0xFFFFFFFFLL;
      WdLogGlobalForLineNumber = 25839;
      return result;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( !DeviceFromName )
    {
      WdLogSingleEntry1(5LL, 0LL);
      WdLogGlobalForLineNumber = 25854;
      return 4294967291LL;
    }
  }
  else if ( a3 )
  {
    if ( !a2 || (DeviceFromName = *(_QWORD *)(a2 + 2568)) == 0 )
    {
      WdLogSingleEntry1(5LL, 1LL);
      WdLogGlobalForLineNumber = 25871;
      return 4294967291LL;
    }
  }
  else
  {
    DeviceFromName = 0LL;
  }
  if ( (unsigned int)UserIsWddmConnectedSession((__int64)String1, a2, a3, a4) )
  {
    if ( DeviceFromName )
    {
      v7 = (*(_DWORD *)(DeviceFromName + 160) >> 23) & 1;
    }
    else
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v14) + 88) + 1184LL); i; i = *(_QWORD *)(i + 128) )
      {
        if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
        {
          v7 = 1;
          break;
        }
      }
    }
  }
  if ( v8
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    WdLogSingleEntry1(5LL, 2LL);
    WdLogGlobalForLineNumber = 25953;
    return 4294967291LL;
  }
  *a6 = DeviceFromName;
  *a7 = v7;
  return 0LL;
}
