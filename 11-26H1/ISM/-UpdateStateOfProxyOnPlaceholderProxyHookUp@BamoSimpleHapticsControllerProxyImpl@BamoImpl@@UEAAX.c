/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F590
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceType@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NW4HapticDeviceType@@@Z @ 0x18012AD8C (-UpdateDeviceType@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NW4HapticDeviceType@@@Z.c)
 *     ?UpdateInterfacePath@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18012D578 (-UpdateInterfacePath@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     ?UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012D718 (-UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012D84C (-UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012D980 (-UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012F674 (-UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        unsigned __int16 **a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateDeviceType((__int64)this, 0LL, *((unsigned int *)a2 + 8));
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateInterfacePath(this, 0, a2[5]);
  v4 = (__int64)a2[6];
  if ( v4 )
    BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateSupportedFeedback(this, 0, *(_DWORD *)(v4 + 40));
  LOBYTE(v4) = *((_BYTE *)a2 + 56);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsIntensitySupported(this, 0LL, v4);
  LOBYTE(v5) = *((_BYTE *)a2 + 57);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayCountSupported(this, 0LL, v5);
  LOBYTE(v6) = *((_BYTE *)a2 + 58);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsPlayDurationSupported(this, 0LL, v6);
  LOBYTE(v7) = *((_BYTE *)a2 + 59);
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateIsReplayPauseIntervalSupported(this, 0LL, v7);
}
