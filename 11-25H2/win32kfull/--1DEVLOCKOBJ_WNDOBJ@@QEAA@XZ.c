/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140327064
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x14033EEF0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ_WNDOBJ *)((char *)this + 8));
  if ( !*(_DWORD *)this )
    UserLeaveUserCritSec();
}
