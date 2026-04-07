/*
 * XREFs of ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x180020860
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x1800207AC (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveSystemBackdropType(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 696);
  if ( !v1 )
    return 1LL;
  result = *(unsigned int *)(v1 + 204);
  if ( (_DWORD)result )
    return result;
  if ( !*(_QWORD *)(a1 + 464) )
    return 1LL;
  return (unsigned int)CTopLevelWindow::HasRenderedBorder(*(_DWORD *)(a1 + 568)) + 1;
}
