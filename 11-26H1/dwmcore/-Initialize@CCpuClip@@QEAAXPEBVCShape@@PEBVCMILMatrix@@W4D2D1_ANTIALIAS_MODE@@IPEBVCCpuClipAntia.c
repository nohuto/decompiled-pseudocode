/*
 * XREFs of ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x18000FB50
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClip::Initialize(
        CCpuClip *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        unsigned int a5,
        const struct CCpuClipAntialiasSinkContext *a6)
{
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 1) = a6;
  *((_BYTE *)this + 108) = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 25) = a4;
  if ( a3 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)a3;
    *((_OWORD *)this + 3) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 4) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 5) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 24) = *((_DWORD *)a3 + 16);
  }
  else
  {
    *((_QWORD *)this + 4) = 1065353216LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
    *(_QWORD *)((char *)this + 52) = 1065353216LL;
    *(_QWORD *)((char *)this + 60) = 0LL;
    *((_DWORD *)this + 17) = 0;
    *((_QWORD *)this + 9) = 1065353216LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
    *((_DWORD *)this + 23) = 1065353216;
    *((_BYTE *)this + 97) &= 0xE9u;
    *((_BYTE *)this + 97) |= 0x29u;
    *((_BYTE *)this + 96) = -86;
  }
}
