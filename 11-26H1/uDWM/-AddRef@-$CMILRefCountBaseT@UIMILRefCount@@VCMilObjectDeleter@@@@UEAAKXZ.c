/*
 * XREFs of ?AddRef@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800705C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
}
