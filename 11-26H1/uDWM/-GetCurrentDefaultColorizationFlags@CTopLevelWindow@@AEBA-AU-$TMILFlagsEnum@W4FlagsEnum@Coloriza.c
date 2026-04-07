/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180020300
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB94 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180020370 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(__int64 a1, int *a2)
{
  int v3; // edx
  int v4; // edx
  int *v5; // r8
  __int64 v6; // r9
  int *result; // rax

  if ( (*(_BYTE *)(a1 + 568) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 696) + 739LL) & 0x10) != 0 )
    v3 = 1;
  else
    v3 = 2;
  *a2 = v3;
  if ( CTopLevelWindow::IsSheetOfGlass((CTopLevelWindow *)a1) )
  {
    v4 |= 0x40u;
    *v5 = v4;
  }
  result = v5;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 741LL) & 2) != 0 )
    *v5 = v4 | 0x80;
  return result;
}
