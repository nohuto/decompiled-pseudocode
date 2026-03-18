/*
 * XREFs of ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x180205610
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedDeltaPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *a3)
{
  unsigned int v3; // xmm0_4
  unsigned int v5; // xmm1_4
  int v6; // r8d
  char v8; // al
  int v9; // edx
  int v10; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  *(float *)&v3 = *((float *)this + 46) + *((float *)a3 + 2);
  *(float *)&v5 = *((float *)this + 47) + *((float *)a3 + 3);
  v6 = *((_DWORD *)a3 + 4);
  v13 = 0;
  v12 = __PAIR64__(v5, v3);
  v8 = CInteractionTracker::SetRequestedPosition((__int64 *)this, (__int64 *)&v12, v6, 0);
  v9 = *((_DWORD *)a3 + 6);
  if ( v8 )
  {
    v10 = *((_DWORD *)this + 72);
    if ( v10 <= v9 )
      v10 = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 72) = v10;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, v9);
  }
  return 0LL;
}
