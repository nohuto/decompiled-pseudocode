/*
 * XREFs of _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$31 @ 0x1806D9F4F
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1805FE164 (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor_31(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    TargetAppExtensionDetails::~TargetAppExtensionDetails(*(void ***)(a2 + 192));
  }
}
