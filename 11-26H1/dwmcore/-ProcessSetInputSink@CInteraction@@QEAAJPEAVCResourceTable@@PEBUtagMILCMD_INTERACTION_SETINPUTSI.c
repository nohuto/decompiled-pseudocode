/*
 * XREFs of ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A9624
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A96D0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC (McTemplateU0xx_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::ProcessSetInputSink(CInteraction *this, struct CResourceTable *a2, void **a3)
{
  int updated; // eax
  unsigned int v6; // edi
  struct CVisual *VisualNoRef; // rax
  __int64 v8; // rcx
  struct CVisual *v9; // rbx

  updated = CInteraction::UpdateInputSink(this, a3[1]);
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x183u, 0LL);
  }
  else
  {
    VisualNoRef = CInteraction::GetVisualNoRef(this);
    v9 = VisualNoRef;
    if ( VisualNoRef )
    {
      CVisual::PropagateFlags((__int64)VisualNoRef, 0x10u);
      *((_BYTE *)v9 + 100) |= 0x20u;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v8, &EVTDESC_INTERACTION_SET_INPUT_SINK, this, a3[1]);
  }
  return v6;
}
