/*
 * XREFs of _ChildWindowFromPointEx @ 0x140021FDC
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x140021F60 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402E0EFC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140022254 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1401A6B10 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ChildWindowFromPointEx(tagWND **a1, struct tagPOINT a2, char a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  tagWND *v6; // rcx
  int x; // eax
  tagWND *v8; // rcx
  struct tagPOINT v9; // rdx
  __int64 v10; // rcx
  tagWND *v11; // rcx
  tagWND *i; // rbx
  _DWORD *v13; // rax
  struct tagPOINT v15; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v16; // [rsp+48h] [rbp+28h] BYREF

  v16 = a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v16, &v16, a1, 0LL);
  if ( a1 == (tagWND **)GetDesktopWindow(a1) )
  {
    x = v16.x;
  }
  else
  {
    v6 = a1[5];
    if ( (*((_BYTE *)v6 + 26) & 0x40) != 0 )
      x = *((_DWORD *)v6 + 28) - v16.x;
    else
      x = *((_DWORD *)v6 + 26) + v16.x;
    v16.x = x;
    v16.y += *((_DWORD *)v6 + 27);
  }
  v8 = a1[5];
  v9 = v16;
  v15 = v16;
  if ( x < *((_DWORD *)v8 + 26)
    || x >= *((_DWORD *)v8 + 28)
    || v16.y < *((_DWORD *)v8 + 27)
    || v16.y >= *((_DWORD *)v8 + 29) )
  {
    return 0LL;
  }
  v10 = *((_QWORD *)v8 + 21);
  if ( v10 )
  {
    if ( !(unsigned int)GrePtInRegion(v10, (unsigned int)x) )
      return 0LL;
    v9 = v16;
  }
  v11 = a1[5];
  if ( (*((_BYTE *)v11 + 26) & 8) != 0 && (*((_DWORD *)v11 + 58) & 2) == 0 && !LayerHitTest((struct tagWND *)a1, v9) )
    return 0LL;
  for ( i = a1[14]; i; i = (tagWND *)*((_QWORD *)i + 11) )
  {
    TransformPointBetweenCoordinateSpaces(&v16, &v15, i, a1);
    if ( ((a3 & 1) == 0
       || (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0
       && (!(unsigned int)IsWindowDesktopComposed(i) || !IsWindowCloaked(i)))
      && ((a3 & 2) == 0 || (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 8) == 0)
      && ((a3 & 4) == 0 || (*(_BYTE *)(*((_QWORD *)i + 5) + 24LL) & 0x20) == 0) )
    {
      v13 = (_DWORD *)*((_QWORD *)i + 5);
      if ( v16.x >= v13[22]
        && v16.x < v13[24]
        && v16.y >= v13[23]
        && v16.y < v13[25]
        && !tagWND::PtOutsideClipRgnOrMaxClip(i, &v16)
        && ((*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) == 0
         || (*((_DWORD *)a1[5] + 58) & 2) != 0
         || LayerHitTest(i, v16)) )
      {
        return i;
      }
    }
  }
  return (struct tagWND *)a1;
}
