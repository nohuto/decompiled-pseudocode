/*
 * XREFs of ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18004DF70
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTopLevelWindow::EdgeBorderMustBeOpaque(CTopLevelWindow *this)
{
  return *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 516)
      || (unsigned int)IsWindowArranged(*(_QWORD *)(*((_QWORD *)this + 87) + 40LL))
      || (*((_BYTE *)this + 568) & 0x20) != 0;
}
