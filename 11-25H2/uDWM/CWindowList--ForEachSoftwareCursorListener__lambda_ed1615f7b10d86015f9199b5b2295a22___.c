/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_ed1615f7b10d86015f9199b5b2295a22___ @ 0x1800E25C4
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E5AB0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_ed1615f7b10d86015f9199b5b2295a22___(
        __int64 a1,
        __int64 **a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rdx
  void (__fastcall **v7)(_QWORD, __int64); // rax
  bool v8; // zf
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(a1 + 640) + 8 * i);
    v6 = **a2;
    v7 = *v5;
    v8 = (*(_BYTE *)(v6 + 676) & 2) == 0;
    v9 = *(_QWORD *)(v6 + 440);
    if ( v8 )
      v7[1](v5, v9);
    else
      (*v7)(v5, v9);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
}
