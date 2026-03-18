/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1401C65A4
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        __int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)a1,
    a1,
    (__int64)UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
