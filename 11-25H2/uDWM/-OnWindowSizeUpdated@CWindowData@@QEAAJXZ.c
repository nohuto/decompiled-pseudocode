/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180044248
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4660 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180044338 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180044AA8 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800942A0 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180096D4C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CTopLevelWindow **this)
{
  int v2; // edi
  CWindowIconic *v3; // rcx
  int v4; // eax
  __int64 i; // rdi
  CThumbnailVisual *v7; // rcx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CTopLevelWindow::OnWindowSizeUpdated(this[55]);
  if ( v2 < 0 )
  {
    v8 = 716LL;
    goto LABEL_13;
  }
  v3 = this[61];
  if ( v3 )
  {
    v2 = CWindowIconic::OnWindowSizeUpdated(v3);
    if ( v2 < 0 )
    {
      v8 = 721LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)v2,
        v9);
      return (unsigned int)v2;
    }
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, CTopLevelWindow **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 58)
                                                             + 96LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
         this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v4,
      v9);
  CWindowData::NotifySWROfMarginOrSizeChange((CWindowData *)this, 1, 1);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 140); i = (unsigned int)(i + 1) )
  {
    v7 = *(CThumbnailVisual **)(*((_QWORD *)this[67] + i) + 88LL);
    if ( v7 )
      CThumbnailVisual::OnDestinationClientRectChanged(v7);
  }
  return 0LL;
}
