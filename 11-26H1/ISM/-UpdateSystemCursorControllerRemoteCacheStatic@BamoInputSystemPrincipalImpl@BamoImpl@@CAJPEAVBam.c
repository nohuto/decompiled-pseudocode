/*
 * XREFs of ?UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131D64
 * Callers:
 *     ?SetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x1800900E8 (-SetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemCursorContr.c)
 * Callees:
 *     ?UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18003407C (-UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCache(this, a1);
  return 0LL;
}
