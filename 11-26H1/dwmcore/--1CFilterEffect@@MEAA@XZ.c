/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x180245F14
 * Callers:
 *     ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x1802464B0 (--_GCAffineTransform2DEffect@@UEAAPEAXI@Z.c)
 *     ??_ECShadowEffect@@UEAAPEAXI@Z @ 0x180246550 (--_ECShadowEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x1802465F0 (--_GCCompositeEffect@@UEAAPEAXI@Z.c)
 *     ??_GCBrightnessEffect@@UEAAPEAXI@Z @ 0x180246640 (--_GCBrightnessEffect@@UEAAPEAXI@Z.c)
 *     ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x180246690 (--_GCColorMatrixEffect@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x180246870 (--_GCFilterEffect@@MEAAPEAXI@Z.c)
 *     ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x18027A1D0 (--_GCLinearTransferEffect@@UEAAPEAXI@Z.c)
 *     ??1?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEAA@XZ @ 0x180284FD0 (--1-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEAA@XZ.c)
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180285B60 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x180245A70 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ.c)
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x180249BA8 (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18026729C (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((char *)this + 312);
  CDeviceResourceTable<CD2DEffect,CFilterEffect>::~CDeviceResourceTable<CD2DEffect,CFilterEffect>((_QWORD *)this + 32);
  std::vector<CLight *>::_Tidy((__int64)this + 232);
  v2 = (void *)*((_QWORD *)this + 26);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 28) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  CFilterEffectGeneratedT<CFilterEffect,CEffect>::~CFilterEffectGeneratedT<CFilterEffect,CEffect>(this);
}
