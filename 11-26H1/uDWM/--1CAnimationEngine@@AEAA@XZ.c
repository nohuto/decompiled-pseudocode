/*
 * XREFs of ??1CAnimationEngine@@AEAA@XZ @ 0x18009901C
 * Callers:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CAnimationEngine::~CAnimationEngine(void **this)
{
  *this = &CAnimationEngine::`vftable';
  CBitmapSourceArray::~CBitmapSourceArray(this + 9);
  CBitmapSourceArray::~CBitmapSourceArray(this + 5);
}
