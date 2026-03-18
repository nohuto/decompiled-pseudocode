/*
 * XREFs of ?SetDCompCreation@CInteractionTracker2@@QEAAJH@Z @ 0x18021FB2C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2::SetDCompCreation(CInteractionTracker2 *this)
{
  *((_BYTE *)this + 829) |= 0x20u;
  return 0LL;
}
