/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ @ 0x1802751FC
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 */

void __fastcall CInteractionTracker2::ProcessSetRequestedPosition(CInteractionTracker2 *this)
{
  __int64 v1; // r9
  __int64 v3; // r8
  char v4; // al
  int v5; // edx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+24h] [rbp-14h]

  v1 = *((unsigned int *)this + 219);
  v3 = *((unsigned int *)this + 218);
  v7 = *((_DWORD *)this + 216);
  v8 = *((unsigned int *)this + 217);
  v4 = ((__int64 (__fastcall *)(CInteractionTracker2 *, int *, __int64, __int64))CInteractionTracker2::SetRequestedPositionInternal)(
         this,
         &v7,
         v3,
         v1);
  v5 = *((_DWORD *)this + 220);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 131);
    if ( v6 <= v5 )
      v6 = *((_DWORD *)this + 220);
    *((_BYTE *)this + 84) |= 1u;
    *((_DWORD *)this + 131) = v6;
  }
  else
  {
    CInteractionTracker2::NotifyRequestIgnored(this, v5);
  }
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_DWORD *)this + 220) = 0;
}
