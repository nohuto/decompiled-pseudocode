/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x1800AD2A8
 * Callers:
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800ACCAC (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x1800ACE40 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800ACE90 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800ACF7C (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@MEAA@XZ @ 0x18020B234 (--1-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@MEAA@XZ.c)
 *     ??1?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAA@XZ @ 0x18021521C (--1-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAA@XZ.c)
 *     ??1?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@MEAA@XZ @ 0x180218378 (--1-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@MEAA@XZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180289178 (--1CClipBrush@@MEAA@XZ.c)
 * Callees:
 *     ??1CAnimationDependencies@@QEAA@XZ @ 0x1800AD360 (--1CAnimationDependencies@@QEAA@XZ.c)
 *     ??1?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800AD3A4 (--1-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QE.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rdi
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  CAnimationDependencies::~CAnimationDependencies((CBrush *)((char *)this + 48));
  detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::~vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>((char *)this + 32);
  CMILCOMBaseWeakRefSource<CResourceDeleter>::~CMILCOMBaseWeakRefSource<CResourceDeleter>(this);
}
