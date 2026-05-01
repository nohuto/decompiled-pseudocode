/*
 * XREFs of ?IsElementForItemData@CSwitchItemElement@@UEAA_NPEAUIUnknown@@@Z @ 0x1804A4770
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CSwitchItemElement::IsElementForItemData(struct IUnknown **this, struct IUnknown *a2)
{
  return SHIsSameObject(a2, this[46]);
}
