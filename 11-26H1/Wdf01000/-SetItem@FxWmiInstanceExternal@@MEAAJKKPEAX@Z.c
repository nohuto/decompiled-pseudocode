/*
 * XREFs of ?SetItem@FxWmiInstanceExternal@@MEAAJKKPEAX@Z @ 0x14008DED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiInstanceExternal::SetItem(
        FxWmiInstanceExternal *this,
        __int64 DataItemId,
        __int64 InBufferSize,
        void *InBuffer)
{
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, void *); // rax
  unsigned __int16 m_ObjectSize; // r10
  unsigned __int64 v6; // rcx

  m_Method = this->m_SetItemCallback.m_Method;
  m_ObjectSize = this->m_ObjectSize;
  if ( !m_Method )
    return 3221226182LL;
  v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v6 = 0LL;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, void *))m_Method)(
           v6,
           DataItemId,
           InBufferSize,
           InBuffer);
}
