/*
 * XREFs of ?UpdateIsReplayPauseIntervalSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018BA14
 * Callers:
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B1D0 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateIsReplayPauseIntervalSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018B940 (-UpdateIsReplayPauseIntervalSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoIm.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsReplayPauseIntervalSupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsReplayPauseIntervalSupportedRemoteCache(this, a1);
  return 0LL;
}
