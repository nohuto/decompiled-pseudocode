/*
 * XREFs of ?UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131D0C
 * Callers:
 *     ?SetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x180090428 (-SetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoResizeContextu.c)
 * Callees:
 *     ?UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033A18 (-UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCache(this, a1);
  return 0LL;
}
