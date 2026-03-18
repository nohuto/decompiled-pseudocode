/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x180205698
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180205714 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *a3)
{
  int v4; // xmm1_4
  bool v6; // al
  int v7; // edx
  int v8; // eax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 596) |= 8u;
  v4 = *((_DWORD *)a3 + 3);
  v10[0] = *((_DWORD *)a3 + 2);
  v10[1] = v4;
  v10[2] = 0;
  v6 = CInteractionTracker::ApplyPositionImpulse(this, (const struct D2DVector3 *)v10);
  v7 = *((_DWORD *)a3 + 4);
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 72);
    if ( v8 <= v7 )
      v8 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 72) = v8;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v7);
  }
  *((_BYTE *)this + 596) &= ~8u;
  return 0LL;
}
