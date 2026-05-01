/*
 * XREFs of ?SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z @ 0x1804C09D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemElement::SetThumbnailSourceSize(CSwitchItemElement *this, const struct tagSIZE *a2)
{
  struct tagSIZE *v2; // rcx

  v2 = (struct tagSIZE *)((char *)this - 224);
  v2[82] = *a2;
  CMultitaskingViewElementBase::_LayoutChildren(v2, 0LL, 0LL);
}
