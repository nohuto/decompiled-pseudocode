/*
 * XREFs of ?OnReevaluateDDA@CChannelContext@@QEAAXXZ @ 0x180213B50
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnReevaluateDDA(CChannelContext *this)
{
  CRenderTargetManager::HandleDDAArrivalOrDeparture(*((CRenderTargetManager **)g_pComposition + 77));
}
