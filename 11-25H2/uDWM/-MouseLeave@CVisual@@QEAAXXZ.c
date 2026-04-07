/*
 * XREFs of ?MouseLeave@CVisual@@QEAAXXZ @ 0x180082CFC
 * Callers:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180016AA8 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::MouseLeave(CVisual *this)
{
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 104LL))(this);
}
