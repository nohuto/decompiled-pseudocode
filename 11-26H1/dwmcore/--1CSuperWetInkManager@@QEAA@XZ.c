/*
 * XREFs of ??1CSuperWetInkManager@@QEAA@XZ @ 0x18022A180
 * Callers:
 *     ??R?$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z @ 0x18022A3E0 (--R-$default_delete@VCSuperWetInkManager@@@std@@QEBAXPEAVCSuperWetInkManager@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x180229220 (--$_Destroy_range@V-$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetS.c)
 */

void __fastcall CSuperWetInkManager::~CSuperWetInkManager(CSuperWetInkManager *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, 8 * ((__int64)(*((_QWORD *)this + 9) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(v3, *((_QWORD *)this + 5));
    std::_Deallocate<16>(*((void **)this + 4), 8 * ((__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) >> 3));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 3) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
