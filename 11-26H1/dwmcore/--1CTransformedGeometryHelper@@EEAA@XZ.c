/*
 * XREFs of ??1CTransformedGeometryHelper@@EEAA@XZ @ 0x1801B859C
 * Callers:
 *     ??_ECTransformedGeometryHelper@@EEAAPEAXI@Z @ 0x1801B8560 (--_ECTransformedGeometryHelper@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTransformedGeometryHelper::~CTransformedGeometryHelper(CTransformedGeometryHelper *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 7) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
}
