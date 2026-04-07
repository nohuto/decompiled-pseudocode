/*
 * XREFs of ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E1E44
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001AB8C (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnHostWindowDying(CWindowList *this, struct CWindowData *a2)
{
  *(_QWORD *)(*((_QWORD *)a2 + 81) + 656LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 128LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
    *((_QWORD *)a2 + 5));
  CWindowList::ShowProjectionBorder(this, *((struct CWindowData **)a2 + 81), 0);
  *(_DWORD *)(*((_QWORD *)a2 + 81) + 456LL) = 0;
}
