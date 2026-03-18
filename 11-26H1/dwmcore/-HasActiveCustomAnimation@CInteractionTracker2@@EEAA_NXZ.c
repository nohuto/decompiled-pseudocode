/*
 * XREFs of ?HasActiveCustomAnimation@CInteractionTracker2@@EEAA_NXZ @ 0x1801DF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 */

char __fastcall CInteractionTracker2::HasActiveCustomAnimation(CInteractionTracker2 *this)
{
  char v1; // bl
  __int64 *v2; // rsi
  unsigned int i; // edi

  v1 = 0;
  v2 = (__int64 *)((char *)this + 672);
  for ( i = 0; i < 2; ++i )
  {
    if ( *v2 && CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v2) )
      return 1;
    ++v2;
  }
  return v1;
}
