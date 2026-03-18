/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1401659D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x140165A28 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int updated; // ebx

  if ( UserIsCurrentProcessDwm(a1, a2, a3) )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(a1, a2);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}
