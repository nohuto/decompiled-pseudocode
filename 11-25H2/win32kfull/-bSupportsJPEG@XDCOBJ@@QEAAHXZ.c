/*
 * XREFs of ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x140267ADC
 * Callers:
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x140267AB0 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140327DC8 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsJPEG(XDCOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 76) & 1) == 0 || *(_DWORD *)(v1 + 32) == 1 )
    return 0;
  return v2;
}
