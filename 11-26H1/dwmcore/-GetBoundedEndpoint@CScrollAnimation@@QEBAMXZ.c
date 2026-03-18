/*
 * XREFs of ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801E085C
 * Callers:
 *     ?GetBoundedEndpoint@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z @ 0x180270970 (-GetBoundedEndpoint@CInteractionTracker@@UEBAMW4ScrollAxis@@@Z.c)
 *     ?GetBoundedEndpoint@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z @ 0x180273320 (-GetBoundedEndpoint@CInteractionTracker2@@UEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScrollAnimation::GetBoundedEndpoint(CScrollAnimation *this)
{
  float *v1; // rax

  v1 = (float *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this);
  return fminf(fmaxf(v1[21], v1[22]), v1[15]);
}
