/*
 * XREFs of ?OnForceRender@CChannelContext@@QEAAXXZ @ 0x1801C5278
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnForceRender(CChannelContext *this)
{
  CRenderTargetManager *v1; // rcx

  v1 = (CRenderTargetManager *)*((_QWORD *)g_pComposition + 77);
  *((_BYTE *)v1 + 754) = 1;
  CRenderTargetManager::ForceFullDirty(v1);
}
