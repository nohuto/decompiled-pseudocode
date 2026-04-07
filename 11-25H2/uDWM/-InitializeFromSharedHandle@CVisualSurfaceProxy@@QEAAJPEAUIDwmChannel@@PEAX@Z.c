/*
 * XREFs of ?InitializeFromSharedHandle@CVisualSurfaceProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x18008120C
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18008111C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x180005820 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualSurfaceProxy::InitializeFromSharedHandle(
        CVisualSurfaceProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CResourceProxy::InitializeFromSharedHandle((__int64)this, 0x2Au, (__int64 *)a2, a3, 0);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1Bu, 0LL);
  else
    return 0;
  return v4;
}
