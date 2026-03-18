/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VSURFACE@@@@@@SAXPEAX@Z @ 0x1401C6640
 * Callers:
 *     <none>
 * Callees:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1401C5930 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

unsigned int __fastcall UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic(
        struct _BASEOBJECT **a1)
{
  return UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(a1);
}
