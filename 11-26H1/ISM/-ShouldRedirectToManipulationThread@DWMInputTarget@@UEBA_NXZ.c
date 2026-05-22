/*
 * XREFs of ?ShouldRedirectToManipulationThread@DWMInputTarget@@UEBA_NXZ @ 0x180072D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DWMInputTarget::ShouldRedirectToManipulationThread(DWMInputTarget *this)
{
  return *((_DWORD *)this + 16) != 0;
}
