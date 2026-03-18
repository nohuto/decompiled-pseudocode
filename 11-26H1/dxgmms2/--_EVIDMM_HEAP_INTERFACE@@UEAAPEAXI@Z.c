/*
 * XREFs of ??_EVIDMM_HEAP_INTERFACE@@UEAAPEAXI@Z @ 0x14004F420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

VIDMM_HEAP_INTERFACE *__fastcall VIDMM_HEAP_INTERFACE::`vector deleting destructor'(
        VIDMM_HEAP_INTERFACE *this,
        char a2)
{
  *(_QWORD *)this = &VIDMM_HEAP_INTERFACE::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
