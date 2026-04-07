/*
 * XREFs of ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ @ 0x1800959B8
 * Callers:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAcrylicSheet::IsAnimationActive(CAcrylicSheet *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 55) || *((_QWORD *)this + 53) )
    return 1;
  return result;
}
