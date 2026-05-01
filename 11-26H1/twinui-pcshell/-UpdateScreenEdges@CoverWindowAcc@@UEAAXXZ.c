/*
 * XREFs of ?UpdateScreenEdges@CoverWindowAcc@@UEAAXXZ @ 0x180535F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CoverWindowAcc::UpdateScreenEdges(HWND *this)
{
  HMONITOR v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64 *, __int128 *); // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  void (__fastcall *v8)(__int64 *, __int128 *); // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, __int128 *); // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF

  v2 = MonitorFromWindow(this[9], 0);
  if ( v2 )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v2, &mi) )
    {
      v3 = (__int64 *)this[3];
      v4 = *v3;
      DWORD2(v13) = mi.rcMonitor.left + 1;
      v5 = *(void (__fastcall **)(__int64 *, __int128 *))(v4 + 40);
      HIDWORD(v13) = mi.rcMonitor.bottom;
      *(_QWORD *)&v13 = *(_QWORD *)&mi.rcMonitor.left;
      v5(v3, &v13);
      v6 = (__int64 *)this[4];
      v7 = *v6;
      LODWORD(v13) = mi.rcMonitor.left;
      v8 = *(void (__fastcall **)(__int64 *, __int128 *))(v7 + 40);
      HIDWORD(v13) = mi.rcMonitor.top + 1;
      *(_QWORD *)((char *)&v13 + 4) = *(_QWORD *)&mi.rcMonitor.top;
      v8(v6, &v13);
      v9 = (__int64 *)this[5];
      v10 = *v9;
      LODWORD(v13) = mi.rcMonitor.right - 1;
      DWORD1(v13) = mi.rcMonitor.top;
      v11 = *(void (__fastcall **)(__int64 *, __int128 *))(v10 + 40);
      *((_QWORD *)&v13 + 1) = *(_QWORD *)&mi.rcMonitor.right;
      v11(v9, &v13);
    }
  }
}
