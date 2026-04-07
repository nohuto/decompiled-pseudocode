/*
 * XREFs of ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E1EBC
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnProxyWindowDying(CWindowList *this, struct CWindowData *a2)
{
  *(_QWORD *)(*((_QWORD *)a2 + 82) + 648LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59)
                                                         + 56LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
    *(_QWORD *)(*((_QWORD *)a2 + 82) + 40LL),
    0LL,
    *((_QWORD *)a2 + 5));
}
