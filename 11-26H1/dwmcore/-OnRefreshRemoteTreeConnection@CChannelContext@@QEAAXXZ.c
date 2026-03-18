/*
 * XREFs of ?OnRefreshRemoteTreeConnection@CChannelContext@@QEAAXXZ @ 0x18021FB68
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelContext::OnRefreshRemoteTreeConnection(CChannelContext *this)
{
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)g_pComposition + 48LL))(g_pComposition);
}
