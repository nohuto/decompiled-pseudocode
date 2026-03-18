/*
 * XREFs of ?SetRequestedPositionUpdateOption@CInteractionTracker2@@QEAAJH@Z @ 0x18021FAF4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetRequestedPositionUpdateOption(CInteractionTracker2 *this, int a2)
{
  *((_DWORD *)this + 219) = a2;
  return 0LL;
}
