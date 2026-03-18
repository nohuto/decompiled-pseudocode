/*
 * XREFs of ??1VIDMM_LOCKED_PAGE_HISTORY@@QEAA@XZ @ 0x14009CFBC
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_LOCKED_PAGE_HISTORY::~VIDMM_LOCKED_PAGE_HISTORY(VIDMM_LOCKED_PAGE_HISTORY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete(v1);
}
