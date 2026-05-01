/*
 * XREFs of ?IsFocused@CSwitchItemElement@@UEAA_NXZ @ 0x1804A47A0
 * Callers:
 *     ?IsFocused@CSwitchItemElement@@WOI@EAA_NXZ @ 0x1804A47B0 (-IsFocused@CSwitchItemElement@@WOI@EAA_NXZ.c)
 *     ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x1804C5C20 (-IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsFocused(CSwitchItemElement *this)
{
  return *((_BYTE *)this + 176);
}
