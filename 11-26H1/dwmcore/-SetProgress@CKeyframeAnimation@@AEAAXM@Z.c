/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x180160120
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801850D0 (-SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 103) != a2 )
  {
    *((_BYTE *)this + 464) |= 4u;
    *((float *)this + 103) = fminf(1.0, fmaxf(a2, 0.0));
  }
}
