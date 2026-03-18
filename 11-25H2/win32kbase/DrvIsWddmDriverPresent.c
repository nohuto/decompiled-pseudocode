/*
 * XREFs of DrvIsWddmDriverPresent @ 0x14006BE78
 * Callers:
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14006BDEC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401CD2F0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvIsWddmDriverPresent(__int64 a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1096LL); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
