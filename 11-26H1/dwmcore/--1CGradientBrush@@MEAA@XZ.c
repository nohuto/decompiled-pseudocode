/*
 * XREFs of ??1CGradientBrush@@MEAA@XZ @ 0x18020B1B4
 * Callers:
 *     ??1CRadialGradientBrush@@UEAA@XZ @ 0x1800E12EC (--1CRadialGradientBrush@@UEAA@XZ.c)
 *     ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801BF790 (--_ECLinearGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1CGradientSource@@MEAA@XZ @ 0x180103BB4 (--1CGradientSource@@MEAA@XZ.c)
 */

void __fastcall CGradientBrush::~CGradientBrush(CGradientBrush *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, 4 * ((__int64)(*((_QWORD *)this + 29) - (_QWORD)v2) >> 2));
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  CGradientSource::~CGradientSource((CGradientBrush *)((char *)this + 152));
  CGradientBrushGeneratedT<CGradientBrush,CBrush>::~CGradientBrushGeneratedT<CGradientBrush,CBrush>(this);
}
