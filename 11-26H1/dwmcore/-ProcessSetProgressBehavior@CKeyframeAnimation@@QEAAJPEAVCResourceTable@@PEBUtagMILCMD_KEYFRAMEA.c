/*
 * XREFs of ?ProcessSetProgressBehavior@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR@@@Z @ 0x1801AE900
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgressBehavior(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR *a3)
{
  *((_DWORD *)this + 104) = *((_DWORD *)a3 + 2);
  return 0LL;
}
