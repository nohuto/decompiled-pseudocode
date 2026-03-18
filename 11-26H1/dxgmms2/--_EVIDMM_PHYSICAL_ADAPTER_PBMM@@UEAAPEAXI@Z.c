/*
 * XREFs of ??_EVIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAPEAXI@Z @ 0x14004F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ @ 0x1400AE420 (--1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ.c)
 */

VIDMM_PHYSICAL_ADAPTER_PBMM *__fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::`vector deleting destructor'(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        char a2)
{
  VIDMM_PHYSICAL_ADAPTER_PBMM::~VIDMM_PHYSICAL_ADAPTER_PBMM(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
