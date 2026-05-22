/*
 * XREFs of ?UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B40
 * Callers:
 *     ?SetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x18008E8CC (-SetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z.c)
 * Callees:
 *     ?UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800357E8 (-UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCache(this, a1);
  return 0LL;
}
