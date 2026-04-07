/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000A650
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000A050 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800827B0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  __int64 v1; // r9
  char v3; // r10
  LONG v4; // edx
  LONG v5; // r8d
  CDesktopThumbnailCVIVisual *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  LONG v9; // eax
  __int64 v10; // rax
  LONG v11; // edx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 89);
  v3 = *(_BYTE *)(v1 + 678);
  v4 = *(_DWORD *)(v1 + 48);
  v5 = *(_DWORD *)(v1 + 52);
  v14.x = v4;
  v14.y = v5;
  if ( (v3 & 1) != 0 )
  {
    v8 = *(_QWORD *)(v1 + 448);
    v4 += *(_DWORD *)(v8 + 600);
    v9 = v5 + HIDWORD(*(_QWORD *)(v8 + 600));
    v14.x = v4;
    v5 = v9;
    v14.y = v9;
  }
  if ( (*((_BYTE *)this + 201) & 1) != 0 )
  {
    v14.x = -32000;
    v14.y = -32000;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(v1 + 600);
    v11 = v4 - *(_DWORD *)(v10 + 48);
    v14.y = v5 - *(_DWORD *)(v10 + 52);
    v14.x = v11;
  }
  CVisual::SetOffset(this, &v14);
  v6 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 89) + 640LL);
  if ( v6 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v6, 0x1000u);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 184LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
         *((_QWORD *)this + 89));
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v7,
      v12);
  CTopLevelWindow::NotifyMouseLeave(this);
}
