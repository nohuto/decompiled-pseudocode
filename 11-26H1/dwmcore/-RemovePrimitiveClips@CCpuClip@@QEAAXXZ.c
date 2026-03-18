/*
 * XREFs of ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x18025A1D4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CCpuClip::RemovePrimitiveClips(CCpuClip *this)
{
  if ( *((_BYTE *)this + 108) )
  {
    CShapePtr::~CShapePtr((CCpuClip *)((char *)this + 16));
    *((_BYTE *)this + 108) = 0;
  }
}
