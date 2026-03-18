/*
 * XREFs of ?ProcessSetInteractionTrackerLastUpdatedId@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETINTERACTIONTRACKERLASTUPDATEDID@@@Z @ 0x18021F708
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::ProcessSetInteractionTrackerLastUpdatedId(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETINTERACTIONTRACKERLASTUPDATEDID *a3)
{
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 2);
  return 0LL;
}
