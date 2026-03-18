/*
 * XREFs of ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x14017AFD8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // rsi
  _DWORD *v3; // rbx
  int *v4; // r14
  __int64 v5; // rsi
  int v6; // eax

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    return 1LL;
  if ( !*((_BYTE *)this + 273) )
    return 1LL;
  v3 = (_DWORD *)((char *)this + 112);
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    return 1LL;
  v4 = (int *)((char *)this + 112);
  v5 = *(_QWORD *)(v1 + 496);
  if ( *((_QWORD *)this + 42) )
  {
    GrepCaptureLiveMemoryDump(400LL, 57LL, 1LL);
    v4 = (int *)((char *)this + 112);
  }
  *((_QWORD *)this + 42) = v5;
  if ( !v5 )
    return 1LL;
  v6 = SURFACE::Map(v5);
  if ( v6 != 2 )
  {
    if ( v6 == 1 )
      *v3 |= 0x80u;
    *v4 = *v3 | 0x1000000;
    return 1LL;
  }
  return 0LL;
}
