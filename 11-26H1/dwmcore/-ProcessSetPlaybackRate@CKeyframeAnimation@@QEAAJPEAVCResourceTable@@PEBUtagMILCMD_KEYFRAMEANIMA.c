/*
 * XREFs of ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z @ 0x18019B574
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPlaybackRate(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE *a3)
{
  float v3; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // rdx

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 102) != v3 )
  {
    if ( v3 != 0.0 )
    {
      if ( v3 >= 0.0 )
      {
        v5 = fmaxf(v3, 0.0625);
        v6 = FLOAT_16_0;
      }
      else
      {
        v5 = fmaxf(v3, -16.0);
        v6 = FLOAT_N0_0625;
      }
      v3 = fminf(v6, v5);
    }
    v7 = *((_QWORD *)this + 38);
    *((float *)this + 102) = v3;
    *(_BYTE *)(v7 + 132) &= ~0x10u;
    *(_BYTE *)(v7 + 88) = v3 < 0.0;
    *(_BYTE *)(v7 + 132) |= 16 * (v3 < 0.0);
  }
  return 0LL;
}
