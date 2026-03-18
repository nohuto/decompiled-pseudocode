/*
 * XREFs of ?SetPositionImpulseY@CInteractionTracker2@@QEAAJM@Z @ 0x18021FAE0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetPositionImpulseY(CInteractionTracker2 *this, float a2)
{
  *((float *)this + 210) = a2;
  return 0LL;
}
