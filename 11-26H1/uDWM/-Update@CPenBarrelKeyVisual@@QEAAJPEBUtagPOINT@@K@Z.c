/*
 * XREFs of ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x1800132C0
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012EFC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 * Callees:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800132F8 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800133AC (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Update(CPenBarrelKeyVisual *this, const struct tagPOINT *a2, int a3)
{
  *(struct tagPOINT *)((char *)this + 228) = *a2;
  *((_DWORD *)this + 59) = a3;
  CPenBarrelKeyVisual::PlaceVisuals(this);
  CPenBarrelKeyVisual::UpdateBarrelAlpha(this);
  return 0LL;
}
