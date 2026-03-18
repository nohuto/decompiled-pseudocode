/*
 * XREFs of McTemplateU0xx_EventWriteTransfer @ 0x1800E4EBC
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A9624 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E4C70 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800E5578 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x1800E5880 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x180112104 (-Initialize@CRedirectedGDISurface@@IEAAJXZ.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180123010 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180126880 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020AE10 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180219DBC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18021D28C (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1802639D8 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x180263B04 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x18026C720 (-ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG McTemplateU0xx_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-48h] BYREF
  va_list v4; // [rsp+40h] [rbp-38h]
  __int64 v5; // [rsp+48h] [rbp-30h]
  va_list v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, v9, 3u, &v3);
}
