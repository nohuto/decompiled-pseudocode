/*
 * XREFs of ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x180062EC0
 * Callers:
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180062DDC (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E5454 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180081B28 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromSharedHandle(struct CVisualProxy **this, void *a2)
{
  int VisualProxyFromSharedHandle; // eax
  unsigned int v3; // ebx

  VisualProxyFromSharedHandle = CCompositor::CreateVisualProxyFromSharedHandle(
                                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                  a2,
                                  this + 2);
  v3 = VisualProxyFromSharedHandle;
  if ( VisualProxyFromSharedHandle < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, VisualProxyFromSharedHandle, 0x48u, 0LL);
  return v3;
}
