/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ @ 0x180275350
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?SetRequestedScaleInternal@CInteractionTracker2@@AEAA_NM@Z @ 0x180276D98 (-SetRequestedScaleInternal@CInteractionTracker2@@AEAA_NM@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessSetRequestedScale(CInteractionTracker2 *this)
{
  float v2; // xmm1_4
  bool v3; // al
  int v4; // edx
  int v5; // eax

  v2 = *((float *)this + 63);
  *((_DWORD *)this + 123) = *((_DWORD *)this + 64) ^ _xmm;
  *((_DWORD *)this + 124) = *((_DWORD *)this + 65) ^ _xmm;
  v3 = CInteractionTracker2::SetRequestedScaleInternal(this, v2);
  v4 = *((_DWORD *)this + 66);
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 131);
    if ( v5 <= v4 )
      v5 = *((_DWORD *)this + 66);
    *((_BYTE *)this + 84) |= 1u;
    *((_DWORD *)this + 131) = v5;
  }
  else
  {
    CInteractionTracker2::NotifyRequestIgnored(this, v4);
  }
}
