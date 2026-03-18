/*
 * XREFs of ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x18021EFC0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180190FBC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetDrawOrder(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 26) != v3 )
  {
    *((_DWORD *)this + 26) = v3;
    CProjectedShadowReceiver::RequestRedraw(this);
  }
  return 0LL;
}
