/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800116B8
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800115C8 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x1800117EC (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180011884 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180014AB0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E3C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // r8d
  LONG v4; // eax
  const struct tagRECT *BorderRect; // rax
  unsigned int *v6; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 87);
  v3 = 0;
  v4 = 0;
  if ( v1[14] - v1[12] >= 0 )
    v4 = v1[14] - v1[12];
  v8.left = v4;
  if ( v1[15] - v1[13] >= 0 )
    v3 = v1[15] - v1[13];
  v8.top = v3;
  CVisual::SetSize(this, (const struct tagSIZE *)&v8);
  BorderRect = CTopLevelWindow::GetBorderRect(this, &v8, 0);
  CWindowBorder::SetBorderRect(*((CWindowBorder **)this + 26), BorderRect);
  CTopLevelWindow::NotifyMouseLeave(this);
  v6 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BH__00__YA_AVDirtyFlags__XZ(&v8);
  CVisual::SetDirtyFlags(this, *v6);
  return 0LL;
}
