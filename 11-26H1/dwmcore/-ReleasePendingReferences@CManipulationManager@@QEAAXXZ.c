/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x180186630
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180226358 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rbx
  __int64 v2; // rsi
  char *v3; // rcx
  __int64 v4; // rax

  v1 = (char *)this + 80;
  while ( 1 )
  {
    v2 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    v3 = *(char **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v1 = v4;
    *(_QWORD *)(v4 + 8) = v1;
    if ( v3 != v1 )
    {
      v2 = *((_QWORD *)v3 + 2);
      operator delete(v3, 0x18uLL);
      --*((_DWORD *)v1 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    if ( !v2 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
