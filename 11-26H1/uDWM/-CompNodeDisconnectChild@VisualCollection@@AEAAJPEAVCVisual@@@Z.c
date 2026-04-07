/*
 * XREFs of ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x1800560CC
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180056034 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::CompNodeDisconnectChild(VisualCollection *this, struct CVisualProxy **a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CContainerVisualProxy::RemoveChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2]);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x192u, 0LL);
  return v3;
}
