/*
 * XREFs of ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140310430
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x140334850 (NtGdiSwapBuffers.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     UserGetHwnd @ 0x1402A496C (UserGetHwnd.c)
 */

DEVLOCKOBJ_WNDOBJ *__fastcall DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ(
        DEVLOCKOBJ_WNDOBJ *this,
        struct XDCOBJ *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rcx
  HDC v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  UserEnterUserCritSec(this, a2, a3);
  v5 = 0LL;
  *(_DWORD *)this = 0;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ_WNDOBJ *)((char *)this + 8));
  *((_QWORD *)this + 21) = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ_WNDOBJ *)((char *)this + 8), a2, 0);
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) == 0 || *(_DWORD *)(v7 + 32) )
  {
    v9 = *(_QWORD *)(v7 + 496);
    if ( v9 )
      v5 = *(_QWORD *)(v9 + 136);
    *((_QWORD *)this + 21) = v5;
  }
  else
  {
    v8 = *(HDC *)v7;
    v11 = 0LL;
    if ( !(unsigned int)UserGetHwnd(v8, &v11, (__int64 *)this + 21, v6) )
      EngSetLastError(6u);
  }
  return this;
}
