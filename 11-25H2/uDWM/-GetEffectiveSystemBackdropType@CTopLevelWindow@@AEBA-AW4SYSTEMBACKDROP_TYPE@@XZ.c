/*
 * XREFs of ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x18000F870
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18000F5B8 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18000F64C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveSystemBackdropType(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 712);
  if ( !v1 )
    return 1LL;
  result = *(unsigned int *)(v1 + 204);
  if ( (_DWORD)result )
    return result;
  if ( !*(_QWORD *)(a1 + 480) )
    return 1LL;
  return (unsigned int)CTopLevelWindow::HasRenderedBorder(*(_DWORD *)(a1 + 584)) + 1;
}
