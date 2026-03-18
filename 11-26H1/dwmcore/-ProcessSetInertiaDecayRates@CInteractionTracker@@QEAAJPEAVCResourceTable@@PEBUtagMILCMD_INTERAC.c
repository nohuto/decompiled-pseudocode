/*
 * XREFs of ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x1801390A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x1801390FC (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139140 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaDecayRates(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES *a3)
{
  int v3; // xmm1_4
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v7[0] = *((_DWORD *)a3 + 2);
  v7[1] = v3;
  v7[2] = 0;
  CInteractionTracker::SetPositionInertiaDecayRate(this, (const struct D2DVector3 *)v7);
  CInteractionTracker::SetScaleInertiaDecayRate(this, *((float *)a3 + 4));
  return 0LL;
}
