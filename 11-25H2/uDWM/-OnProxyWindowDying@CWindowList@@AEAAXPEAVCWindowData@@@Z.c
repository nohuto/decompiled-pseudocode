/*
 * XREFs of ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E670C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnProxyWindowDying(CWindowList *this, struct CWindowData *a2)
{
  *(_QWORD *)(*((_QWORD *)a2 + 82) + 648LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                         + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
    *(_QWORD *)(*((_QWORD *)a2 + 82) + 40LL),
    0LL,
    *((_QWORD *)a2 + 5));
}
