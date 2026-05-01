/*
 * XREFs of ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1805214B0
 * Callers:
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x18051E3D0 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180520A48 (-_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180521CB8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDragVisual::_TrackMouseLeave(CDragVisual *this, char a2)
{
  HWND v4; // rax
  DWORD v5; // r8d
  struct tagTRACKMOUSEEVENT v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 327) != a2 )
  {
    v4 = (HWND)*((_QWORD *)this + 19);
    v5 = 2;
    *(_QWORD *)&v6.dwHoverTime = 0LL;
    v6.cbSize = 24;
    v6.hwndTrack = v4;
    if ( !a2 )
      v5 = -2147483646;
    v6.dwFlags = v5;
    if ( TrackMouseEvent(&v6) )
      *((_BYTE *)this + 327) = a2;
  }
}
