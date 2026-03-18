/*
 * XREFs of ??1CProcessAttributionManager@@AEAA@XZ @ 0x1802342C0
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1801C4828 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessAttributionManager::~CProcessAttributionManager(CProcessAttributionManager *this)
{
  CProcessAttributionManager::Record **v1; // rsi
  CProcessAttributionManager::Record **i; // rdi
  void *v4; // rcx

  v1 = (CProcessAttributionManager::Record **)*((_QWORD *)this + 1);
  for ( i = *(CProcessAttributionManager::Record ***)this; i != v1; ++i )
  {
    if ( *i )
      CProcessAttributionManager::Record::`scalar deleting destructor'(*i);
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    std::_Deallocate<16>(v4, (*((_QWORD *)this + 5) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16>(*(void **)this, (*((_QWORD *)this + 2) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
