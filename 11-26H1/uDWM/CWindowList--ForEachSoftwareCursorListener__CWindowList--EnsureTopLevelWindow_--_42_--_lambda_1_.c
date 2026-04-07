/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__CWindowList::EnsureTopLevelWindow_::_42_::_lambda_1___ @ 0x18008A528
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__CWindowList::EnsureTopLevelWindow_::_42_::_lambda_1___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 640) + 8 * i);
    (**v5)(v5, *(_QWORD *)(**(_QWORD **)a2 + 440LL));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
