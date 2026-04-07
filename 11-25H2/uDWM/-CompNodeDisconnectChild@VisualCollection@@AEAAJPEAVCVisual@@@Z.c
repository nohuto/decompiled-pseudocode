/*
 * XREFs of ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x180005B58
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180005D24 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::CompNodeDisconnectChild(VisualCollection *this, struct CVisualProxy **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CContainerVisualProxy::RemoveChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2]);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x192u, 0LL);
  return v3;
}
