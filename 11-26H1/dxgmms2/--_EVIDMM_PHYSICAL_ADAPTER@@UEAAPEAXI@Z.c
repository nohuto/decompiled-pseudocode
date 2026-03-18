/*
 * XREFs of ??_EVIDMM_PHYSICAL_ADAPTER@@UEAAPEAXI@Z @ 0x14004F730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER@@UEAA@XZ @ 0x1400B3AD4 (--1VIDMM_PHYSICAL_ADAPTER@@UEAA@XZ.c)
 */

VIDMM_PHYSICAL_ADAPTER *__fastcall VIDMM_PHYSICAL_ADAPTER::`vector deleting destructor'(
        VIDMM_PHYSICAL_ADAPTER *this,
        char a2)
{
  VIDMM_PHYSICAL_ADAPTER::~VIDMM_PHYSICAL_ADAPTER(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
