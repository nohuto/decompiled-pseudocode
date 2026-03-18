/*
 * XREFs of ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1801B8228
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x1801B8060 (-GetCurrentValue@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x1801B8150 (-GetCurrentValue@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CScrollAnimation::HasActiveInertiaForce(CScrollAnimation *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this) + 24) != 0LL;
}
