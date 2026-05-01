/*
 * XREFs of ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18021C320
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CTaskWindow::IsEqualByView(struct IUnknown **this, struct IUnknown *a2)
{
  return SHIsSameObject(this[6], a2);
}
