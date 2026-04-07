/*
 * XREFs of ?CleanupThemeStatics@CWindowList@@QEAAXXZ @ 0x180033B98
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180033990 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CWindowList::CleanupThemeStatics(CWindowList *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 66);
  if ( v3 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
    *((_QWORD *)this + 66) = 0LL;
  }
}
