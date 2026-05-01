/*
 * XREFs of ?FindToastShiftMargin@CToastCenterExperienceManager@@CAHPEAUHWND__@@_J@Z @ 0x180289AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToastCenterExperienceManager::FindToastShiftMargin(HWND a1, unsigned int *a2)
{
  unsigned int PropW; // eax

  PropW = (unsigned int)GetPropW(a1, L"RequestToastShift");
  if ( !PropW )
    return 1LL;
  *a2 = PropW;
  return 0LL;
}
