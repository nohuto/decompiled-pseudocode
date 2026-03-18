/*
 * XREFs of ?IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ @ 0x180184FF0
 * Callers:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180237988 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CReadWriteLock::IsCurrentThreadWriter(CReadWriteLock *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 2);
}
