/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__CWindowList::DestroyWindow_::_11_::_lambda_1___ @ 0x18007C8BC
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FEC0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__CWindowList::DestroyWindow_::_11_::_lambda_1___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 8LL))(v5, *(_QWORD *)(**(_QWORD **)a2 + 440LL));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
