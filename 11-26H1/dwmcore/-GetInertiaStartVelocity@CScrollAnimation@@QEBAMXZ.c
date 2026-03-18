/*
 * XREFs of ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801C0DEC
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0 (-CalculateInertiaCallbackValues@CInteractionTracker@@EEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030 (-CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScrollAnimation::GetInertiaStartVelocity(CScrollAnimation *this)
{
  return *(float *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this) + 72);
}
