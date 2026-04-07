/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__CWindowList::IsCursorChange_::_8_::_lambda_1___ @ 0x18006ADC4
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18006ACE0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__CWindowList::IsCursorChange_::_8_::_lambda_1___(
        __int64 a1,
        __int64 **a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // r8
  void (__fastcall **v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(a1 + 640) + 8 * i);
    v6 = **a2;
    v7 = *v5;
    v8 = *(_QWORD *)(v6 + 440);
    if ( (*(_BYTE *)(v6 + 740) & 2) != 0 )
      (*v7)(v5, v8);
    else
      v7[1](v5, v8);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
