/*
 * XREFs of ?HasImpulse@CScrollAnimation@@QEBA_NXZ @ 0x1801391E8
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801C0F24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker2@@QEBA_NXZ @ 0x1801D95BC (-HasImpulse@CInteractionTracker2@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CScrollAnimation::HasImpulse(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this);
  return CMotion::HasImpulse(v1);
}
