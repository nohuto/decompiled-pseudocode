/*
 * XREFs of ?MouseEnter@CVisual@@QEAAXXZ @ 0x180075B0C
 * Callers:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180014B90 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::MouseEnter(CVisual *this)
{
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 80LL))(this);
}
