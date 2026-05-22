/*
 * XREFs of ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F9AE8
 * Callers:
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z @ 0x180091BEC (-SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z.c)
 * Callees:
 *     ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180065A40 (-UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSystemCursorControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCache(this, a1);
  return 0LL;
}
