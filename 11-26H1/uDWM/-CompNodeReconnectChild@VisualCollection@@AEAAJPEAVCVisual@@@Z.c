/*
 * XREFs of ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z @ 0x18005611C
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180056034 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18001C620 (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall VisualCollection::CompNodeReconnectChild(VisualCollection *this, struct CVisualProxy **a2)
{
  int inserted; // eax
  unsigned int v3; // ebx

  inserted = CContainerVisualProxy::InsertChild(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL), a2[2], 0LL, 1u);
  v3 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x177u, 0LL);
  return v3;
}
