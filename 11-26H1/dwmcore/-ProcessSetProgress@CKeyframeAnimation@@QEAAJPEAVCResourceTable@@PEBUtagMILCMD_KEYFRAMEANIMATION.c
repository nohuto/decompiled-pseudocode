/*
 * XREFs of ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1801A4584
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgress(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS *a3)
{
  float v3; // xmm1_4

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 103) != v3 )
  {
    *((_BYTE *)this + 464) |= 4u;
    *((float *)this + 103) = fminf(1.0, fmaxf(v3, 0.0));
  }
  return 0LL;
}
