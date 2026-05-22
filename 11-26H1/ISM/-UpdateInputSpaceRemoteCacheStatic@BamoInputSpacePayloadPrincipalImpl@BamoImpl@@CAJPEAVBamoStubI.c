/*
 * XREFs of ?UpdateInputSpaceRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180143714
 * Callers:
 *     ?SetInputSpace@BamoInputSpacePayloadPrincipal@@UEAAXAEBUINPUT_SPACE@@@Z @ 0x180143440 (-SetInputSpace@BamoInputSpacePayloadPrincipal@@UEAAXAEBUINPUT_SPACE@@@Z.c)
 * Callees:
 *     ?UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180093910 (-UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSpacePayloadPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCache(this, a1);
  return 0LL;
}
