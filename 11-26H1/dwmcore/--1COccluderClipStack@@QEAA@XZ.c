/*
 * XREFs of ??1COccluderClipStack@@QEAA@XZ @ 0x18020E94C
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall COccluderClipStack::~COccluderClipStack(void **this)
{
  operator delete(this[3]);
  operator delete(*this);
}
