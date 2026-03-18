/*
 * XREFs of _RealChildWindowFromPoint @ 0x1400234DC
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x140023470 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140022254 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 */

tagWND *__fastcall RealChildWindowFromPoint(tagWND *this, struct tagPOINT a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  tagWND *DesktopWindow; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  tagWND *v8; // rsi
  tagWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagPOINT v12; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v13; // [rsp+48h] [rbp+28h] BYREF

  v13 = a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(this, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v13, &v13, this, 0LL);
  DesktopWindow = (tagWND *)GetDesktopWindow(this);
  v5 = (char *)this + 40;
  if ( this != DesktopWindow )
  {
    v6 = *(_QWORD *)v5;
    v13.x += *(_DWORD *)(*(_QWORD *)v5 + 104LL);
    v13.y += *(_DWORD *)(v6 + 108);
  }
  if ( !(unsigned int)PtInRect(*(_QWORD *)v5 + 104LL) || tagWND::PtOutsideClipRgnOrMaxClip(this, &v13) )
    return 0LL;
  v8 = 0LL;
  v9 = (tagWND *)*((_QWORD *)this + 14);
  v12 = v13;
  while ( v9 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v9) || !IsWindowCloaked(v9)) )
    {
      TransformPointBetweenCoordinateSpaces(&v13, &v12, v9, this);
      if ( (unsigned int)PtInRect(*((_QWORD *)v9 + 5) + 88LL) )
      {
        if ( !tagWND::PtOutsideClipRgnOrMaxClip(v9, &v13) )
        {
          if ( *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872) + 868LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v9 + 5) + 28LL) & 0xF) != 7 )
          {
            return v9;
          }
          v8 = v9;
        }
      }
    }
    v9 = (tagWND *)*((_QWORD *)v9 + 11);
  }
  if ( v8 )
    return v8;
  return this;
}
