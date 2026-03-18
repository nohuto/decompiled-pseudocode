/*
 * XREFs of ??_GVIDMM_SEGMENT_PBMM@@UEAAPEAXI@Z @ 0x140050AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SEGMENT_PBMM@@UEAA@XZ @ 0x140050A84 (--1VIDMM_SEGMENT_PBMM@@UEAA@XZ.c)
 */

VIDMM_SEGMENT_PBMM *__fastcall VIDMM_SEGMENT_PBMM::`scalar deleting destructor'(
        VIDMM_SEGMENT_PBMM *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  VIDMM_SEGMENT_PBMM::~VIDMM_SEGMENT_PBMM(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
