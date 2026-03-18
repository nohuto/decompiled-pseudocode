/*
 * XREFs of ?ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275164
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 */

void __fastcall CInteractionTracker2::ProcessSetRequestedDeltaPosition(CInteractionTracker2 *this)
{
  float v1; // xmm0_4
  __int64 v2; // r8
  char v4; // al
  int v5; // edx
  int v6; // eax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((float *)this + 106) + *((float *)this + 212);
  v2 = *((unsigned int *)this + 214);
  v7[2] = 0;
  *(float *)v7 = v1;
  *(float *)&v7[1] = *((float *)this + 107) + *((float *)this + 213);
  v4 = ((__int64 (__fastcall *)(CInteractionTracker2 *, _DWORD *, __int64, _QWORD))CInteractionTracker2::SetRequestedPositionInternal)(
         this,
         v7,
         v2,
         0LL);
  v5 = *((_DWORD *)this + 215);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 131);
    if ( v6 <= v5 )
      v6 = *((_DWORD *)this + 215);
    *((_DWORD *)this + 131) = v6;
  }
  else
  {
    CInteractionTracker2::NotifyRequestIgnored(this, v5);
  }
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
}
