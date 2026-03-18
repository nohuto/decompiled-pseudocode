/*
 * XREFs of ?pdcoAA@SURFACE@@QEAAPEAVXDCOBJ@@XZ @ 0x1401AEB08
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 * Callees:
 *     <none>
 */

struct XDCOBJ *__fastcall SURFACE::pdcoAA(SURFACE *this)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  v4 = v3 + 8;
  v5 = -v3;
  if ( (v4 & -(__int64)(v5 != 0)) != 0 )
    return *(struct XDCOBJ **)((v4 & -(__int64)(v5 != 0)) + 0x120);
  else
    return (struct XDCOBJ *)*((_QWORD *)this + 13);
}
