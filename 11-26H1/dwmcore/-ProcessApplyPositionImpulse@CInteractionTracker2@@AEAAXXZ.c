/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ @ 0x1802747FC
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z @ 0x180271BA4 (-ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessApplyPositionImpulse(CInteractionTracker2 *this)
{
  int v1; // xmm0_4
  char v3; // al
  int v4; // edx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+24h] [rbp-14h]

  v1 = *((_DWORD *)this + 209);
  *((_BYTE *)this + 828) |= 0x10u;
  v6 = v1;
  v7 = *((unsigned int *)this + 210);
  v3 = CInteractionTracker2::ApplyPositionImpulse(this, (const struct D2DVector3 *)&v6);
  v4 = *((_DWORD *)this + 211);
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 131);
    if ( v5 <= v4 )
      v5 = *((_DWORD *)this + 211);
    *((_DWORD *)this + 131) = v5;
  }
  else
  {
    CInteractionTracker2::NotifyRequestIgnored(this, v4);
  }
  *((_BYTE *)this + 828) &= ~0x10u;
  *(_QWORD *)((char *)this + 836) = 0LL;
  *((_DWORD *)this + 211) = 0;
}
