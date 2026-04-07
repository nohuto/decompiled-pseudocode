/*
 * XREFs of ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800206DC
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800205F8 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::_GetMarginsVisibleOutside(CTopLevelWindow *this, struct _MARGINS *a2)
{
  *a2 = *(struct _MARGINS *)((char *)this + ((*((_BYTE *)this + 184) & 4) != 0 ? 0x10 : 0) + 604);
}
