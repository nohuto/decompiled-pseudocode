/*
 * XREFs of ?UpdateThreadIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B6C
 * Callers:
 *     ?SetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x18009311C (-SetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z.c)
 * Callees:
 *     ?UpdateThreadIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180035970 (-UpdateThreadIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCache(this, a1);
  return 0LL;
}
