/*
 * XREFs of ??_ECProjectedShadowApproxBlurEffect@@EEAAPEAXI@Z @ 0x1802B3B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::`vector deleting destructor'(
        CProjectedShadowApproxBlurEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
