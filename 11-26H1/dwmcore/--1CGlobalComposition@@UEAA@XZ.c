/*
 * XREFs of ??1CGlobalComposition@@UEAA@XZ @ 0x1802340D0
 * Callers:
 *     ??_ECGlobalComposition@@UEAAPEAXI@Z @ 0x180234130 (--_ECGlobalComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGlobalComposition::~CGlobalComposition(CGlobalComposition *this, __int64 a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 815);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 817) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 815) = 0LL;
    *((_QWORD *)this + 816) = 0LL;
    *((_QWORD *)this + 817) = 0LL;
  }
  CComposition::~CComposition(this, a2);
}
