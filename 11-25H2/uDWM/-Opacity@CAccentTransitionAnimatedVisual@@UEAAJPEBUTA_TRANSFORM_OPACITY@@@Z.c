/*
 * XREFs of ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800A0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTransitionGradientAlpha@CAccent@@QEAAXM@Z @ 0x1800A08E8 (-UpdateTransitionGradientAlpha@CAccent@@QEAAXM@Z.c)
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::Opacity(CAccent **this, const struct TA_TRANSFORM_OPACITY *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 8) == 1 )
  {
    CAccent::UpdateTransitionGradientAlpha(this[3], *((float *)a2 + 5));
  }
  else if ( *((_DWORD *)this + 8) != 2
         && *((_DWORD *)this + 8) != 3
         && *((_DWORD *)this + 8) != 4
         && (unsigned int)(*((_DWORD *)this + 8) - 5) >= 2 )
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
