/*
 * XREFs of ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1804C8EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C8F88 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C91D4 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewerHost::UpdateScrollButtonVisibility(CScrollViewerHost *this)
{
  CScrollViewerHost *v1; // rbx

  v1 = (CScrollViewerHost *)((char *)this - 208);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 64LL))(*((_QWORD *)this + 30)) )
  {
    CScrollViewerHost::_LayoutWithScrollButtons(v1);
    (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)this + 40LL))(this);
  }
  else
  {
    CScrollViewerHost::_LayoutWithoutScrollButtons(v1);
  }
}
