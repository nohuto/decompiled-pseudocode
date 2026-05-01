/*
 * XREFs of ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801F5E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::HandleHide(CClassicWindowManager *this, HWND a2)
{
  return CClassicWindowManager::_HandleDestructionOrHide((char *)this - 72, a2, 0LL);
}
