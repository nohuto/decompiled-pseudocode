/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800148E0
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@MEAAXVDirtyFlags@@@Z @ 0x180087E20 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  __int64 v1; // r9
  bool v3; // sf
  LONG v4; // edx
  LONG v5; // r8d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  LONG v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 87);
  v3 = *(char *)(v1 + 741) < 0;
  v4 = *(_DWORD *)(v1 + 48);
  v5 = *(_DWORD *)(v1 + 52);
  v14.x = v4;
  v14.y = v5;
  if ( v3 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 448) + 456LL);
    v4 += v7;
    v14.x = v4;
    v5 += HIDWORD(v7);
    v14.y = v5;
  }
  if ( (*((_BYTE *)this + 185) & 1) != 0 )
  {
    v14.x = -32000;
    v14.y = -32000;
  }
  else if ( (*(_BYTE *)(v1 + 742) & 8) != 0 )
  {
    v8 = *(_QWORD *)(v1 + 600);
    v9 = v4 - *(_DWORD *)(v8 + 48);
    v14.y = v5 - *(_DWORD *)(v8 + 52);
    v14.x = v9;
  }
  CVisual::SetOffset(this, &v14);
  if ( *(_QWORD *)(*((_QWORD *)this + 87) + 640LL) )
  {
    v10 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v14);
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v11, (unsigned int)*v10);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
         *((_QWORD *)this + 87));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v6,
      v12);
  CTopLevelWindow::NotifyMouseLeave(this);
}
