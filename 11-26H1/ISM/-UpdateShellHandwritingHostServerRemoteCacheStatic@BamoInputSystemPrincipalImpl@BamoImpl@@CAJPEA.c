/*
 * XREFs of ?UpdateShellHandwritingHostServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131D38
 * Callers:
 *     ?SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwritingHostServerPrincipal@@@Z @ 0x180131758 (-SetShellHandwritingHostServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoShellHandwrit.c)
 * Callees:
 *     ?UpdateShellHandwritingHostServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180032B70 (-UpdateShellHandwritingHostServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBam.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateShellHandwritingHostServerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateShellHandwritingHostServerRemoteCache(this, a1);
  return 0LL;
}
