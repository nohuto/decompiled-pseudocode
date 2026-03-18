/*
 * XREFs of ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x180191B00
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Remove(__int64 a1, __int64 a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v6 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v7 = *(_QWORD **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(v8 + 8) = a1;
  if ( v7 != (_QWORD *)a1 )
  {
    v6 = v7[2];
    operator delete(v7, 0x18uLL);
    --*(_DWORD *)(a1 + 16);
    v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  }
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection(v3);
  return v6;
}
