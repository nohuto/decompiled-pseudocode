/*
 * XREFs of ??_GVIDMM_SYSTEM_HEAP@@UEAAPEAXI@Z @ 0x14004F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PARAVIRTUALIZATION_HEAP@@UEAA@XZ @ 0x1400AC380 (--1VIDMM_PARAVIRTUALIZATION_HEAP@@UEAA@XZ.c)
 */

VIDMM_SYSTEM_HEAP *__fastcall VIDMM_SYSTEM_HEAP::`scalar deleting destructor'(VIDMM_SYSTEM_HEAP *this, char a2)
{
  VIDMM_PARAVIRTUALIZATION_HEAP::~VIDMM_PARAVIRTUALIZATION_HEAP(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
