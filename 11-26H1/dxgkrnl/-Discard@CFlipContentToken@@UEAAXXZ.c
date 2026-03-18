/*
 * XREFs of ?Discard@CFlipContentToken@@UEAAXXZ @ 0x140018B30
 * Callers:
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14003E548 (--1CFlipContentToken@@UEAA@XZ.c)
 * Callees:
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x140018B54 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::Discard(CFlipContentToken *this)
{
  CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
  *((_DWORD *)this + 6) = 6;
}
