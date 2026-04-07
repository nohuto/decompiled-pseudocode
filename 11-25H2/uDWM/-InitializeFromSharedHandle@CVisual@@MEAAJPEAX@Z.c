/*
 * XREFs of ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x18003E0A0
 * Callers:
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003D7E8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x18003D8C0 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800E9678 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18003E0F0 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, VisualProxyFromSharedHandle, 0x51u, 0LL);
  return v3;
}
