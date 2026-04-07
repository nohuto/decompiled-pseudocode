/*
 * XREFs of ?CleanupThemeStatics@CWindowList@@QEAAXXZ @ 0x1800784EC
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800066F4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CWindowList::CleanupThemeStatics(CWindowList *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 66);
  if ( v2 )
  {
    operator delete(v2, 0x18uLL);
    *((_QWORD *)this + 66) = 0LL;
  }
}
