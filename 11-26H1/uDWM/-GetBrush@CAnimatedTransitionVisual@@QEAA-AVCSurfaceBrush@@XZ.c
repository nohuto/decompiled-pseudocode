/*
 * XREFs of ?GetBrush@CAnimatedTransitionVisual@@QEAA?AVCSurfaceBrush@@XZ @ 0x1800BF408
 * Callers:
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CAnimatedTransitionVisual::GetBrush(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 520);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
