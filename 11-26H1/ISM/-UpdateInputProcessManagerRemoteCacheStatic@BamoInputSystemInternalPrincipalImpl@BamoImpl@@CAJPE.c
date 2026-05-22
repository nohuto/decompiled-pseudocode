/*
 * XREFs of ?UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801326D4
 * Callers:
 *     ?SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x18009195C (-SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcess.c)
 * Callees:
 *     ?UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801325F4 (-UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemInternalPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCache(this, a1);
  return 0LL;
}
