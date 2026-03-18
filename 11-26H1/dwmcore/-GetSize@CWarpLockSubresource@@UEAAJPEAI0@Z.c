/*
 * XREFs of ?GetSize@CWarpLockSubresource@@UEAAJPEAI0@Z @ 0x1802AA370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWarpLockSubresource::GetSize(CWarpLockSubresource *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
  *a3 = *((_DWORD *)this + 29) - *((_DWORD *)this + 27);
  return 0LL;
}
