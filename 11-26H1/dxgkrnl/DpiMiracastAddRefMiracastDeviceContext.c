/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x14006DC28
 * Callers:
 *     DpiMiracastGetDeviceContextFromName @ 0x140192584 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x14024C490 (DpiMiracastCbSendUserModeMessage.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
