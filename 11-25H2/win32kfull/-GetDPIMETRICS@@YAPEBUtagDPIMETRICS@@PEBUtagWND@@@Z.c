/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x14003F6E8
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x14015522C (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1402EA96C (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1402EAC74 (xxxMNDrawFullNC.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     GetDPIMETRICSForDpi @ 0x140042E30 (GetDPIMETRICSForDpi.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(const struct tagWND *a1)
{
  __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    v3 = *(_DWORD *)(v2 + 288) & 0xF;
    if ( v3 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v2 + 288) >> 8) & 0x1FF;
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( v3
      || (v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
LABEL_9:
    WindowDpiLastNotify = 96;
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
