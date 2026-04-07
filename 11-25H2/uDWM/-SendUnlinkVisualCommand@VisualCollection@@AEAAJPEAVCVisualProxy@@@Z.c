/*
 * XREFs of ?SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z @ 0x1800071F4
 * Callers:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180007DF0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::SendUnlinkVisualCommand(VisualCollection *this, struct CVisualProxy *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CContainerVisualProxy::RemoveChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x24u, 0LL);
  return v3;
}
