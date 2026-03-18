/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x140062FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x14006D900 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 64) |= 1u;
  CFlipResourceState::Remarshal(this);
}
