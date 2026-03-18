/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgPdo@@EEAAJXZ @ 0x1400A3350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x14008CA04 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::AskParentToRemoveAndReenumerate(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( !m_Description || this->m_Static )
    return 3221226021LL;
  FxChildList::ReenumerateEntry(m_Description->m_DeviceList, m_Description);
  return 0LL;
}
