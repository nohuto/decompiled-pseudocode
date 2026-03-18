/*
 * XREFs of ?TryReferenceBits@CWarpLockSubresource@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1802AA520
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CWarpLockSubresource::TryReferenceBits(struct IUnknown *this, struct IUnknown **a2)
{
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)&this[1]);
  *a2 = this;
  return 0LL;
}
