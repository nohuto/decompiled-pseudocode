/*
 * XREFs of ?IsEqualByView@CSnappedWindow@@UEBA_NPEAUIApplicationView@@@Z @ 0x18020FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CSnappedWindow::IsEqualByView(struct IUnknown **this, struct IUnknown *a2)
{
  return SHIsSameObject(a2, this[4]);
}
