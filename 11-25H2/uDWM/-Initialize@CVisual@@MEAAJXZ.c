/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x1800700B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x180070100 (-CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::Initialize(struct CVisualProxy **this)
{
  int VisualProxy; // eax
  unsigned int v2; // ebx

  VisualProxy = CCompositor::CreateVisualProxy(
                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                  this + 2);
  v2 = VisualProxy;
  if ( VisualProxy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, VisualProxy, 0x46u, 0LL);
  return v2;
}
