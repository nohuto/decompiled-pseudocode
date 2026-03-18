/*
 * XREFs of ??1?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@UEAA@XZ @ 0x180284FD0
 * Callers:
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1802850D0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::~CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>(
        CFilterEffect *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 54);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 56) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 53) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 50) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 47) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  CFilterEffect::~CFilterEffect(this);
}
