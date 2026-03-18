/*
 * XREFs of ?ApplyImpulse@CScrollAnimation@@QEAAXM@Z @ 0x1802899B0
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180205714 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18020582C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z @ 0x180271BA4 (-ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180271D3C (-ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::ApplyImpulse(CScrollAnimation *this, float a2)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this);
  *(float *)(v2 + 64) = a2 + *(float *)(v2 + 64);
}
