/*
 * XREFs of ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CEA30
 * Callers:
 *     ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run @ 0x1804CE0F0 (ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___--Run.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CE168 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVirtualDesktopBarElement::_UpdateScrollElementVisibility(CVirtualDesktopBarElement *this)
{
  _BYTE *v2; // rax
  __int64 v3; // rdx
  void (*v4)(void); // rax

  v2 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v3 = **((_QWORD **)this + 93);
  if ( *v2 )
    v4 = *(void (**)(void))(v3 + 144);
  else
    v4 = *(void (**)(void))(v3 + 136);
  v4();
}
