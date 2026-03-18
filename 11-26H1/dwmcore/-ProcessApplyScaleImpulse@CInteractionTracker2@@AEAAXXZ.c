/*
 * XREFs of ?ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ @ 0x180274928
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180271D3C (-ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessApplyScaleImpulse(CInteractionTracker2 *this)
{
  int v1; // xmm0_4
  float v3; // xmm1_4
  char v4; // al
  int v5; // edx
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v1 = *((_DWORD *)this + 222) ^ _xmm;
  v3 = *((float *)this + 221);
  *((_BYTE *)this + 828) |= 0x10u;
  v7 = v1;
  v8 = *((_DWORD *)this + 223) ^ _xmm;
  v4 = CInteractionTracker2::ApplyScaleImpulse(this, v3, (const struct D2DVector2 *)&v7);
  v5 = *((_DWORD *)this + 224);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 131);
    if ( v6 <= v5 )
      v6 = *((_DWORD *)this + 224);
    *((_DWORD *)this + 131) = v6;
  }
  else
  {
    CInteractionTracker2::NotifyRequestIgnored(this, v5);
  }
  *((_BYTE *)this + 828) &= ~0x10u;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 224) = 0;
}
