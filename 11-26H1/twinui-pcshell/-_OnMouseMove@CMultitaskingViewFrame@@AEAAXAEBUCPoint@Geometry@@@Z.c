/*
 * XREFs of ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1804BBCE8
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrame::_OnMouseMove(CMultitaskingViewFrame *this, const struct Geometry::CPoint *a2)
{
  __int64 v4; // rcx
  tagTRACKMOUSEEVENT EventTrack; // [rsp+20h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 2568) )
  {
    EventTrack.hwndTrack = (HWND)*((_QWORD *)this + 6);
    EventTrack.cbSize = 24;
    EventTrack.dwFlags = 2;
    *(_QWORD *)&EventTrack.dwHoverTime = 0LL;
    *((_BYTE *)this + 2568) = TrackMouseEvent(&EventTrack);
  }
  if ( !*((_BYTE *)this + 2569) )
  {
    EventTrack.hwndTrack = (HWND)*((_QWORD *)this + 6);
    *(&EventTrack.dwHoverTime + 1) = 0;
    EventTrack.cbSize = 24;
    EventTrack.dwFlags = 1;
    EventTrack.dwHoverTime = -1;
    *((_BYTE *)this + 2569) = TrackMouseEvent(&EventTrack);
  }
  v4 = *((_QWORD *)this + 315);
  if ( v4 )
  {
    *(_QWORD *)&EventTrack.cbSize = *(_QWORD *)a2;
    EventTrack.hwndTrack = 0LL;
    EventTrack.dwHoverTime = 4;
    (*(void (__fastcall **)(__int64, tagTRACKMOUSEEVENT *))(*(_QWORD *)v4 + 200LL))(v4, &EventTrack);
  }
}
