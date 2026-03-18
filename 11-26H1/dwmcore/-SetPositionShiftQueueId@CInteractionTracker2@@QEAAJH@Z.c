/*
 * XREFs of ?SetPositionShiftQueueId@CInteractionTracker2@@QEAAJH@Z @ 0x18021FB18
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetPositionShiftQueueId(CInteractionTracker2 *this)
{
  *((_BYTE *)this + 832) |= 8u;
  return 0LL;
}
