/*
 * XREFs of ??1?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@MEAA@XZ @ 0x18020B234
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18020B1B4 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

void __fastcall CGradientBrushGeneratedT<CGradientBrush,CBrush>::~CGradientBrushGeneratedT<CGradientBrush,CBrush>(
        CBrush *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 16);
  if ( *((_QWORD *)this + 16) )
  {
    std::_Deallocate<16>(
      *((void **)this + 16),
      (*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  CBrush::~CBrush(this);
}
