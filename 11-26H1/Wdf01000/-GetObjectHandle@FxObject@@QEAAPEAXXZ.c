/*
 * XREFs of ?GetObjectHandle@FxObject@@QEAAPEAXXZ @ 0x1400539C0
 * Callers:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxObject::GetObjectHandle(FxObject *this)
{
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v2; // rcx

  m_ObjectSize = this->m_ObjectSize;
  v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v2;
}
