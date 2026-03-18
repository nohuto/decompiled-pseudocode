/*
 * XREFs of ?SetRequestedPositionX@CInteractionTracker2@@QEAAJM@Z @ 0x18021FB84
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetRequestedPositionX(CInteractionTracker2 *this, float a2)
{
  *((float *)this + 216) = a2;
  return 0LL;
}
