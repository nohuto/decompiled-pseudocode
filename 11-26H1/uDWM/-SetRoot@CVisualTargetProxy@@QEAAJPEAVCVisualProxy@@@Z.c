/*
 * XREFs of ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006A244
 * Callers:
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180069F10 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E3560 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTargetProxy::SetRoot(CVisualTargetProxy *this, struct CVisualProxy *a2)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    v2 = *((unsigned int *)a2 + 6);
  else
    v2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 240LL))(
         *((_QWORD *)this + 2),
         *((unsigned int *)this + 6),
         v2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualtargetproxy.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
