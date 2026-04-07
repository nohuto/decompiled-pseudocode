/*
 * XREFs of ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x18000CD08
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18000CC24 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::_GetMarginsVisibleOutside(CTopLevelWindow *this, struct _MARGINS *a2)
{
  *a2 = *(struct _MARGINS *)((char *)this + 4 * (*((_BYTE *)this + 200) & 4 | 0x9BLL));
}
