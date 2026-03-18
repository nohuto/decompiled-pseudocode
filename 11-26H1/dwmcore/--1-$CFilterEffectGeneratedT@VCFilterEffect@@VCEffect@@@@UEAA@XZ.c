/*
 * XREFs of ??1?$CFilterEffectGeneratedT@VCFilterEffect@@VCEffect@@@@UEAA@XZ @ 0x180245B60
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180245F14 (--1CFilterEffect@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CFilterEffectGeneratedT<CFilterEffect,CEffect>::~CFilterEffectGeneratedT<CFilterEffect,CEffect>(
        CResource *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 25) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 22) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 19) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 16) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    std::_Deallocate<16>(v6, (*((_QWORD *)this + 13) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  CResource::~CResource(this);
}
