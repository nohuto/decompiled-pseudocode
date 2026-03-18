/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C65D8
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1401C5930 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic((struct _BASEOBJECT **)a1);
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
