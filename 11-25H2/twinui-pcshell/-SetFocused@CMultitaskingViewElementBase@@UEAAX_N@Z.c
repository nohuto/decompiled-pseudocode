/*
 * XREFs of ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804B1530
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x1804AED30 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CSwitchItemGrid@@UEAAX_N@Z @ 0x1804B5A30 (-SetFocused@CSwitchItemGrid@@UEAAX_N@Z.c)
 *     ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x1804B6FA0 (-SetFocused@CScrollViewerHost@@UEAAX_N@Z.c)
 *     ?SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z @ 0x1804B9520 (-SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804BC9A0 (-SetFocused@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 *     ?SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z @ 0x1804C1A90 (-SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z.c)
 *     ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x1804C72D0 (-SetFocused@CScrollViewer@@UEAAX_N@Z.c)
 * Callees:
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1804B20E8 (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewElementBase::SetFocused(CMultitaskingViewElementBase *this, char a2)
{
  if ( *((_BYTE *)this + 176) != a2 )
  {
    *((_BYTE *)this + 176) = a2;
    CMultitaskingViewElementBase::_RaiseFocusEvent(this);
  }
  if ( !*((_BYTE *)this + 176) )
  {
    if ( *((_QWORD *)this + 21) )
      (*(void (__fastcall **)(CMultitaskingViewElementBase *, _QWORD))(*(_QWORD *)this + 288LL))(this, 0LL);
  }
}
