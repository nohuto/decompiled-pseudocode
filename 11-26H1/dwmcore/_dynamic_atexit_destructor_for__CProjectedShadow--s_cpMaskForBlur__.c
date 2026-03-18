/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__ @ 0x1802B9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpMaskForBlur__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpMaskForBlur )
    return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)CProjectedShadow::s_cpMaskForBlur);
  return result;
}
