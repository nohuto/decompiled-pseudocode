/*
 * XREFs of ?GetBuffer@FxRequestOutputBuffer@@UEAAPEAXXZ @ 0x140064CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall FxRequestOutputBuffer::GetBuffer(FxRequestOutputBuffer *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // eax
  _MDL *m_Mdl; // rcx

  v1 = *(_DWORD *)(*((_QWORD *)this[-8].m_Buffer + 23) + 24LL) & 3;
  if ( !v1 )
    return this->m_Buffer;
  v3 = v1 - 1;
  if ( v3 && (v4 = v3 - 1) != 0 )
  {
    if ( v4 == 1 )
      return this->m_Buffer;
    return 0LL;
  }
  else
  {
    m_Mdl = this->m_Mdl;
    if ( (m_Mdl->MdlFlags & 5) != 0 )
      return m_Mdl->MappedSystemVa;
    else
      return MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
  }
}
