/*
 * XREFs of ?UpdateTransitionGradientAlpha@CAccent@@QEAAXM@Z @ 0x1800A08E8
 * Callers:
 *     ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800A0FA0 (-Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccent::UpdateTransitionGradientAlpha(CAccent *this, float a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *((float *)this + 82) = a2;
  (*(void (__fastcall **)(CAccent *, __int64))(v2 + 24))(this, 0x2000LL);
}
