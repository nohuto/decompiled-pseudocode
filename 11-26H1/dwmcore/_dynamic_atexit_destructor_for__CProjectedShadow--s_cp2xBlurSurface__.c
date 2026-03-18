/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurSurface__ @ 0x1802B9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurSurface__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp2xBlurSurface )
    return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(CProjectedShadow::s_cp2xBlurSurface);
  return result;
}
