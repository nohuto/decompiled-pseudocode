/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAA34
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402CAC68 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *(_QWORD **)(v1 + 456);
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && IsTopLevelWindow((__int64)a1)
    && *(_QWORD *)(v1 + 488) == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176)
    && !IsGhostWindowClass(a1, v7)
    && (*(_DWORD *)(*(_QWORD *)(v1 + 456) + 12LL) & 0x8000000) == 0
    && *v4 != *(_QWORD *)(W32GetUserGdiSessionState(v8) + 40)
    && !(unsigned int)IsProcessDwm(*v4)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 456))
    && (*(_DWORD *)(v1 + 664) > 0x9900u || (*(_DWORD *)(v1 + 680) & 0x80000) == 0)
    && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    return 1;
  }
  return v3;
}
