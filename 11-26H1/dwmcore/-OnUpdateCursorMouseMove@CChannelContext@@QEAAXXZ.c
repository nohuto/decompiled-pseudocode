/*
 * XREFs of ?OnUpdateCursorMouseMove@CChannelContext@@QEAAXXZ @ 0x1801B068C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnUpdateCursorMouseMove(CChannelContext *this)
{
  *((_BYTE *)g_pComposition + 6456) = 1;
}
