/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x14007FC00
 * Callers:
 *     DxgkFlipOverlay @ 0x1401F1900 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401F1E10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401F23C0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this, unsigned __int64 a2)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8), a2);
}
