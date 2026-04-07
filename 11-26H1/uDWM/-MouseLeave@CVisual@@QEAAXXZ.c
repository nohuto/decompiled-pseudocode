/*
 * XREFs of ?MouseLeave@CVisual@@QEAAXXZ @ 0x180074340
 * Callers:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180014B90 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::MouseLeave(CVisual *this)
{
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 88LL))(this);
}
