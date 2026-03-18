/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003A4B0
 * Callers:
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400CB248 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x140117C48 (--3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z.c)
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140129B90 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(VIDMM_MAPPED_VA_RANGE *this)
{
  VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(this);
  VIDMM_MAPPED_VA_RANGE::operator delete(this);
  return this;
}
