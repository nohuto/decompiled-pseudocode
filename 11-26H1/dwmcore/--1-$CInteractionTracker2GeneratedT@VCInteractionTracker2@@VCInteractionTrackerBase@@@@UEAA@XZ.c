/*
 * XREFs of ??1?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@UEAA@XZ @ 0x180271348
 * Callers:
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::~CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>(
        CInteractionTrackerBase *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)this + 50);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 52) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 47);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 49) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 44);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 46) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 43) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 38);
  if ( v6 )
  {
    std::_Deallocate<16>(v6, (*((_QWORD *)this + 40) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  CInteractionTrackerBase::~CInteractionTrackerBase(this);
}
