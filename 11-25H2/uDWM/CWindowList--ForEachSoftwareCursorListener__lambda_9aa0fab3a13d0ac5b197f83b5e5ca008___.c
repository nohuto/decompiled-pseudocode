/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_9aa0fab3a13d0ac5b197f83b5e5ca008___ @ 0x1800E24C4
 * Callers:
 *     ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z @ 0x18007B2B8 (-UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_9aa0fab3a13d0ac5b197f83b5e5ca008___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, *(_QWORD *)(*a2 + 88LL), a2[1]);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
