/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800704E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release()
{
  return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::InternalRelease();
}
